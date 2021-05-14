/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strlen_basic_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:42:26 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/14 19:42:42 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	strlen_basic_test(void)
{
	 const char	 *s = "Hello";

	 if (ft_strlen(s) == strlen(s))
		  return (0);
	 return (-1);
}
