/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:28:50 by kyasuda           #+#    #+#             */
/*   Updated: 2021/02/07 13:19:14 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_c;
	unsigned char	*s2_c;
	size_t			i;

	s1_c = (unsigned char *)s1;
	s2_c = (unsigned char *)s2;
	i = 0;
	while (s1_c[i] && s2_c[i] && i < n)
	{
		if (s1_c[i] != s2_c[i])
			return ((int)s1_c[i] - (int)s2_c[i]);
		i++;
	}
	if (s1_c[i] != s2_c[i] && i != n)
		return ((int)s1_c[i] - (int)s2_c[i]);
	return (0);
}
