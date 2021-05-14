/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strnstr_basic1_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:44:37 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/14 19:44:59 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	strnstr_basic1_test(void)
{
	const char	*s1 = "Hello World!";
	const char	*s2 = "World";
	const int	len = 12;

	 if (ft_strnstr(s1, s2, len) == strnstr(s1, s2, len))
		  return (0);
	 return (-1);
}
