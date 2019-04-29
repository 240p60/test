# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbryen <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/09 13:52:52 by bbryen            #+#    #+#              #
#    Updated: 2019/04/29 21:35:34 by bbryen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ./ft_count_words.c \
./ft_strsplit.c \
./ft_itoa.c \
./ft_putnbr.c \
./ft_putnbr_fd.c \
./ft_atoi.c \
./ft_bzero.c \
./ft_isalnum.c \
./ft_isalpha.c \
./ft_isascii.c \
./ft_isdigit.c \
./ft_isprint.c \
./ft_memalloc.c \
./ft_memccpy.c \
./ft_memchr.c \
./ft_memcmp.c \
./ft_memcpy.c \
./ft_memdel.c \
./ft_memmove.c \
./ft_memset.c \
./ft_strcat.c \
./ft_strchr.c \
./ft_strclr.c \
./ft_strequ.c \
./ft_strnequ.c \
./ft_strstr.c \
./ft_strsub.c \
./ft_strcmp.c \
./ft_strcpy.c \
./ft_strnew.c \
./ft_strdel.c \
./ft_strdup.c \
./ft_striter.c \
./ft_striteri.c \
./ft_strlcat.c \
./ft_strlen.c \
./ft_strlen_mod.c \
./ft_strmap.c \
./ft_strmapi.c \
./ft_strncat.c \
./ft_strncmp.c \
./ft_strncpy.c \
./ft_strnstr.c \
./ft_strrchr.c \
./ft_strjoin.c \
./ft_strtrim.c \
./ft_strtrim_mod.c \
./ft_tolower.c \
./ft_toupper.c \
./ft_putchar.c \
./ft_putstr.c \
./ft_putendl.c \
./ft_putchar_fd.c \
./ft_putstr_fd.c \
./ft_putendl_fd.c \
./ft_lstnew.c \
./ft_lstiter.c

HEADERS = ./includes

OBJECTS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(HEADERS) -c $(SRCS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
