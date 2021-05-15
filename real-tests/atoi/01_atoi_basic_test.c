/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_atoi_basic_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:27:24 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/15 10:19:07 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	atoi_basic_test(void)
{
	const char	*s;

	s = "42";
	if (ft_atoi(s) == atoi(s))
		return (0);
	else
		return (-1);
}
