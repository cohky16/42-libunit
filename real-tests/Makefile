# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/08 15:08:31 by kyasuda           #+#    #+#              #
#    Updated: 2021/05/15 10:23:47 by kyasuda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	real_tests
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
INCLUDES 	= 	./includes
LIBUNITDIR 	= 	../framework/
LIBUNITNAME = 	libunit.a
LIBUNIT 	= 	$(addprefix $(LIBUNITDIR), $(LIBUNITNAME))
LOG			=	result.log

SRCSO 		= 	main.c
OBJSO 		= 	$(SRCSO:.c=.o)

LIBFTDIR	=	./libft/
LIBFTNAME	=	libft.a
LIBFT 		=	$(addprefix $(LIBFTDIR), $(LIBFTNAME))

ATOIDIR		=	./atoi/
ATOINAME	=	00_atoi_launcher.c \
				01_atoi_basic_test.c \
				02_atoi_null_test.c
ATOI 		=	$(addprefix $(ATOIDIR), $(ATOINAME))
ATOIO 		= 	$(ATOI:.c=.o)
BZERODIR	=	./bzero/
BZERONAME	=	00_bzero_launcher.c \
				01_bzero_basic_test.c \
				02_bzero_null_test.c
BZERO 		=	$(addprefix $(BZERODIR), $(BZERONAME))
BZEROO 		= 	$(BZERO:.c=.o)
STRLCPYDIR	=	./strlcpy/
STRLCPYNAME	=	00_strlcpy_launcher.c \
				01_strlcpy_basic_test.c \
				02_strlcpy_null_test.c
STRLCPY 	=	$(addprefix $(STRLCPYDIR), $(STRLCPYNAME))
STRLCPYO 	= 	$(STRLCPY:.c=.o)
STRLENDIR	=	./strlen/
STRLENNAME	=	00_launcher.c \
				01_strlen_basic_test.c \
				02_strlen_empty_test.c
STRLEN 		=	$(addprefix $(STRLENDIR), $(STRLENNAME))
STRLENO 	= 	$(STRLEN:.c=.o)
STRNSTRDIR	=	./strnstr/
STRNSTRNAME	=	00_launcher.c \
				01_strnstr_basic1_test.c \
				02_strnstr_basic2_test.c \
				03_strnstr_not_found1_test.c \
				04_strnstr_not_found2_test.c \
				05_strnstr_same_strs_test.c \
				06_strnstr_same_strs_with_smaller_len_test.c \
				07_strnstr_partial_match_test.c \
				08_strnstr_null_first_arg_test.c \
				09_strnstr_empty_second_arg_test.c \
				10_strnstr_empty_first_arg_test.c
STRNSTR 		=	$(addprefix $(STRNSTRDIR), $(STRNSTRNAME))
STRNSTRO 	= 	$(STRNSTR:.c=.o)

all: $(NAME)

$(NAME): $(OBJSO) $(ATOIO) $(BZEROO) $(STRLCPYO) $(STRLENO) $(STRNSTRO) $(OBJSL)
	$(MAKE) -C $(LIBUNITDIR)
	$(MAKE) -C $(LIBFTDIR)
	$(CC) $(CFLAGS) -I $(INCLUDES) $(LIBUNIT) $(LIBFT) $(OBJSO) $(ATOIO) $(BZEROO) $(STRLCPYO) $(STRLENO) $(STRNSTRO) -o $(NAME)
	./$(NAME) > $(LOG) 2>/dev/null || true
	cat $(LOG)

.c.o:
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

test: fclean all

clean:
	$(MAKE) -C $(LIBUNITDIR) clean
	$(MAKE) -C $(LIBFTDIR) clean
	rm -f $(OBJSO) $(ATOIO) $(BZEROO) $(STRLCPYO) $(STRLENO) $(STRNSTRO) $(LOG)

fclean:	clean
	$(MAKE) -C $(LIBUNITDIR) fclean
	$(MAKE) -C $(LIBFTDIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all test clean fclean re
