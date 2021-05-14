/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:25:01 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/14 18:49:52 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void load_tests(t_unit_test **testlist)
{
    load_test(testlist,  "TIMEOUT test", &timeout_test);
}

static void  put_count(int test_count, int testlist_len)
{
    u_putc('\n');
    u_putn(test_count);
    u_putc('/');
    u_putn(testlist_len);
    u_putendl(" tests checked");
}

int         test_launcher(void)
{
    t_unit_test *testlist;
    int         test_count;
    int         testlist_len;
    
    u_putendl("TEST: ");
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
