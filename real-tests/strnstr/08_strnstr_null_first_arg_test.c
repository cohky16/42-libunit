/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_strnstr_null_first_arg_test.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:54:48 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/15 10:20:13 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	strnstr_null_first_arg_test(void)
{
	const char	*s1 = NULL;
	const char	*s2 = "Hello";
	const int	len = 0;

	if (ft_strnstr(s1, s2, len) == strnstr(s1, s2, len))
		return (0);
	return (-1);
}
