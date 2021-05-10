/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_strnstr_null_args_test.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 21:19:42 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/10 21:36:41 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int     strnstr_null_args_test(void)
{
    const char	*s1 = NULL;
    const char	*s2 = NULL;
	const int	len = 0;

    if (ft_strnstr(s1, s2, len) == strnstr(s1, s2, len))
        return (0);
    return (-1);
}
