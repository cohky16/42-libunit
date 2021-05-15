/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_timeout.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 05:58:08 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/15 06:08:01 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

size_t	ft_strlcpy_timeout(char *dst, const char *src, size_t dstsize)
{
	(void)dst;
	(void)src;
	(void)dstsize;
	sleep(3);
	return (0);
}
