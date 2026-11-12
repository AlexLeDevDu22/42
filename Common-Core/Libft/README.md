*This activity has been created as part of the 42 curriculum by
`<your_login>`{=html}.*

# Libft

## Description

Libft is a project from the 42 curriculum. Its goal is to create a
personal C library by reimplementing a set of standard C library
functions and developing additional utility functions.

The library provides reusable functions for string manipulation, memory
management, character checking, conversion, output, and linked-list
operations. It is designed to be used in future 42 projects.

## Library Contents

The library is named `libft.a` and includes the following groups of
functions.

### 1. Libc Functions

Reimplementations of standard C library functions, using the `ft_`
prefix:

-   **Character checks:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`,
    `ft_isascii`, `ft_isprint`
-   **String and memory:** `ft_strlen`, `ft_memset`, `ft_bzero`,
    `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`
-   **Character conversion:** `ft_toupper`, `ft_tolower`
-   **String and memory search/comparison:** `ft_strchr`, `ft_strrchr`,
    `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`
-   **Conversions and allocation:** `ft_atoi`, `ft_calloc`, `ft_strdup`

### 2. Additional Functions

Utility functions for working with strings and output:

-   `ft_substr`: creates a substring.
-   `ft_strjoin`: concatenates two strings.
-   `ft_strtrim`: removes specified characters from the beginning and
    end of a string.
-   `ft_split`: splits a string using a delimiter.
-   `ft_itoa`: converts an integer into a string.
-   `ft_strmapi`: applies a function to each character and creates a new
    string.
-   `ft_striteri`: applies a function to each character, allowing it to
    be modified.
-   `ft_putchar_fd`: writes a character to a file descriptor.
-   `ft_putstr_fd`: writes a string to a file descriptor.
-   `ft_putendl_fd`: writes a string followed by a newline to a file
    descriptor.
-   `ft_putnbr_fd`: writes an integer to a file descriptor.

### 3. Linked List Functions

The project also includes functions for manipulating linked lists
through the `t_list` structure:

-   `ft_lstnew`: creates a new list node.
-   `ft_lstadd_front`: adds a node at the beginning of a list.
-   `ft_lstsize`: counts the nodes in a list.
-   `ft_lstlast`: returns the last node.
-   `ft_lstadd_back`: adds a node at the end of a list.
-   `ft_lstdelone`: deletes one node.
-   `ft_lstclear`: deletes a node and all its successors.
-   `ft_lstiter`: applies a function to each node's content.
-   `ft_lstmap`: creates a new list by applying a function to each
    node's content.

## Instructions

### Requirements

-   A C compiler (`cc`).
-   The `make` build tool.
-   The `ar` utility to create the static library.

### Compilation

Clone the repository and enter the project directory:

``` bash
git clone <repository_url>
cd <repository_name>
```

Compile the library:

``` bash
make
```

This creates the static library `libft.a` at the root of the repository.

Available Makefile rules:

``` bash
make        # Compile the library
make all    # Compile the library
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Clean and rebuild the library
```

The source files must compile with `-Wall -Wextra -Werror`. The Makefile
uses `cc` and creates the archive with `ar`.

### Using the library

Include the library header in your C source file:

``` c
#include "libft.h"
```

Compile your program with the library:

``` bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

Run the executable:

``` bash
./program
```

## Resources

The following resources are useful for understanding the C language and
the functions reproduced in this project:

-   `man` pages on Unix/Linux systems (for example, `man strlen`,
    `man memset`, and `man malloc`).
-   The C language documentation: https://en.cppreference.com/w/c
-   The GNU C Library documentation:
    https://www.gnu.org/software/libc/manual/
-   The Open Group specifications:
    https://pubs.opengroup.org/onlinepubs/9799919799/

### AI Usage Disclosure

Artificial intelligence (AI) was used as an assistance tool to help
create and structure this `README.md` file. It was used to organize and
present the project description, function list, compilation
instructions, usage example, and resources.

AI was **not used to generate or implement the project's C functions**.
The purpose of this disclosure is to clearly identify the use of AI in
the documentation.

## Author

-   **42 Login:** `<your_login>`{=html}
