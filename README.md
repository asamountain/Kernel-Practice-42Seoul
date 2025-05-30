# kernelPractice42Seoul

This repository contains my practice scripts and code from the 42 Seoul kernel and shell curriculum. It includes shell scripting, C programming, and system-level exercises, organized by project and topic.

## Granular File List and Practice Topics

- **shell00/ex00/z**  
  - **Type:** Plain text file (no extension, single character content)  
  - **Purpose:** Practice creating a file with a specific name and content, and understanding file permissions and minimal shell file requirements.  
  - **Shell Concepts:** File creation, naming conventions, permissions, file content.

- **shell00/ex01/testShell00.tar**  
  - **Type:** tar archive file  
  - **Purpose:** Practice creating and extracting tar archives, understanding file packaging and compression in Unix systems.  
  - **Shell Concepts:** `tar` command usage, file archiving, compression, extraction, file structure preservation.

- **shell00/ex02/ex02.tar**  
  - **Type:** tar archive file  
  - **Purpose:** Practice creating and extracting tar archives, understanding file packaging and compression in Unix systems.  
  - **Shell Concepts:** `tar` command usage, file archiving, compression, extraction, file structure preservation.

- **shell00/ex03/klist.txt**  
  - **Type:** Plain text file (Kerberos ticket cache output)  
  - **Purpose:** Demonstrate the output of the `klist` command, which lists Kerberos tickets for the current user/session.  
  - **Shell/System Concepts:** Kerberos authentication, ticket cache, principal, ticket expiration, system security context.

- **shell00/ex04/midLS**  
  - **Type:** Shell script (single command)  
  - **Purpose:** List directory contents in creation order (not sorted), demonstrating the use of `ls` with the `-U` option.  
  - **Shell Concepts:** `ls` command, `-U` option for unsorted output, command execution, file listing.

- **shell00/ex05/git_commit.sh**  
  - **Type:** Shell script (single command)  
  - **Purpose:** Show the last 5 git commit hashes in the current repository.  
  - **Shell Concepts:** `git log` command, `--pretty=format` option, limiting output, version control history.  
  - **Command breakdown:**  
    - `git log --pretty=format:%H -5`  
      - `--pretty=format:%H`: show only commit hashes  
      - `-5`: limit to 5 results

- **shell00/ex06/git_ignore.sh**  
  - **Type:** Shell script (single command)  
  - **Purpose:** List all ignored and untracked files in the git repository.  
  - **Shell Concepts:** `git ls-files` command, `--ignore`, `--exclude-standard`, `--others` options, understanding `.gitignore` and repository status.

- **shell00/ex07/b**  
  - **Type:** Plain text file (sample text content)  
  - **Purpose:** Used for text processing, file manipulation, or as a sample input for shell commands and scripts.  
  - **Shell Concepts:** File content manipulation, text processing, redirection, command-line utilities.

- **shell00/ex08/clean**  
  - **Type:** Shell script (single command)  
  - **Purpose:** Clean up backup and temporary files (ending with `~` or surrounded by `#`) in the current directory tree.  
  - **Shell Concepts:** `find` command, `-type f`, `-name` pattern matching, `-delete`, `-print`, file cleanup automation.

- **shell00/ex09/ft_magic**  
  - **Type:** Magic file (for the `file` command)  
  - **Purpose:** Define a custom file signature so the `file` utility can recognize files with specific content as a custom type.  
  - **Shell Concepts:** `file` command, magic file format, custom file type recognition, file signature definition.

---

- **c00/ex00/ft_putchar.c**  
  - **Type:** C source file  
  - **Purpose:** Print a single character to standard output  
  - **C Concepts:** Function definition, character output, use of `write`  
  - **Logic:** Defines `ft_putchar(char c)` which calls `write(1, &c, 1);`

- **c00/ex01/ft_print_alphabet.c**  
  - **Type:** C source file  
  - **Purpose:** Print the lowercase English alphabet  
  - **C Concepts:** Function definition, character variables, loops, ASCII values  
  - **Logic:** Loops from `'a'` to `'z'`, printing each character with `write`

- **c00/ex02/ft_print_reverse_alphabet.c**  
  - **Type:** C source file  
  - **Purpose:** Print the lowercase English alphabet in reverse  
  - **C Concepts:** Function definition, character variables, loops, ASCII values  
  - **Logic:** Loops from `'z'` to `'a'`, printing each character with `write`

