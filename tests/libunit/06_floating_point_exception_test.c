/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_floating_point_exception_test.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:39:29 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/15 06:03:32 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	fpe_test(void)
{
	char	dst[10];
	char	src[10];

	if (ft_strlcpy_fpe(dst, src, sizeof(dst)) == strlcpy(dst, src, sizeof(dst)))
		return (0);
	return (-1);
}
