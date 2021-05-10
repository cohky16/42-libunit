/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_strnstr_same_strs_with_smaller_len_tes          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 21:18:31 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/10 21:18:32 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int     strnstr_same_strs_with_smaller_len_test(void)
{
    const char    *s1 = "Hello World!";
    const char    *s2 = "Hello World!";
	const int	len = 8;

    if (ft_strnstr(s1, s2, len) == strnstr(s1, s2, len))
        return (0);
    return (-1);
}
