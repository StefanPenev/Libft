# Libft

📚 **About**

Libft is the first project of the 42 curriculum. This project is my implementation of a small C library that recreates some standard C functions and adds a few additional ones that are useful for later projects.

---

## 🚀 Getting Started

Follow these steps to start using the library:

```bash
# Clone the repository
git clone <https://github.com/StefanPenev/Libft.git>

# Move into the project folder
cd <Libft>

# Build the library
make
```

Other useful commands:

```bash
make clean   # remove object files
make fclean  # remove object files and libft.a
make re      # rebuild the library from scratch
```

After running `make`, the library **libft.a** will be created in the project root.

---

## Compilation Flags

All source files are compiled with:

```
-Wall -Wextra -Werror
```

---

## Project Structure

```
.
├── bonus/
├── ft_*.c
├── libft.h
└── Makefile
```

All functions follow the naming convention:

```
ft_functionname
```

This avoids conflicts with the original libc functions.

---

## Function Index

### Character checks

| Function   | What it does                     |
| ---------- | -------------------------------- |
| ft_isalpha | checks if character is a letter  |
| ft_isdigit | checks if character is a digit   |
| ft_isalnum | checks if letter or digit        |
| ft_isascii | checks if value is valid ASCII   |
| ft_isprint | checks if character is printable |

### String functions

| Function   | What it does                          |
| ---------- | ------------------------------------- |
| ft_strlen  | returns length of string              |
| ft_strchr  | finds first occurrence of a character |
| ft_strrchr | finds last occurrence of a character  |
| ft_strncmp | compares two strings                  |
| ft_strnstr | finds substring in string             |
| ft_strlcpy | copies string with size limit         |
| ft_strlcat | concatenates strings safely           |
| ft_strdup  | duplicates a string                   |

### Memory functions

| Function   | What it does                           |
| ---------- | -------------------------------------- |
| ft_memset  | fills memory with a value              |
| ft_bzero   | sets memory to zero                    |
| ft_memcpy  | copies memory block                    |
| ft_memmove | copies memory safely (handles overlap) |
| ft_memchr  | searches for byte in memory            |
| ft_memcmp  | compares memory blocks                 |
| ft_calloc  | allocates and zeroes memory            |

### Conversion

| Function | What it does               |
| -------- | -------------------------- |
| ft_atoi  | converts string to integer |
| ft_itoa  | converts integer to string |

### String utilities

| Function    | What it does                                         |
| ----------- | ---------------------------------------------------- |
| ft_substr   | extracts part of a string                            |
| ft_strjoin  | joins two strings                                    |
| ft_strtrim  | trims characters from beginning/end                  |
| ft_split    | splits string using delimiter                        |
| ft_strmapi  | applies function to each char and returns new string |
| ft_striteri | applies function to each char in place               |

### File descriptor output

| Function      | What it does                          |
| ------------- | ------------------------------------- |
| ft_putchar_fd | writes a character to file descriptor |
| ft_putstr_fd  | writes string to file descriptor      |
| ft_putendl_fd | writes string followed by newline     |
| ft_putnbr_fd  | writes number to file descriptor      |

---

## Linked List

A small linked list implementation is included.

### Structure used

```c
typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;
```

### List functions

| Function        | What it does                    |
| --------------- | ------------------------------- |
| ft_lstnew       | creates new node                |
| ft_lstadd_front | adds node at beginning          |
| ft_lstadd_back  | adds node at end                |
| ft_lstsize      | counts nodes in list            |
| ft_lstlast      | returns last node               |
| ft_lstdelone    | deletes one node                |
| ft_lstclear     | deletes entire list             |
| ft_lstiter      | applies function to each node   |
| ft_lstmap       | creates new list using function |

---

## Bonus Functions

Some additional helper functions are stored in the `bonus/` folder.

| Function    | What it does           |
| ----------- | ---------------------- |
| ft_memalloc | allocates memory       |
| ft_putchar  | prints character       |
| ft_putstr   | prints string          |
| ft_putnbr   | prints number          |
| ft_strcat   | concatenates strings   |
| ft_strcpy   | copies string          |
| ft_strncpy  | copies with size limit |
| ft_strnew   | allocates new string   |
| ft_strdel   | frees string memory    |
| ft_strclr   | clears string content  |
| ft_strstr   | finds substring        |

---

## Notes

The goal of this project was mainly to practice:

* working with pointers
* memory management
* implementing common string functions
* building and using static libraries

This library will be reused in future projects.
