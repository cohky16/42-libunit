# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/08 15:08:18 by kyasuda           #+#    #+#              #
#    Updated: 2021/05/08 17:34:04 by kyasuda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	libunit.a
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
INCLUDES 	= 	./includes

SRCS 		= 	libunit.c \
				./utils/ft_list.c \
				./utils/ft_utils.c
OBJS 		= 	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re