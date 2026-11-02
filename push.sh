#!/usr/bin/env bash
set -euo pipefail

ROOT="$(git rev-parse --show-toplevel)"
cd "$ROOT"

echo "==> Repo : $ROOT"

# Vérifie qu'on est sur la branche attendue
BRANCH="$(git branch --show-current)"

if [[ -z "$BRANCH" ]]; then
echo "Erreur : HEAD n'est pas sur une branche."
exit 1
fi

echo "==> Branche : $BRANCH"

echo
echo "==> Suppression des .git imbriqués..."
find "$ROOT" \
-mindepth 2 \
\( -type d -o -type f \) \
-name ".git" \
-print \
-exec rm -rf -- {} +

echo
echo "==> Conversion des anciens sous-repos en fichiers normaux..."

git ls-files -s |
while read -r mode _ _ path; do
if [[ "$mode" == "160000" ]]; then
echo " gitlink -> $path"
git rm --cached -f -- "$path"
fi
done

echo
echo "==> Ajout de tout le contenu..."
git add -A

echo
echo "==> État final :"
git status

echo
read -rp "Continuer et écraser le remote avec cet état ? [y/N] " answer

if [[ "$answer" != "y" && "$answer" != "Y" ]]; then
echo "Annulé."
exit 0
fi

echo
echo "==> Commit..."
git commit -m "Migrate nested repositories to regular files" || {
echo "Aucun nouveau commit nécessaire."
}

echo
echo "==> Push forcé avec protection contre l'écrasement concurrent..."
git push --force-with-lease origin "$BRANCH"

echo
echo "==> Migration terminée."