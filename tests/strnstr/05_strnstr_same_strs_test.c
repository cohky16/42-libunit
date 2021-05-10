/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_strnstr_same_strs_test.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 21:18:19 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/10 21:18:21 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int     strnstr_same_strs_test(void)
{
    const char    *s1 = "Hello World!";
    const char    *s2 = "Hello World!";
	const int	len = 12;

    if (ft_strnstr(s1, s2, len) == strnstr(s1, s2, len))
        return (0);
    return (-1);
}
