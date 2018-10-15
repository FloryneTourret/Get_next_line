# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: ftourret <ftourret@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/02 10:51:00 by ftourret     #+#   ##    ##    #+#        #
#    Updated: 2018/10/12 15:40:06 by ftourret    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_putchar.c\
	  ft_strlen.c\
	  ft_putstr.c\
	  ft_putnbr.c\
	  ft_strcmp.c\
	  ft_strncmp.c\
	  ft_strcpy.c\
	  ft_strncpy.c\
	  ft_atoi.c\
	  ft_strdup.c\
	  ft_isalnum.c\
	  ft_isdigit.c\
	  ft_isprint.c\
	  ft_isalpha.c\
	  ft_isascii.c\
	  ft_strcat.c\
	  ft_strncat.c\
	  ft_strlcat.c\
	  ft_strclr.c\
	  ft_strdel.c\
	  ft_strnew.c\
	  ft_tolower.c\
	  ft_toupper.c\
	  ft_memset.c\
	  ft_memcpy.c\
	  ft_memccpy.c\
	  ft_memmove.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_bzero.c\
	  ft_memalloc.c\
	  ft_strsplit.c\
	  ft_putendl.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_putnbr_fd.c\
	  ft_strequ.c\
	  ft_strnequ.c\
	  ft_itoa.c\
	  ft_strstr.c\
	  ft_strnstr.c\
	  ft_strsub.c\
	  ft_memdel.c\
	  ft_strmap.c\
	  ft_strmapi.c\
	  ft_striter.c\
	  ft_striteri.c\
	  ft_strtrim.c\
	  ft_strjoin.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strrev.c\
	  ft_count_words.c\
	  ft_word_len.c\
	  ft_swap.c\
	  ft_strcapitalize.c\
	  ft_lstadd.c\
	  ft_lstdel.c\
	  ft_lstdelone.c\
	  ft_lstiter.c\
	  ft_lstmap.c\
	  ft_lstnew.c



OBJ = $(subst .c,.o,$(SRC))

LIGHT_RED = \033[0;38;5;9m

RED = \033[0;38;5;196m

BLUE = \033[0;38;5;123m

LIGHT_GREEN = \033[0;38;5;121m

GREEN = \033[33;32m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(BLUE)\nFichiers compilés"
	@ar rc $(NAME) $(OBJ)
	@echo "$(LIGHT_GREEN)Creation de la libft"
	@ranlib $(NAME)
	@echo "$(GREEN)Indexation de la libft"

%.o: srcs/%.c libft.h
	@gcc $(FLAGS) -o $@ -c $<
	@echo "$(BLUE).\c"

clean:
	@rm -rf $(OBJ)
	@echo "$(LIGHT_RED)Suppression des .o"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)Suppression de" $(NAME)

re: fclean all
