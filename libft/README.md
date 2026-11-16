*This project has been created as part of the 42 curriculum by luschuma*

# Description

`libft` is a custom C library developed as part of the 42 curriculum. It recreates a selection of standard C library functions and adds utility functions for working with strings, memory, file descriptors, and linked lists.

The goal of the project is to understand how common library functions work internally, practise memory management and pointer manipulation, and build reusable code that can be used in later C projects.

The library includes:

- Character checks and conversions.
- String length, copying, searching, and comparison.
- Memory operations and allocation.
- String creation and transformation utilities.
- Functions that write to file descriptors.
- Singly linked-list operations, including mapping and deletion.

## Instructions

### Requirements

- A `cc` C compiler.
- `make`.
- A Unix-like environment is recommended.

### Compilation

At the root of the repository, run:

```sh
make
```

The Makefile should compile the source files and create the static library `libft.a`.

Common Makefile targets, if implemented in your project:

```sh
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Clean and rebuild the library
```

### Using the library

Include the library header in your C source file:

```c
#include "libft.h"
```

Compile your program together with the library:

```sh
cc main.c -L. -lft -o program
```

Run it with:

```sh
./program
```

Make sure `libft.a` and `libft.h` are available in the paths used by your compiler. If your Makefile uses different target names or paths, adjust these commands accordingly.

## Library Reference

The following is a guide to the functions exposed by this version of `libft`. Their exact behaviour should match the corresponding 42 subject and function specifications.

### 1. Character checks and conversions

| Function | Description |
| --- | --- |
| `ft_isalpha(int c)` | Returns non-zero if `c` is an alphabetic character; otherwise returns zero. |
| `ft_isdigit(int c)` | Returns non-zero if `c` is a decimal digit (`'0'`–`'9'`); otherwise returns zero. |
| `ft_isalnum(int c)` | Returns non-zero if `c` is an alphabetic character or a decimal digit. |
| `ft_isascii(int c)` | Returns non-zero if `c` is in the ASCII range (0–127). |
| `ft_isprint(int c)` | Returns non-zero if `c` is a printable character in the expected character range. |
| `ft_toupper(int c)` | Converts a lowercase letter to uppercase; other values are returned unchanged. |
| `ft_tolower(int c)` | Converts an uppercase letter to lowercase; other values are returned unchanged. |

### 2. String length, copying, and concatenation

| Function | Description |
| --- | --- |
| `ft_strlen(const char *s)` | Returns the number of characters in `s`, excluding the terminating null byte. |
| `ft_strlcpy(char *dst, const char *src, size_t size)` | Copies up to `size - 1` characters and null-terminates the destination when `size` is non-zero. Returns the length of `src`. |
| `ft_strlcat(char *dst, const char *src, size_t size)` | Appends as much of `src` as fits within the destination size and returns the length it tried to create, following `strlcat` semantics. |
| `ft_strdup(const char *s1)` | Allocates and returns a duplicate of `s1`. The caller must free the returned string. |
| `ft_substr(char const *s, unsigned int start, size_t len)` | Allocates a substring of up to `len` characters beginning at `start`. |
| `ft_strjoin(char const *s1, char const *s2)` | Allocates and returns a new string containing `s1` followed by `s2`. |
| `ft_strtrim(char const *s1, char const *set)` | Allocates a copy of `s1` with characters from `set` removed from both ends. |
| `ft_split(const char *s, char c)` | Splits `s` at occurrences of delimiter `c` and returns a null-terminated array of allocated strings. The caller should free each string and then the array. |
| `ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Allocates a new string by applying `f` to each character and its index. |
| `ft_striteri(char *s, void (*f)(unsigned int, char *))` | Applies `f` to each character in `s`, passing its index and a pointer to the character; modifies the original string if `f` does so. |

### 3. String searching and comparison

| Function | Description |
| --- | --- |
| `ft_strchr(const char *s, int c)` | Returns a pointer to the first occurrence of `c` in `s`, or `NULL` if not found. The terminating null byte can be searched for. |
| `ft_strrchr(const char *s, int c)` | Returns a pointer to the last occurrence of `c` in `s`, or `NULL` if not found. |
| `ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares at most the first `n` characters of two strings and returns a value indicating their ordering. |
| `ft_strnstr(const char *big, const char *little, size_t len)` | Searches for `little` within the first `len` characters of `big`, according to `strnstr` semantics. |
| `ft_atoi(const char *str)` | Converts the initial portion of a string to an integer, following the specified `atoi` behaviour. |