- **c00/ex03/ft_print_numbers.c**  
  - **Type:** C source file  
  - **Purpose:** Print the digits 0 through 9  
  - **C Concepts:** Function definition, integer variables, loops, ASCII values  
  - **Logic:** Loops from `'0'` to `'9'`, printing each digit with `write`

- **c00/ex04/ft_is_negative.c**  
  - **Type:** C source file  
  - **Purpose:** Print 'N' if a number is negative, 'P' otherwise  
  - **C Concepts:** Function definition, conditionals, character output  
  - **Logic:** Checks if input is negative, prints 'N' or 'P' accordingly

- **c00/ex05/ft_print_comb.c**  
  - **Type:** C source file  
  - **Purpose:** Print all unique combinations of three different digits in ascending order  
  - **C Concepts:** Function definition, nested loops, conditionals, character output  
  - **Logic:** Uses three nested loops to generate combinations, prints with commas and spaces

- **c00/ex06/ft_print_comb2.c**  
  - **Type:** C source file  
  - **Purpose:** Print all unique combinations of two two-digit numbers  
  - **C Concepts:** Function definition, nested loops, character output, formatting  
  - **Logic:** Uses nested loops to generate and print all pairs of two-digit numbers, formatted with spaces and commas

- **c00/ex07/ft_putnbr.c**  
  - **Type:** C source file  
  - **Purpose:** Print an integer to standard output  
  - **C Concepts:** Function definition, recursion, integer to character conversion, output  
  - **Logic:** (Implementation missing in provided code, but typically recursively prints each digit)

- **c00/ex08/ft_print_combn.c**  
  - **Type:** C source file  
  - **Purpose:** Print all combinations of `n` different digits in ascending order  
  - **C Concepts:** Function definition, arrays, loops, recursion, output formatting  
  - **Logic:** (Implementation incomplete in provided code, but typically generates all combinations recursively)

---

- **c01/ex00/ft_ft.c**  
  - **Type:** C source file  
  - **Purpose:** Set the value pointed to by an integer pointer to 42  
  - **C Concepts:** Pointers, dereferencing, assignment  
  - **Logic:** `*nbr = 42;`

- **c01/ex01/ft_ultimate_ft.c**  
  - **Type:** C source file  
  - **Purpose:** Set the value pointed to by a pointer to a pointer to ... to an int (9 levels) to 42  
  - **C Concepts:** Multiple levels of pointers, dereferencing, assignment  
  - **Logic:** `*********nbr = 42;`

- **c01/ex02/ft_swap.c**  
  - **Type:** C source file  
  - **Purpose:** Swap the values of two integers using pointers  
  - **C Concepts:** Pointers, dereferencing, assignment, temporary variable  
  - **Logic:** Uses a temporary variable to swap `*a` and `*b`

- **c01/ex03/ft_div_mod.c**  
  - **Type:** C source file  
  - **Purpose:** Store the division and modulo of two integers in two pointers  
  - **C Concepts:** Pointers, dereferencing, arithmetic operations  
  - **Logic:** `*div = a / b; *mod = a % b;`

- **c01/ex04/ft_ultimate_div_mod.c**  
  - **Type:** C source file  
  - **Purpose:** Update two integers via pointers to their division and modulo  
  - **C Concepts:** Pointers, dereferencing, arithmetic operations  
  - **Logic:** (Implementation incomplete, but typically sets `*a = *a / *b; *b = *a % *b;`)

- **c01/ex05/ft_putstr.c**  
  - **Type:** C source file  
  - **Purpose:** Print a string to standard output  
  - **C Concepts:** Pointers, character arrays, loops, output  
  - **Logic:** Loops through the string, printing each character with `write`

- **c01/ex06/ft_strlen.c**  
  - **Type:** C source file  
  - **Purpose:** Return the length of a string  
  - **C Concepts:** Pointers, character arrays, loops, counting  
  - **Logic:** Loops through the string, counting characters until `\0`

- **c01/ex07/ft_rev_int_tab.c**  
  - **Type:** C source file  
  - **Purpose:** Reverse the contents of an integer array  
  - **C Concepts:** Arrays, pointers, loops, swapping  
  - **Logic:** Swaps elements from both ends moving toward the center

- **c01/ex08/ft_sort_int_tab.c**  
  - **Type:** C source file  
  - **Purpose:** Sort an integer array in ascending order  
  - **C Concepts:** Arrays, pointers, loops, sorting algorithms  
  - **Logic:** Uses a simple bubble sort to sort the array in place

---

