NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalpha.c ft_bzero.c ft_isascii.c ft_isprint.c ft_strlcpy.c \
      ft_strncmp.c ft_toupper.c ft_memcpy.c ft_memset.c ft_isalnum.c \
	  ft_isdigit.c ft_strlcat.c ft_strlen.c ft_tolower.c ft_split.c

OBJ = $(SRC:%.c=%.o)
HEADER = libft.h

# Cible par défaut
all: $(NAME)

# Compilation des fichiers .c en .o
%.o: %.c $(HEADER)
	cc -o $@ -c $< $(CFLAGS)

# Création de la bibliothèque statique
$(NAME): $(OBJ)
	ar crs $(NAME) $(OBJ)

# Nettoyage des fichiers objets
clean:
	$(RM) $(OBJ)

# Suppression complète (objets et bibliothèque)
fclean: clean
	$(RM) $(NAME)

# Règle de reconstruction complète
re: fclean all

# Déclaration des cibles ne produisant pas de fichiers
.PHONY: re all clean fclean