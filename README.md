*This project has been created as part of the 42 curriculum by ipinto-m.*

# Libft - Your First C Library

---

## 📝 Description
**Libft** is the foundational project of the 42 Core Curriculum. The goal is to create a custom C library by re-coding standard functions from the C library (`libc`) and implementing additional utility functions that will be used throughout the entire program.

By building this library from scratch, I developed a deep understanding of memory management, pointer manipulation, and the internal logic of data structures. This library serves as a personal "toolbox" that replaces standard functions in future 42 projects where the use of the official `libc` is restricted.

---

## 🛠️ Library Overview
The library is composed of three distinct parts:

1.  **Libc Functions:** Exact re-implementations of standard functions like `ft_strlen`, `ft_memcpy`, `ft_strchr`, `ft_atoi`, and `ft_strdup`.
2.  **Additional Functions:** Specialized utilities not found in the standard library, such as `ft_substr`, `ft_strjoin`, `ft_split`, and `ft_itoa`.
3.  **Linked Lists Functions:** A complete set of tools to handle dynamic list structures, including functions like `ft_lstnew`, `ft_lstadd_back`, and `ft_lstclear`.

---

## 🚀 Instructions

### Compilation
The project includes a `Makefile` to automate the build process. To generate the static library file (`libft.a`), run the following commands:

* **Compile the library:**
    ```bash
    make
    ```
* **Clean object files (.o):**
    ```bash
    make clean
    ```
* **Full clean (objects and .a file):**
    ```bash
    make fclean
    ```
* **Recompile from scratch:**
    ```bash
    make re
    ```

### Usage
To use `libft` in your own C project, simply include the header in your source files:
```c
#include "libft.h"
```

## 📚 Resources

### References
* [Man7.org (Linux Manual Pages)](https://man7.org/linux/man-pages/): The primary documentation for understanding the expected behavior of standard C functions.
* [C Programming Language (K&R)](https://archive.org/details/TheCProgrammingLanguageFirstEdition/mode/2up): The foundational book for C syntax and best practices.
* [42 Norminette Documentation](https://github.com/42School/norminette): Guide for the coding standard enforced by the 42 Network.

### Use of AI
For this project, Artificial Intelligence was used as an educational assistant for the following tasks:
* **Logic Clarification:** Assisting in the conceptual understanding of pointer arithmetic and memory overlap (specifically for `ft_memmove`).
* **Edge Case Identification:** Generating scenarios to test functions against null pointers, empty strings, and integer overflows.
* **Documentation Formatting:** Structuring and proofreading this README.md file to ensure it meets the project requirements and professional standards.
* **Note:** All project code was implemented manually. AI was used exclusively to clarify concepts and help with documentation, ensuring the learning process remained central to the project.
