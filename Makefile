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

NAME = ft_ls.a

SRC =	ft_ls.c
		ft_order.c
		ft_realloc_tab.c
		ft_strdup.c
		ft_bzero.c
		ft_memset.c
		ft_treat_options.c
		ft_putchar.c
		ft_putstr.c

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
