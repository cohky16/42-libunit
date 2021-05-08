/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 16:16:33 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/08 19:38:31 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int     list_len(t_unit_test *testlist)
{
    int     len;

    len = 0;
    while (testlist)
    {
            len++;
            testlist = testlist->next;
    }
    return (len);
}

void    list_free(t_unit_test **testlist)
{
    t_unit_test *test;
    t_unit_test *free_test;

    test = *testlist;
    while(test)
    {
        free_test = test;
        test = test->next;
        free(free_test);
    }
}