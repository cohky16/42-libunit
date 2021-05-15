/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_bzero_null_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:27:24 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/15 10:19:23 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	bzero_null_test(void)
{
	char	ft_s[10];
	char	s[10];

	ft_bzero(ft_s, 5);
	bzero(s, 5);
	if (memcmp(ft_s, s, 5) == 0)
		return (0);
	else
		return (-1);
}
