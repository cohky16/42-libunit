/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ko_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 05:37:49 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/15 10:34:31 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	ko_test(void)
{
	char	dst[10];
	char	src[10];

	if (ft_strlcpy_ko(dst, src, sizeof(dst)) == strlcpy(dst, src, sizeof(dst)))
		return (0);
	else
		return (-1);
}
