/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15_strnstr_empty_first_arg_test.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:56:43 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/14 19:56:44 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	strnstr_empty_first_arg_test(void)
{
	const char	*s1 = "";
	const char	*s2 = "Hello World!";
	const int	len = 0;

	if (ft_strnstr(s1, s2, len) == strnstr(s1, s2, len))
		return (0);
	return (-1);
}
