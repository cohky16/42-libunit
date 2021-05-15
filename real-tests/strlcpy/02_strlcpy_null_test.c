/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strlcpy_null_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:27:24 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/15 10:16:33 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"

int	strlcpy_null_test(void)
{
	char	dst[10];
	char	*src;

	if (ft_strlcpy(dst, src, sizeof(dst)) == strlcpy(dst, src, sizeof(dst)))
		return (0);
	else
		return (-1);
}
