/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_ok.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 05:50:40 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/15 05:52:41 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

size_t	ft_strlcpy_ok(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	if (!src)
		return (0);
	len = ft_strlen(src);
	if (!dst || !dstsize)
		return (len);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
