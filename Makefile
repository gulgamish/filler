# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelamran <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 13:37:24 by aelamran          #+#    #+#              #
#    Updated: 2019/11/09 16:55:34 by aelamran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=aelamran.filler

SRCS= srcs/ft_decide.c srcs/ft_extract_playervilan.c srcs/ft_extractpiece.c srcs/ft_newcords.c srcs/ft_retrievecords.c srcs/ft_del.c srcs/ft_extractcords.c srcs/ft_freeinfos.c srcs/ft_printcord.c srcs/main.c srcs/ft_ennemi_new_piece_pos.c srcs/ft_extractmap.c srcs/ft_makedecision.c srcs/ft_putpiece.c srcs/ft_readline.c srcs/ft_getnumberlines.c

INCLUDES= includes/

FLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	make -C libft/
	gcc $(FLAGS) -o $(NAME) -L./libft -lft $(SRCS) -I $(INCLUDES)

clean:
	make -C libft/ clean
	/bin/rm -f *.o

fclean: clean
	make -C libft/ fclean
	/bin/rm -f $(NAME)

re: fclean all
