# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/20 00:59:22 by mabdelha          #+#    #+#              #
#    Updated: 2024/09/20 01:02:02 by mabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
SRCS= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strcmp.c srcs/ft_strlen.c
INCS= includes 
CFLAGS= -Wall -Wextra -Werror
CC= cc
OBJS= $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)
%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCS)

clean :
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re


