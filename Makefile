# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spochez <spochez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/20 15:41:00 by spochez           #+#    #+#              #
#    Updated: 2015/09/23 18:18:29 by spochez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftls.a

SRC =	ft_bzero.c
		ft_isalpha.c
		ft_lowups.c
		ft_ls.c
		ft_memset.c
		ft_order.c
		ft_putchar.c
		ft_putstr.c
		ft_realloc_tab.c
		ft_strcmp.c
		ft_strdup.c

OBJ = $(SRC:.c=.o) 

CFLAGS += -Wall -Werror -Wextra

all : $(NAME)

$(NAME) :
		gcc -c $(CFLAGS) $(SRC)
		gcc -o a.out *.o
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
		./a.out

clean :
		rm -f $(OBJ)

fclean :
		rm -f $(OBJ) $(NAME) a.out

re : fclean all
