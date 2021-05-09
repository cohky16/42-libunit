/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 15:51:16 by kyasuda           #+#    #+#             */
/*   Updated: 2021/01/31 15:56:32 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_t;
	size_t			i;

	s_t = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_t[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
