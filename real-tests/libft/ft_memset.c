/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 23:00:54 by kyasuda           #+#    #+#             */
/*   Updated: 2021/01/31 10:00:21 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*buf_t;
	size_t			i;

	buf_t = (unsigned char *)buf;
	i = 0;
	while (i < n)
		buf_t[i++] = (unsigned char)ch;
	return (buf);
}
