/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_fpe.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 05:58:42 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/15 06:08:47 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

size_t	ft_strlcpy_fpe(char *dst, const char *src, size_t dstsize)
{
	int	x;
	int	y;

	(void)dst;
	(void)src;
	(void)dstsize;
	x = 0;
	y = 100 / x;
	return (0);
}
