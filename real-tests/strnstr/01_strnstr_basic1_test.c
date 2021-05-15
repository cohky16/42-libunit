/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strnstr_basic1_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:44:37 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/15 10:33:27 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	strnstr_basic1_test(void)
{
	const char	*s1 = "Hello World!";
	const char	*s2 = "World";
	const int	len = 12;

	if (ft_strnstr(s1, s2, len) == strnstr(s1, s2, len))
		return (0);
	else
		return (-1);
}
