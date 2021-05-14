/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:43:51 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/14 20:01:58 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	load_tests(t_unit_test **testlist)
{
	load_test(testlist, "EMPTY FIRST ARG test", &strnstr_empty_first_arg_test);
	load_test(testlist, "EMPTY SECOND ARG test",
		&strnstr_empty_second_arg_test);
	load_test(testlist, "NULL ARGS WITH LEN test",
		&strnstr_null_args_with_len_test);
	load_test(testlist, "NULL ARGS test", &strnstr_null_args_test);
	load_test(testlist, "NULL SECOND ARG WITH LEN test",
		&strnstr_null_second_arg_with_len_test);
	load_test(testlist, "NULL SECOND ARG test", &strnstr_null_second_arg_test);
	load_test(testlist, "NULL FIRST ARG WITH LEN test",
		&strnstr_null_first_arg_with_len_test);
	load_test(testlist, "NULL FIRST ARG test", &strnstr_null_first_arg_test);
	load_test(testlist, "PARTIAL MATCH test", &strnstr_partial_match_test);
	load_test(testlist, "SAME STRS WITH SMALLER LEN test",
		&strnstr_same_strs_with_smaller_len_test);
	load_test(testlist, "SAME STRS test", &strnstr_same_strs_test);
	load_test(testlist, "NOT FOUND 2 test", &strnstr_not_found2_test);
	load_test(testlist, "NOT FOUND 1 test", &strnstr_not_found1_test);
	load_test(testlist, "BASIC 2 test", &strnstr_basic2_test);
	load_test(testlist, "BASIC 1 test", &strnstr_basic1_test);
}

static void	put_count(int test_count, int testlist_len)
{
	u_putc('\n');
	u_putn(test_count);
	u_putc('/');
	u_putn(testlist_len);
	u_putendl(" tests checked");
}

int	strnstr_launcher(void)
{
	t_unit_test	*testlist;
	int			test_count;
	int			testlist_len;

	u_putendl("STRNSTR: ");
	testlist = NULL;
	load_tests(&testlist);
	test_count = launch_tests(&testlist);
	testlist_len = list_len(testlist);
	put_count(test_count, testlist_len);
	list_free(&testlist);
	if (test_count == testlist_len)
		return (0);
	else
		return (-1);
}
