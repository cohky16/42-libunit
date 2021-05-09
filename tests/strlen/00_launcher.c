/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:48:30 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/09 13:21:15 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void load_tests(t_unit_test **testlist)
{
    load_test(testlist,  "NULL test", &strlen_null_test);
    load_test(testlist,  "BASIC test", &strlen_basic_test);
}

static void  put_count(int test_count, int testlist_len)
{
    u_putc('\n');
    u_putn(test_count);
    u_putc('/');
    u_putn(testlist_len);
    u_putendl(" tests checked");
}

int         strlen_launcher(void)
{
    t_unit_test *testlist;
    int         test_count;
    int         testlist_len;
    
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