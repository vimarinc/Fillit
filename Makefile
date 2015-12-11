# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/16 14:27:46 by glarivie          #+#    #+#              #
#    Updated: 2015/12/11 18:46:41 by glarivie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= fillit
SRCS 	= srcs/main.c			srcs/ft_chkchr.c		srcs/ft_chkgrid.c	\
		srcs/ft_lst_init.c		srcs/ft_fill_lst.c		srcs/ft_get_type.c	\
		srcs/ft_lstlen.c		srcs/ft_read.c			srcs/ft_type_angle.c\
	  	srcs/libft.a			srcs/ft_dct_blk.c		srcs/ft_fill_dct_1.c\
		srcs/ft_chktype.c		srcs/ft_fix_shape.c		srcs/ft_get_map.c	\
		srcs/ft_print_map.c	\

INC		= ./includes
FLAGS	= -Wall -Wextra -Werror
CC		= gcc

all: $(NAME)

$(NAME):
	@echo ""
	@$(CC) $(FLAGS) -o $(NAME) $(SRCS) -I$(INC)
	@printf ....
	@echo "Création de $(NAME)"

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
