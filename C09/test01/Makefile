#/root/
#│
#├── Makefile
#├── libft.a
#├── srcs/
#│   ├── ft_putchar.c
#│   ├── ft_swap.c
#│   ├── ft_putstr.c
#│   ├── ft_strlen.c
#│   └── ft_strcmp.c
#└── includes/
#    └── ft.h

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRCS_DIR = srcs # directories containig .c
INCLUDES_DIR = includes # directories containing .h

# Source and Object Files
# $(wildcard <pattern>): variable set to all files that match the pattern
#SRCS = $(wildcard $(SRCS_DIR)/*.c) # all the .c files in SRCS_DIR
SRCS = $(SRCS_DIR)/ft_putchar.c # all the .c files in SRCS_DIR
OBJS = $(SRCS:.c=.o)

# Library name
LIBNAME = libft.a # static library

# Targets

# Default target
all: $(LIBNAME) # target

# Create the static library
$(LIBNAME): $(OBJS)
	@echo "Creating $@"
	@ar rcs $@ $^
	@echo "$@ created successfully!"

# Clean up object files (delete .o files)
clean:
	@echo "Cleaning object files..."
	@rm -f $(OBJS)

# Remove all files (.o files and the library)
fclean: clean
	@echo "Removing the static library..."
	@rm -f $(LIBNAME)

# Rebuild everything (clean and then all)
re: fclean all

# Compile .c files into .o files
%.o: %.c # pattern rule: compiles each .c into its corresponding .o file using the specified cc command
	@echo "Compiling $< into $@"
	@$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $@

# Phony targets: targets (all, clean, fclean, and re) are treated as commands and not files
.PHONY: all clean fclean re
