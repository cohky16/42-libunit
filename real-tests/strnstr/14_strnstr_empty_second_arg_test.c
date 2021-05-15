/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14_strnstr_empty_second_arg_test.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:56:28 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/14 19:56:29 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	strnstr_empty_second_arg_test(void)
{
	const char	*s1 = "Hello World!";
	const char	*s2 = "";
	const int	len = 12;

	if (ft_strnstr(s1, s2, len) == strnstr(s1, s2, len))
		return (0);
	return (-1);
}
