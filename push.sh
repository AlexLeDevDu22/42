#!/usr/bin/env bash
set -euo pipefail

# Dépôt général à publier
ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REMOTE="git@github.com:AlexLeDevDu22/42-Common-Core.git"
BRANCH="main"

cd "$ROOT"

echo "==> Repo général : $ROOT"
echo "==> Remote cible : $REMOTE"
echo "==> Branche cible : $BRANCH"

# Vérifie que la racine est bien un dépôt Git
if ! git rev-parse --is-inside-work-tree >/dev/null 2>&1; then
    echo "Erreur : le dossier root n'est pas un dépôt Git."
    exit 1
fi

# Vérifie que le remote est bien celui attendu
echo
echo "==> Vérification du dépôt distant..."
git remote get-url publish >/dev/null 2>&1 || \
    git remote add publish "$REMOTE"

if [[ "$(git remote get-url publish)" != "$REMOTE" ]]; then
    echo "Erreur : le remote publish ne correspond pas au dépôt attendu."
    exit 1
fi

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
        echo "gitlink -> $path"
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
echo "==> Push forcé vers le dépôt général..."
git push --force-with-lease publish "$BRANCH:$BRANCH"

echo
echo "==> Migration terminée."
