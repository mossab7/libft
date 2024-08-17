.SILENT:
# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Library name
NAME = libft.a

# Source files
SRCS = ft_atoi.c ft_strsub.c ft_countwords.c ft_split.c ft_strdup.c ft_wordlen.c ft_strclr.c \
       ft_strtrim.c ft_strequ.c ft_strdel.c ft_calloc.c ft_strnew.c ft_memdel.c ft_isspace.c \
       ft_isalnum.c ft_bzero.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c \
       ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strcat.c ft_strcmp.c \
       ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncat.c ft_strncmp.c \
       ft_strncpy.c ft_strstr.c ft_tolower.c ft_isupper.c ft_toupper.c ft_islower.c ft_strchr.c \
       ft_strrchr.c ft_issep.c ft_strndup.c ft_putchar.c ft_putstr.c ft_putendl.c ft_itoa.c\
			 ft_numlen.c ft_putnbr.c ft_strjoin.c ft_strnstr.c

# Object files
OBJS = $(SRCS:.c=.o)

# Header file
HEADER = libft.h

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
