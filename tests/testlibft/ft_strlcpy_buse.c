/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_buse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 05:57:46 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/15 06:07:24 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

size_t	ft_strlcpy_buse(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	if (!src)
		return (0);
	len = ft_strlen(src);
	if (!dst || !dstsize)
		return (len);
	i = 0;
	dst = "bus error";
	while (i < 42)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
