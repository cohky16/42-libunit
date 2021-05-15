/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:40:49 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/15 10:28:01 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

static void	load_tests(t_unit_test **testlist)
{
	load_test(testlist, "EMPTY	test", &strlen_empty_test);
	load_test(testlist, "BASIC	test", &strlen_basic_test);
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

int	strlen_launcher(void)
{
	t_unit_test	*testlist;
	int		 	test_count;
	int		 	testlist_len;

	u_putendl("STRLEN: ");
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