- **c02/ex00/ft_strcpy.c**  
  - **Type:** C source file  
  - **Purpose:** Copy a string from `src` to `dest`  
  - **C Concepts:** Pointers, character arrays, loops, string manipulation  
  - **Logic:** Loops through `src`, copying each character to `dest` until `\0`, then returns `dest`

- **c02/ex01/ft_strncpy.c**  
  - **Type:** C source file  
  - **Purpose:** Copy up to `n` characters from `src` to `dest`  
  - **C Concepts:** Pointers, character arrays, loops, string manipulation, length-limited copy  
  - **Logic:** Loops through `src` up to `n` characters, copying to `dest`, then returns `dest`

- **c02/ex02/ft_str_is_alpha.c**  
  - **Type:** C source file  
  - **Purpose:** Check if a string contains only alphabetic characters  
  - **C Concepts:** Pointers, character arrays, loops, conditionals, ASCII value checks  
  - **Logic:** Loops through `str`, returns 1 if all characters are alphabetic, 0 otherwise

- **c02/ex03/ft_str_is_numeric.c**  
  - **Type:** C source file  
  - **Purpose:** Check if a string contains only numeric characters  
  - **C Concepts:** Pointers, character arrays, loops, conditionals, ASCII value checks  
  - **Logic:** Loops through `str`, returns 1 if all characters are digits, 0 otherwise

- **c02/ex04/ft_str_is_lowercase.c**  
  - **Type:** C source file  
  - **Purpose:** Check if a string contains only lowercase letters  
  - **C Concepts:** Pointers, character arrays, loops, conditionals, ASCII value checks  
  - **Logic:** Loops through `str`, returns 1 if all characters are lowercase, 0 otherwise

- **c02/ex05/ft_str_is_uppercase.c**  
  - **Type:** C source file  
  - **Purpose:** Check if a string contains only uppercase letters  
  - **C Concepts:** Pointers, character arrays, loops, conditionals, ASCII value checks  
  - **Logic:** Loops through `str`, returns 1 if all characters are uppercase, 0 otherwise

- **c02/ex06/ft_str_is_printable.c**  
  - **Type:** C source file  
  - **Purpose:** Check if a string contains only printable characters  
  - **C Concepts:** Pointers, character arrays, loops, conditionals, ASCII value checks  
  - **Logic:** Loops through `str`, returns 1 if all characters are printable, 0 otherwise

- **c02/ex07/ft_strupcase.c**  
  - **Type:** C source file  
  - **Purpose:** Convert all lowercase letters in a string to uppercase  
  - **C Concepts:** Pointers, character arrays, loops, ASCII value manipulation  
  - **Logic:** Loops through `str`, subtracts 32 from lowercase letters to convert to uppercase

- **c02/ex08/ft_strlowcase.c**  
  - **Type:** C source file  
  - **Purpose:** Convert all uppercase letters in a string to lowercase  
  - **C Concepts:** Pointers, character arrays, loops, ASCII value manipulation  
  - **Logic:** Loops through `str`, adds 32 to uppercase letters to convert to lowercase

- **c02/ex09/ft_strcapitalize.c**  
  - **Type:** C source file  
  - **Purpose:** Capitalize the first letter of each word in a string  
  - **C Concepts:** Pointers, character arrays, loops, ASCII value manipulation, word boundary detection  
  - **Logic:** Loops through `str`, capitalizes first letter after space or at start

- **c02/ex10/ft_strlcpy.c**  
  - **Type:** C source file  
  - **Purpose:** Copy up to `size-1` characters from `src` to `dest`, null-terminating the result  
  - **C Concepts:** Pointers, character arrays, loops, string manipulation, buffer size management  
  - **Logic:** Loops through `src` up to `size-1` characters, copies to `dest`, null-terminates

- **c02/ex11/ft_putstr_non_printable.c**  
  - **Type:** C source file  
  - **Purpose:** Print a string, replacing non-printable characters with their hexadecimal representation  
  - **C Concepts:** Pointers, character arrays, loops, ASCII value checks, hexadecimal conversion, output formatting  
  - **Logic:** Loops through `str`, prints printable characters, prints hex for non-printable

---

- **c03/ex00/ft_strcmp.c**  
  - **Type:** C source file  
  - **Purpose:** Compare two strings lexicographically  
  - **C Concepts:** Pointers, character arrays, loops, ASCII value comparison  
  - **Logic:** Loops through both strings, returns difference at first mismatch or 0 if equal

---

This repository is a comprehensive record of my journey through the 42 Seoul kernel and shell curriculum, with hands-on practice in shell scripting, C programming, and system-level concepts. Each file is commented to explain its purpose and the concepts it demonstrates. 