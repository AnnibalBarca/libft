NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalpha.c ft_bzero.c                               ft_isalpha.c            ft_isascii.c            ft_isprint.c            ft_strlcpy.c            ft_strncmp.c            ft_toupper.c           \
    ft_memcpy.c            ft_memset.c            ft_isalnum.c           ft_isdigit.c            ft_strlcat.c            ft_strlen.c             ft_tolower.c
OBJ = $(SRC:%.c=%.o)
HEADER = libft.h

all : $(NAME)

%.o : %.c $(HEADER)
	cc -o $@ -c $< $(CFLAGS) 

$(NAME) : $(OBJ)
	ar crs $(NAME) $(OBJ)

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: re all clean fclean