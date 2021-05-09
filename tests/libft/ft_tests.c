/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tests.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:10:56 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/09 11:57:51 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

size_t	ft_strlcpy_ok(char *dst, const char *src,
			size_t dstsize)
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

size_t	ft_strlcpy_ko(char *dst, const char *src,
			size_t dstsize)
{
	(void)dst;
	(void)src;
	(void)dstsize;
	return (42);
}

size_t	ft_strlcpy_segv(char *dst, const char *src,
			size_t dstsize)
{
	size_t	len;
	size_t	i;

	if (!src)
		return (0);
	len = ft_strlen(src);
	if (!dst || !dstsize)
		return (len);
	i = 0;
	while (i < 42)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

size_t	ft_strlcpy_buse(char *dst, const char *src,
			size_t dstsize)
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
