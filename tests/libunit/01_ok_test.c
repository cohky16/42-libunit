/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ok_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 05:37:17 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/15 10:34:28 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	ok_test(void)
{
	char	dst[10];
	char	src[10];

	if (ft_strlcpy_ok(dst, src, sizeof(dst)) == strlcpy(dst, src, sizeof(dst)))
		return (0);
	else
		return (-1);
}