### 4. Memory operations and allocation

| Function | Description |
| --- | --- |
| `ft_memset(void *b, int c, size_t len)` | Fills the first `len` bytes of the memory area `b` with the byte value of `c`, then returns `b`. |
| `ft_bzero(void *s, size_t n)` | Sets the first `n` bytes of `s` to zero. |
| `ft_memcpy(void *restrict dst, const void *restrict src, size_t n)` | Copies `n` bytes from `src` to `dst`; the memory regions must not overlap. Returns `dst`. |
| `ft_memmove(void *dst, const void *src, size_t len)` | Copies `len` bytes and supports overlapping source and destination regions. Returns `dst`. |
| `ft_memchr(const void *s, int c, size_t n)` | Searches the first `n` bytes of a memory area for byte `c`, returning a pointer to it or `NULL`. |
| `ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares the first `n` bytes of two memory areas. |
| `ft_calloc(size_t count, size_t size)` | Allocates memory for `count` elements of `size` bytes each and initializes the allocated memory to zero. Returns `NULL` if allocation fails. |

### 5. File-descriptor output

These functions write to the supplied file descriptor. For example, `1` normally represents standard output and `2` standard error.

| Function | Description |
| --- | --- |
| `ft_putchar_fd(char c, int fd)` | Writes one character to `fd`. |
| `ft_putstr_fd(char *s, int fd)` | Writes a string to `fd`. |
| `ft_putendl_fd(char *s, int fd)` | Writes a string followed by a newline to `fd`. |
| `ft_putnbr_fd(int n, int fd)` | Writes the decimal representation of an integer to `fd`. |

### 6. Singly linked lists

The linked-list functions use the `t_list` type, which must be declared in `libft.h`. In the usual 42 definition, each node contains a `void *content` pointer and a `next` pointer to the next node.

| Function | Description |
| --- | --- |
| `ft_lstnew(void *content)` | Allocates a new node, stores `content`, and initializes its `next` pointer to `NULL`. |
| `ft_lstadd_front(t_list **lst, t_list *new)` | Adds `new` to the beginning of the list and updates the head pointer. |
| `ft_lstsize(t_list *lst)` | Returns the number of nodes in the list. |
| `ft_lstlast(t_list *lst)` | Returns a pointer to the last node, or `NULL` for an empty list. |
| `ft_lstadd_back(t_list **lst, t_list *new)` | Adds `new` to the end of the list and updates the head if the list was empty. |
| `ft_lstdelone(t_list *lst, void (*del)(void *))` | Applies `del` to the node's content and frees the node. It does not update the list head or free other nodes. |
| `ft_lstclear(t_list **lst, void (*del)(void *))` | Applies `del` to each node's content, frees all nodes, and sets the head pointer to `NULL`. |
| `ft_lstiter(t_list *lst, void (*f)(void *))` | Applies `f` to the content of each node without creating a new list. |
| `ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Creates a new list by applying `f` to each node's content. If construction fails, the partially created list should be freed using `del`. |

### Memory ownership

Several functions allocate memory dynamically, including `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_calloc`, and `ft_lstnew` (for the node itself). Check each function's contract and free allocated memory when it is no longer needed.

For linked lists, the `del` callback determines how node content is released. Use a callback appropriate to how the content was allocated; do not free borrowed or stack-allocated memory.

## Resources

### Documentation and references

- [42 School](https://42.fr/)
- [The Open Group — POSIX specifications](https://pubs.opengroup.org/onlinepubs/9699919799/)
- [Linux man-pages project](https://man7.org/linux/man-pages/)
- [cppreference — C string and memory functions](https://en.cppreference.com/w/c/string/byte)
- [cppreference — Dynamic memory management](https://en.cppreference.com/w/c/memory)

These references are useful for understanding standard C and POSIX behaviour. The 42 project subject takes precedence wherever it specifies behaviour that differs from a system implementation.

### Use of AI

AI assistance was used to help draft and organize this README and describe the public function prototypes. The implementation, testing, and final verification of the code should be reviewed by the project author. Any additional AI use in implementation or debugging should be disclosed accurately according to the school's requirements.

---