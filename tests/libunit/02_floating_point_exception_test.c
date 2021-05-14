/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_floating_point_exception_test.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:39:29 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/14 20:47:04 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	fpe_test(void)
{
	const char	*s = "Hello";

	if (test_fpe(s) == strlen(s))
		return (0);
	return (-1);
}
