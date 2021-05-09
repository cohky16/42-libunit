/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:57:45 by kyasuda           #+#    #+#             */
/*   Updated: 2021/01/31 16:07:38 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_t;
	unsigned char	*src_t;

	dst_t = (unsigned char *)dst;
	src_t = (unsigned char *)src;
	if (dst <= src)
		ft_memcpy(dst, src, len);
	else
		while (len--)
			dst_t[len] = src_t[len];
	return (dst);
}
