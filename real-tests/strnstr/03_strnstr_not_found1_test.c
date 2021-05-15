/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strnstr_not_found1_test.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:45:45 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/15 10:33:36 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	strnstr_not_found1_test(void)
{
	const char	*s1 = "Hello Hello!";
	const char	*s2 = "World";
	const int	len = 12;

	if (ft_strnstr(s1, s2, len) == strnstr(s1, s2, len))
		return (0);
	else
		return (-1);
}
