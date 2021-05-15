/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_strnstr_empty_first_arg_test.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:56:43 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/15 10:34:08 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	strnstr_empty_first_arg_test(void)
{
	const char	*s1 = "";
	const char	*s2 = "Hello World!";
	const int	len = 0;

	if (ft_strnstr(s1, s2, len) == strnstr(s1, s2, len))
		return (0);
	else
		return (-1);
}
