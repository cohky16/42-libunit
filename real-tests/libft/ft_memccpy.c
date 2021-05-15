/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:06:38 by kyasuda           #+#    #+#             */
/*   Updated: 2021/02/02 08:14:06 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
					int c, size_t n)
{
	unsigned char	*dst_t;
	unsigned char	*src_t;
	size_t			i;

	src_t = (unsigned char *)src;
	dst_t = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		dst_t[i] = src_t[i];
		if (dst_t[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
