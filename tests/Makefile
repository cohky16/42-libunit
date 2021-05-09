# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/08 15:08:31 by kyasuda           #+#    #+#              #
#    Updated: 2021/05/09 13:20:52 by yyamagum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	tests
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
INCLUDES 	= 	./includes
LIBUNITDIR 	= 	../framework/
LIBUNITNAME = 	libunit.a
LIBUNIT 	= 	$(addprefix $(LIBUNITDIR), $(LIBUNITNAME))
REALTESTSDIR 	= 	../real_tests/
REALTESTSNAME 	= 	libft.a
REALTESTS 		= 	$(addprefix $(REALTESTSDIR), $(REALTESTSNAME))
LOG			=	result.log

SRCSO 		= 	main.c
OBJSO 		= 	$(SRCSO:.c=.o)

LIBFTDIR	=	../libft/
LIBFTNAME	=	libft.a
LIBFT 		=	$(addprefix $(LIBFTDIR), $(LIBFTNAME))

STRLCPYDIR	=	./strlcpy/
STRLCPYNAME	=	00_strlcpy_launcher.c \
				01_strlcpy_basic_test.c \
				02_strlcpy_null_test.c
STRLCPY 	=	$(addprefix $(STRLCPYDIR), $(STRLCPYNAME))
STRLCPYO 	= 	$(STRLCPY:.c=.o)
STRLENDIR	=	./strlen/
STRLENNAME	=	00_launcher.c \
				01_strlen_basic_test.c \
				02_strlen_null_test.c
STRLEN 		=	$(addprefix $(STRLENDIR), $(STRLENNAME))
STRLENO 	= 	$(STRLEN:.c=.o)

all: $(NAME)

$(NAME): $(OBJSO) $(STRLCPYO) $(STRLENO) $(OBJSL)
	$(MAKE) -C $(LIBUNITDIR)
	$(MAKE) -C $(LIBFTDIR)
	$(CC) $(CFLAGS) -I $(INCLUDES) $(LIBUNIT) $(LIBFT) $(OBJSO) $(STRLCPYO) $(STRLENO) -o $(NAME)
	./$(NAME) > $(LOG) 2>/dev/null || true
	cat $(LOG)

.c.o:
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

test: fclean all

clean:
	$(MAKE) -C $(LIBUNITDIR) clean
	$(MAKE) -C $(LIBFTDIR) clean
	rm -f $(OBJSO) $(STRLCPYO) $(STRLENO) $(LOG)

fclean:	clean
	$(MAKE) -C $(LIBUNITDIR) fclean
	$(MAKE) -C $(LIBFTDIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all test clean fclean re
