/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_timeout.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:06:22 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/14 19:06:27 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

size_t	test_timeout(const char *s)
{
	(void)s;
	sleep(3);
	return (0);
}
