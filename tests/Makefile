# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/08 15:08:31 by kyasuda           #+#    #+#              #
#    Updated: 2021/05/15 06:30:53 by yyamagum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	tests
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
INCLUDES 	= 	./includes
LIBUNITDIR 	= 	../framework/
LIBUNITNAME = 	libunit.a
LIBUNIT 	= 	$(addprefix $(LIBUNITDIR), $(LIBUNITNAME))
REALTESTSDIR 	= 	../real-tests/
REALTESTSNAME 	= 	libft.a
REALTESTS 		= 	$(addprefix $(REALTESTSDIR), $(REALTESTSNAME))
LOG			=	result.log

SRCSO 		= 	main.c \
				testlibft/ft_strlcpy_ok.c \
				testlibft/ft_strlcpy_ko.c \
				testlibft/ft_strlcpy_segv.c \
				testlibft/ft_strlcpy_buse.c \
				testlibft/ft_strlcpy_timeout.c \
				testlibft/ft_strlcpy_fpe.c
OBJSO 		= 	$(SRCSO:.c=.o)

LIBFTDIR	=	../real-tests/libft/
LIBFTNAME	=	libft.a
LIBFT 		=	$(addprefix $(LIBFTDIR), $(LIBFTNAME))

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
				02_strlen_null_test.c
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
				09_strnstr_null_first_arg_with_len_test.c \
				10_strnstr_null_second_arg_test.c \
				11_strnstr_null_second_arg_with_len_test.c \
				12_strnstr_null_args_test.c \
				13_strnstr_null_args_with_len_test.c \
				14_strnstr_empty_second_arg_test.c \
				15_strnstr_empty_first_arg_test.c
STRNSTR 		=	$(addprefix $(STRNSTRDIR), $(STRNSTRNAME))
STRNSTRO 	= 	$(STRNSTR:.c=.o)

all: $(NAME)

$(NAME): $(OBJSO) $(TESTO) $(ATOIO) $(BZEROO) $(STRLCPYO) $(STRLENO) $(STRNSTRO) $(OBJSL)
	$(MAKE) -C $(LIBUNITDIR)
	$(MAKE) -C $(LIBFTDIR)
	$(CC) $(CFLAGS) -I $(INCLUDES) $(LIBUNIT) $(LIBFT) $(OBJSO) $(TESTO) $(ATOIO) $(BZEROO) $(STRLCPYO) $(STRLENO) $(STRNSTRO) -o $(NAME)
	./$(NAME) > $(LOG) 2>/dev/null || true
	cat $(LOG)

.c.o:
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

test: fclean all

clean:
	$(MAKE) -C $(LIBUNITDIR) clean
	$(MAKE) -C $(LIBFTDIR) clean
	rm -f $(OBJSO) $(TESTO) $(ATOIO) $(BZEROO) $(STRLCPYO) $(STRLENO) $(STRNSTRO) $(LOG)

fclean:	clean
	$(MAKE) -C $(LIBUNITDIR) fclean
	$(MAKE) -C $(LIBFTDIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all test clean fclean re
