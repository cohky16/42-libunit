/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_buse_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 05:39:20 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/15 06:14:14 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	buse_test(void)
{
	char	dst[10];
	char	src[10];

	if (ft_strlcpy_buse(dst, src, sizeof(dst))
		== strlcpy(dst, src, sizeof(dst)))
		return (0);
	return (-1);
}
