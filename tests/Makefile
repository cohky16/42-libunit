# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/08 15:08:31 by kyasuda           #+#    #+#              #
#    Updated: 2021/05/15 10:13:26 by kyasuda          ###   ########.fr        #
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
				testlibft/ft_strlcpy_ok.c \
				testlibft/ft_strlcpy_ko.c \
				testlibft/ft_strlcpy_segv.c \
				testlibft/ft_strlcpy_buse.c \
				testlibft/ft_strlcpy_timeout.c \
				testlibft/ft_strlcpy_fpe.c
OBJSO 		= 	$(SRCSO:.c=.o)

TESTDIR		=	./libunit/
TESTNAME 	=	00_launcher.c \
				01_ok_test.c \
				02_ko_test.c \
				03_segv_test.c \
				04_buse_test.c \
				05_timeout_test.c \
				06_floating_point_exception_test.c
TEST 		=	$(addprefix $(TESTDIR), $(TESTNAME))
TESTO 		= 	$(TEST:.c=.o)

all: $(NAME)

$(NAME): $(OBJSO) $(TESTO) 
	$(MAKE) -C $(LIBUNITDIR)
	$(CC) $(CFLAGS) -I $(INCLUDES) $(LIBUNIT) $(OBJSO) $(TESTO) -o $(NAME)
	./$(NAME) > $(LOG) 2>/dev/null || true
	cat $(LOG)

.c.o:
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

test: fclean all

clean:
	$(MAKE) -C $(LIBUNITDIR) clean
	rm -f $(OBJSO) $(TESTO) $(LOG)

fclean:	clean
	$(MAKE) -C $(LIBUNITDIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all test clean fclean re
