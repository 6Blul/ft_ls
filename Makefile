# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spochez <spochez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/20 15:41:00 by spochez           #+#    #+#              #
#    Updated: 2015/09/23 17:56:46 by spochez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls.a

SRC =	ft_ls.c
		ft_order.c
		ft_realloc_tab.c
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
