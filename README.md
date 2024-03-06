<h1 align="center"> 📝 ft_printf </h1>

<p align="center">
<img src="https://github.com/kellyhayd/ft_printf/assets/69431689/77fb57ef-ab8f-4f5c-aed4-f29fb6f8462a">
</p>

<p align="center">
<img alt="Static Badge" src="https://img.shields.io/badge/42-S%C3%A3o_Paulo-orange"> <img alt="Static Badge" src="https://img.shields.io/badge/language-c-green">  <img alt="Static Badge" src="https://img.shields.io/badge/submitted_in-dez%2F23-orange">
</p>

>This project is about recoding the printf() function from libc.

<h2> ✏ About </h2>

```
A recreation of the printf() function from libc, handling various conversion specifiers and flags,
ensuring smooth display management and error handling.
```

<h2> ⚙ Requirements </h2>

- The project must be written in `C`.
- Buffer management of the original printf() should not be implemented.
- The function must handle the following conversions: `cspdiuxX%`:
  - `%c` Prints a single character.
  - `%s` Prints a string (as defined by the common C convention).
  - `%p` The `void *` pointer argument has to be printed in hexadecimal format.
  - `%d` Prints a decimal (base 10) number.
  - `%i` Prints an integer in base 10.
  - `%u` Prints an unsigned decimal (base 10) number.
  - `%x` Prints a number in hexadecimal (base 16) lowercase format.
  - `%X` Prints a number in hexadecimal (base 16) uppercase format.
  - `%%` Prints a percent sign.
- The implemented function will be compared against the original printf().
- The `ar` command must be used to create the library. Using the `libtool` command is forbidden.
- The resulting `libftprintf.a` library must be created at the root of the repository.

<h2>  📝 Instructions </h2>

- The function `ft_printf` should have the following prototype: `int ft_printf(const char *, ...)`.
- The function should return the number of characters printed (excluding the null byte used to end output to strings).
- The function should handle the conversion specifiers listed in the requirements.
- All necessary memory allocation must be handled appropriately, and memory leaks should be avoided.

<h2> 🪛 Approach </h2>

The function `ft_printf` will parse the format string and handle each conversion specifier accordingly. It will format and output the data as specified by the format string.

<h2> 🌟 Bonus Part </h2>

<h4> ⭐ Requirements </h4>
* Manage any combination of the following flags: `-0.` and the field minimum width under all conversions.
* Manage all the following flags: `# +` (Yes, one of them is a space)


</markdown>
