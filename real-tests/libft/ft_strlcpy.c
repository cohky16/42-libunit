/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 22:17:42 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/15 06:26:39 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ok
size_t	ft_strlcpy(char *dst, const char *src,
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

// // ko
// size_t	ft_strlcpy(char *dst, const char *src,
// 					size_t dstsize)
// {
// 	size_t	len;
// 	size_t	i;

// 	if (!src)
// 		return (0);
// 	len = ft_strlen(src);
// 	if (!dst || !dstsize)
// 		return (len);
// 	i = 0;
// 	while (src[i] && i < dstsize - 1)
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	dst[i] = '\0';
// 	return (42);
// }
