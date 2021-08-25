NAME = libft.a
OBJ_FILES = ft_atoi.o \
			ft_isprint.o \
			ft_strlen.o \
			ft_isalpha.o \
			ft_isalnum.o \
			ft_putstr_fd.o \
			ft_putchar_fd.o \
			ft_isascii.o \
			ft_toupper.o \
			ft_tolower.o \
			ft_isdigit.o \
			ft_strchr.o \
			ft_memcpy.o \
			ft_putnbr_fd.o \
			ft_putendl_fd.o \
			ft_strdup.o \
			ft_bzero.o \
			ft_memset.o \
			ft_memcmp.o \
			ft_calloc.o \
			ft_memchr.o \
			ft_memccpy.o \
			ft_memmove.o \
			ft_strrchr.o \
			ft_strncmp.o \
			ft_strnstr.o \
			ft_strlcat.o \
			ft_strlcpy.o \
			ft_strjoin.o \
			ft_itoa.o \
			ft_strjoin.o \
			ft_strtrim.o \
			ft_strmapi.o \
			ft_substr.o \
			ft_split.o

HEADER_FILES = libft.h
CFLAGS = -Wall -Wextra -Werror
CC = gcc

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $@ $^

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re