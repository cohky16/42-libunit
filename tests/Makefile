# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/08 15:08:31 by kyasuda           #+#    #+#              #
#    Updated: 2021/05/08 20:08:37 by kyasuda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	tests
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
INCLUDES 	= 	./includes
LIBUNITDIR 	= 	../framework/
LIBUNITNAME = 	libunit.a
LIBUNIT 	= 	$(addprefix $(LIBUNITDIR), $(LIBUNITNAME))
LOG			=	result.log

SRCSO 		= 	main.c \
				./libft/ft_tests.c
OBJSO 		= 	$(SRCSO:.c=.o)

TESTSDIR	=	./libunit/
TESTSNAME	=	00_launcher.c \
				01_strlcpy_ok.c \
				02_strlcpy_ko.c \
				03_strlcpy_segv.c \
				04_strlcpy_buse.c
SRCS 		=	$(addprefix $(TESTSDIR), $(TESTSNAME))
OBJS 		= 	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJSO) $(OBJS)
	$(MAKE) -C $(LIBUNITDIR)
	$(CC) $(CFLAGS) -I $(INCLUDES) $(LIBUNIT) $(OBJSO) $(OBJS) -o $(NAME)
	./$(NAME) > $(LOG) 2>/dev/null || true
	cat $(LOG)

.c.o:
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

test: fclean all

clean:
	$(MAKE) -C $(LIBUNITDIR) clean
	rm -f $(OBJSO) $(OBJS) $(LOG)

fclean:	clean
	$(MAKE) -C $(LIBUNITDIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all test clean fclean re