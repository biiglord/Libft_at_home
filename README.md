*This project has been created as part of the 42 curriculum.*

# Libft — Custom C Standard Library

## Description

**Libft** is a custom implementation of core C standard library functions alongside additional string, memory, file-descriptor output, and singly linked list utilities. Built from scratch under strict 42 Norminette standards and compiled into a static library (`libft.a`), it serves as the foundational toolkit for subsequent C projects in the 42 curriculum.

---

## Library Contents

### Part 1 — Libc Functions
Standard `<ctype.h>`, `<string.h>`, and `<stdlib.h>` re-implementations:
* **Character checks & conversions:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
* **String manipulation & inspection:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
* **Memory operations:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
* **Conversion:** `ft_atoi`

### Part 2 — Additional Utility Functions
Extended utilities not present in standard `libc`:
* **String creation & transformation:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
* **File descriptor output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Part 3 — Singly Linked List Functions
Node creation, traversal, mutation, and memory-safe cleanup operating on `t_list`:
* **Creation & insertion:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
* **Inspection & traversal:** `ft_lstsize`, `ft_lstlast`, `ft_lstiter`, `ft_lstmap`
* **Deletion:** `ft_lstdelone`, `ft_lstclear`

---

## Instructions

### Compilation
Compile the static library `libft.a` using the provided `Makefile`:

```bash
make        # Compiles all object files and builds libft.a
make clean  # Removes object files (.o)
make fclean # Removes object files and libft.a
make re     # Rebuilds the library from scratch