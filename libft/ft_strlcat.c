/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 09:39:19 by kyasuda           #+#    #+#             */
/*   Updated: 2021/02/11 09:43:27 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src,
					size_t dstsize)
{
	size_t	j;
	size_t	len;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	len = dst_len + src_len;
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	j = 0;
	while (src[j] && dst_len < dstsize - 1)
		dst[dst_len++] = src[j++];
	dst[dst_len] = '\0';
	return (len);
}
