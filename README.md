*This project has been created as part of the 42 curriculum by pezio*

## Description

This is a project from School 42. We made a copy of the `printf` function from the `<stdio.h>` library for use in other School 42 projects and to learn how variadic functions work at a low level.

This project is a static library with the main function `ft_printf`.

## Instructions

This project was made using the C language and its basic libraries, and it is currently intended only for Linux-based operating systems.

### For Debian Distros

Basic packages you need to program with `libftprintf.a`

```bash
sudo apt update
sudo apt install build-essential valgrind
```

### Initialize libftprintf

First, you need to initialize `libftprintf`, but this is simple. Just run the following commands in your project directory.

### Build libftprintf

```bash
make
# or
make all
```

This automatically builds `libft` and `libftprintf`, then displays the message:

```text
Library libftprintf.a is ready!
$>
```

### Clean libftprintf

To clean the build files:

```bash
make clean
```

To remove `libftprintf.a`, use:

```bash
make fclean
```

### Basic Include

Now you can use the static library `libftprintf` by including:

```c
#include "ft_printf.h"
```

### Basic Example

```c
#include "ft_printf.h"

int main(void)
{
    char *str = "Hello World!";
    ft_printf("Message: %s\n", str);
    return (0);
}
```

`ft_printf` supports the following conversions:

* `%c` -> Character
* `%s` -> String
* `%d` and `%i` -> Decimal
* `%u` -> Unsigned decimal
* `%x` and `%X` -> Lowercase hexadecimal, uppercase hexadecimal
* `%p` -> Pointer
* `%%` -> Displays the `%` character

## Project Algorithms

The project runs its main loop in `ft_handler.c` with the private function:

```c
int ft_handler(const char *format, va_list list, int count);
```

The `ft_printf` function uses `ft_checker` to verify the format specifier inside `ft_handler`:

```c
static int ft_checker(va_list list, const char *format, size_t i);
```

The `va_list` type comes from the `<stdarg.h>` library, which provides support for variadic functions.

## Resources

* Libft (modified)
* Variadic functions
* `build-essential` for GNU/Linux development
* Valgrind for detecting memory leaks and undefined behavior
* GNU GDB (GNU Debugger)
* Linux Kernel / POSIX
