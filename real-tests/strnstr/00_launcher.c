/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:43:51 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/15 10:28:04 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

static void	load_tests(t_unit_test **testlist)
{
	load_test(testlist, "EMPTY 1st ARG         test",
		&strnstr_empty_first_arg_test);
	load_test(testlist, "EMPTY 2nd ARG         test",
		&strnstr_empty_second_arg_test);
	load_test(testlist, "NULL 1st ARG          test",
		&strnstr_null_first_arg_test);
	load_test(testlist, "PARTIAL MATCH         test",
		&strnstr_partial_match_test);
	load_test(testlist, "SAME STRS SMALLER LEN test",
		&strnstr_same_strs_with_smaller_len_test);
	load_test(testlist, "SAME STRS             test", &strnstr_same_strs_test);
	load_test(testlist, "NOT FOUND 2           test", &strnstr_not_found2_test);
	load_test(testlist, "NOT FOUND 1           test", &strnstr_not_found1_test);
	load_test(testlist, "BASIC 2               test", &strnstr_basic2_test);
	load_test(testlist, "BASIC 1               test", &strnstr_basic1_test);
}

static void	put_count(int test_count, int testlist_len)
{
	u_putc('\n');
	u_putn(test_count);
	u_putc('/');
	u_putn(testlist_len);
	u_putendl(" tests checked");
	u_putc('\n');
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
