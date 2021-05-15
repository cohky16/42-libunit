/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 12:57:12 by kyasuda           #+#    #+#             */
/*   Updated: 2021/02/07 13:08:49 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_t;
	unsigned char	*src_t;
	size_t			i;

	if (dst == src)
		return (NULL);
	src_t = (unsigned char *)src;
	dst_t = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		dst_t[i] = src_t[i];
		i++;
	}
	return (dst);
}
