/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:48:30 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/10 08:54:23 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static	void	load_tests(t_unit_test **testlist)
{
	load_test(testlist, "NULL   test", &atoi_null_test);
	load_test(testlist, "BASIC  test", &atoi_basic_test);
}

static	void	put_count(int test_count, int testlist_len)
{
	u_putc('\n');
	u_putn(test_count);
	u_putc('/');
	u_putn(testlist_len);
	u_putendl(" tests checked");
}

int	atoi_launcher(void)
{
	t_unit_test	*testlist;
	int			test_count;
	int			testlist_len;

	u_putendl("ATOI: ");
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
