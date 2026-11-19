*This project has been created as part of the 42 curriculum by filimigu.*

# Libft — My own implementation of a basic C library 

## Description

**Libft** is my first C library, created using the knowledge I earned from the 42 teaching curriculum. It's a custom implementation of core C standard library functions (alongside additional string, memory, file-descriptor output, and singly linked list utilities) that is meant to be used in future projects. This library will be useful in the coming future.

This project compiles with cc (and flags: -Wall -Wextra -Werror) into a static library named `libft.a`, using the `ar` command in a `Makefile`. which produces a static library named 'libft.a'. It uses no global variables and complies with the 42 norms. It also makes sure to free all heap memory at the end of both normal functions (the ones that require malloc) and test functions (added as commentary for ease of evaluation/testing).

---

## Library Contents

The library consists of three parts, each function prototyped in `libft.h`.

### Part 1 — Libc Functions 
These behave exactly the same as the standard `libc` functions, but are prefixed with `ft_`:
* **Character checks & conversions:**
`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* **Character conversions:**
`ft_toupper`, `ft_tolower`
* **String manipulation, inspection and conversion:**
`ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_atoi`
* **Memory operations:**
`ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`


### Part 2 — Additional Functions
Extended utilities not present in standard `libc`:
| **Function** | **Description** |
| - | - |
| **`ft_substr`** | Allocates memory and returns a substring from the parameter string `s`. It starts at the index `start` and has a maximum lenght of `len`;
| **`ft_strjoin`** | Allocates memory and returns a new string, which is the concatenation of `s1` and `s2`;
| **`ft_strtrim`** | Allocates memory and returns a copy of `s1` with the characters from `set` trimmed from the beginning and end of `s1`;
| **`ft_split`** | Allocates memory and returns an array of strings obtained by splitting `s` using the character `c` as a separator. Each string in the returned array is allocated independently and the array itself is also allocated dynamically;
| **`ft_itoa`** | Allocates memory and returns a string representing the integer `n` received as an argument (NUMBER, +NUMBER or -NUMBER);
| **`ft_strmapi`** | Applies the function `f` to each character of the string `s`, passing its index as the first argument and the character itself as the second. A new string is created (with allocated memory) to store the results from the successive applications of `f`;
| **`ft_striteri`** | Similar to the previous function, but it applies the function `f` directly to the string `s`, never allocating memory for a different string; 
| **`ft_putchar_fd`** | Outputs the character `c` to the specified `fd` (file descriptor);
| **`ft_putstr_fd`** | Outputs the string `s` to the specified `fd` (file descriptor);
| **`ft_putendl_fd`** | Same as the function above, but followed by a newline;
| **`ft_putnbr_fd`** | Outputs the integer `n` to the specified `fd` (file descriptor);
| | |

### Part 3 — Singly Linked List Functions
Node creation, traversal, modification, and cleanup operating on `t_list`, defined by the following:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| **Function** | **Description** |
| - | - |
| **`ft_lstnew`** | Creates a new list node;
| **`ft_lstadd_front`** | Adds the node *new* at the beginning of the list;
| **`ft_lstadd_back`** | Adds the node *new* at the end of the list;
| **`ft_lstsize`** | Counts the number of nodes in the list;
| **`ft_lstlast`** | Returns the last node of the list;
| **`ft_lstiter`** | Applies the function *f* to the content of each node of the list *lst*;
| **`ft_lstmap`** | Creates a new list from the results of the function *f* applied to each node of the list *lst*, cleaning up on allocation failure with *del*.
| **`ft_lstdelone`** | Takes a node named *lst* and frees its content (and the node itself) with *del*;
| **`ft_lstclear`** | Like the function above, but applied to the node *lst* and all of its successors instead of just one node. Sets the list pointer to NULL at the end;
| | |

### Technical choices

- Helper functions (for example, the ones in `ft_split`: `word_counter`, `freer` and `fill_array`) are *static*, so their scope doesn't go beyond the necessary *.c* file;
- `ft_putnbr_fd` and `ft_itoa` handle INT_MIN without overflow (that is, -2147483648);
- The Makefile only recompiles the files that changed, without unnecessary relinking.

## Instructions

### Compilation
This compiles the static library `libft.a` using the provided `Makefile`.
From the root of the repository, type one of the following commands:

```bash
make        # This compiles all object files and builds libft.a, equivalent to 'make all'
make clean  # Removes object files (.o)
make fclean # Removes object files and libft.a
make re     # Rebuilds the library from scratch by executing 'fclean' and 'all'
```

### Usage

Include the following header in your code:
```c
#include "libft.h"
```

and link your program with the library when compiling:

```
cc -Wall -Wextra -Werror main.c -L. -lft -o [PROGRAM_NAME]
```
Or alternatively:
```
cc -Wall -Wextra -Werror main.c libft.a -o [PROGRAM_NAME]
```

## Resources

### References

- The `man` pages of the re-implemented `libc` functions (`man 3 strlen`, `man 3 bzero`, `man 3 isascii`, etc);
- The 42 Norm and the `norminette` helper program;
- Peer discussions with other 42 Lisboa students;
- https://github.com/Nuno-Jesus/Make-A-Make and https://wiki42.harmoniedurrant.com/wiki/makefiles for Makefile learning;
- https://www.w3schools.com/c/index.php for general C learning;

### AI Disclosure

Both Gemini (https://gemini.google.com) and Claude (https://claude.com/) were used as AI tutors. None of them provided any code, and they just functioned as tutors who asked questions that I answered to the best of my ability, getting me to figure out the answers to the doubts I had in a more natural way.