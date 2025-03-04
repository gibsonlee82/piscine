NAME = ft_display_file
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_display_file.c
OBJ = $(SRC:.c=.o)

# The all rule is the default target and will compile the program
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# The clean rule will remove object files
clean:
	rm -f $(OBJ)

# The fclean rule will remove both object files and the binary
fclean: clean
	rm -f $(NAME)

# The re rule will clean and then recompile
re: fclean all
