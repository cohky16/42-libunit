/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_strnstr_null_args_test.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:55:56 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/14 19:55:57 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	strnstr_null_args_test(void)
{
	const char	*s1 = NULL;
	const char	*s2 = NULL;
	const int	len = 0;

	if (ft_strnstr(s1, s2, len) == strnstr(s1, s2, len))
		return (0);
	return (-1);
}
