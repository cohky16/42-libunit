/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ok_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 05:37:17 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/15 06:02:09 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	ok_test(void)
{
	char	dst[10];
	char	src[10];

	if (ft_strlcpy_ok(dst, src, sizeof(dst)) == strlcpy(dst, src, sizeof(dst)))
		return (0);
	return (-1);
}
