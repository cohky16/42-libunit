/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_atoi_null_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:27:24 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/10 09:01:37 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	atoi_null_test(void)
{
	const char	*s;

	s = "";
	if (ft_atoi(s) == atoi(s))
		return (0);
	else
		return (-1);
}
