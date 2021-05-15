/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 16:55:02 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/15 06:24:27 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_t;
	unsigned char	*s2_t;
	size_t			i;

	s1_t = (unsigned char *)s1;
	s2_t = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_t[i] != s2_t[i])
			return (s1_t[i] - s2_t[i]);
		i++;
	}
	return (0);
}
