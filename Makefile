NAME    = libft.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

# Source and Object files
SRC     = ft_isalpha.c \
          ft_isdigit.c \
          ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
          ft_strlen.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_strlcpy.c
OBJ     = $(SRC:.c=.o)

# Tools
RM      = rm -f
AR      = ar rcs

# Default target
all: $(NAME)

# Create the library
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# Pattern rule for object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Remove object files
clean:
	$(RM) $(OBJ)

# Remove object files and the library
fclean: clean
	$(RM) $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re
