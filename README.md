*This project has been created as part of the 42 curriculum by luschuma.*

# ft_printf

## Description

`ft_printf` is a recreation of the standard C `printf` function,
developed as part of the 42 curriculum.

The goal is to build a variadic function that reads a format string,
identifies conversion specifiers, retrieves the corresponding arguments,
and writes formatted output to standard output.

The project produces a static library named `libftprintf.a`, which can
be linked into other C projects.

### Supported conversions

  -----------------------------------------------------------------------
  Specifier               Expected argument       Description
  ----------------------- ----------------------- -----------------------
  `%c`                    `int`                   Prints a character

  `%s`                    `char *`                Prints a string

  `%p`                    `void *`                Prints a pointer
                                                  address in hexadecimal

  `%d`                    `int`                   Prints a signed decimal
                                                  integer

  `%i`                    `int`                   Prints a signed decimal
                                                  integer

  `%u`                    `unsigned int`          Prints an unsigned
                                                  decimal integer

  `%x`                    `unsigned int`          Prints an unsigned
                                                  integer in lowercase
                                                  hexadecimal

  `%X`                    `unsigned int`          Prints an unsigned
                                                  integer in uppercase
                                                  hexadecimal

  `%%`                    No argument             Prints a literal
                                                  percent sign
  -----------------------------------------------------------------------

## Implementation

### Variadic arguments

`ft_printf` uses the variadic argument tools provided by `<stdarg.h>`:

-   `va_start` initializes access to the arguments after the format
    string.
-   `va_arg` retrieves each argument using the type required by its
    conversion specifier.
-   `va_end` closes variadic argument handling.

The argument list is passed to the conversion dispatcher through a
pointer to `va_list`. This lets the dispatcher and its helpers advance
the same argument list as conversions are processed.

### Parsing and dispatch

The format string is read one character at a time.

-   Ordinary characters are written directly to standard output.
-   When a `%` is encountered, the following character is checked
    against the supported conversion set.
-   A recognized conversion is sent to the dispatcher.
-   The dispatcher selects the appropriate printing function and
    retrieves the argument with the corresponding type.

Each printing function returns the number of characters it writes.
`ft_printf` adds these values to the count of ordinary characters and
returns the total number of characters printed.

### Printing helpers

The conversion-specific functions are kept separate from the
format-string parser. The parser recognizes and dispatches conversions;
the helpers print their values.

The hexadecimal helper uses a base-printing routine to represent numbers
in base 16. Pointer output is handled separately from ordinary
hexadecimal conversions because it has its own prefix and formatting
requirements.

### Data structures and design choices

The project does not need a custom data structure to process the format
string: it can be traversed directly as a sequence of characters.

The variadic argument list is the central state passed through the
conversion process. A pointer to that list is used when passing it to
helper functions so that argument retrieval advances the same list.

The implementation is divided into small functions to separate parsing,
dispatching, and printing responsibilities. This makes individual
conversions easier to test and keeps the main function focused on
traversing the format string.

## Instructions

### Requirements

-   A C compiler (`cc`)
-   `make`
-   `ar`
-   The project source files
-   The `libft` source files and Makefile in the `libft/` directory

### Build the library

From the root of the repository, run:

``` sh
make
```

This builds the static library:

``` text
libftprintf.a
```

### Clean generated files

Remove object files:

``` sh
make clean
```

Remove object files and the compiled library:

``` sh
make fclean
```

Rebuild from scratch:

``` sh
make re
```

### Use the library

Include the project header in your C file:

``` c
#include "ft_printf.h"
```

Compile your program together with the library. For example:

``` sh
cc -Wall -Wextra -Werror main.c -L. -lftprintf -o test
```

If your test program also needs symbols from `libft`, make sure the
project library contains the required `libft` objects, as intended by
this project's build process.

## Repository structure

The repository is intended to have the following structure:

``` text
ft_printf/
├── ft_printf.c
├── ft_print_functions.c
├── ft_print_functions_2.c
├── ft_printf.h
├── libft/
│   ├── Makefile
│   ├── libft.h
│   └── ...
├── Makefile
└── README.md
```

The `libft/` directory should contain the actual library source files
and its Makefile, not only a symbolic link to a directory outside the
repository.

## Resources

-   The 42 `ft_printf` project subject.
-   The C standard library documentation, especially the documentation
    for `printf` and the variadic argument macros in `<stdarg.h>`.
-   The `man` pages for `write`, `va_start`, `va_arg`, `va_copy`, and
    `va_end`.
-   Compiler and Make documentation.
-   AI assistance (ChatGPT) was used to clarify C and Makefile concepts,
    discuss implementation choices, review potential bugs, and help
    prepare this documentation. The implementation and final project
    decisions are the student's responsibility.
