/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_segv_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 05:38:35 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/15 06:14:48 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	segv_test(void)
{
	char	dst[1];
	char	src[1];

	if (ft_strlcpy_segv(dst, src, sizeof(dst))
		== strlcpy(dst, src, sizeof(dst)))
		return (0);
	return (-1);
}
