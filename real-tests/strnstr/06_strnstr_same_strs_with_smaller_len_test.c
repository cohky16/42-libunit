/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_strnstr_same_strs_with_smaller_len_test.        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:54:10 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/15 10:33:53 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	strnstr_same_strs_with_smaller_len_test(void)
{
	const char	*s1 = "Hello World!";
	const char	*s2 = "Hello World!";
	const int	len = 8;

	if (ft_strnstr(s1, s2, len) == strnstr(s1, s2, len))
		return (0);
	else
		return (-1);
}
