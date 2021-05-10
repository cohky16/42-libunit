/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_strnstr_partial_match_test.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 21:18:43 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/10 21:18:45 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int     strnstr_partial_match_test(void)
{
    const char    *s1 = "Hello World!";
    const char    *s2 = "o WW";
	const int	len = 12;

    if (ft_strnstr(s1, s2, len) == strnstr(s1, s2, len))
        return (0);
    return (-1);
}
