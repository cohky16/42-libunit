/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ko_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 05:37:49 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/15 06:02:32 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	ko_test(void)
{
	char	dst[10];
	char	src[10];

	if (ft_strlcpy_ko(dst, src, sizeof(dst)) == strlcpy(dst, src, sizeof(dst)))
		return (0);
	return (-1);
}
