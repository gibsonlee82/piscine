#!/bin/bash

# Compile all .c files into .o files
#cc -Wall -Werror -Wextra -o libft.o *.c
cc -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

# Create the static library libft.a
# ar: utility to create static (archive) library
#   - r: add/replace objects in archive
#   - c: create archive if not already existed
#   - s: symbol table, help linker finds symbols (prog, var) faster
ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

# Clean up the object file after creating the library
rm ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
# echo "libft.a has been created!"
