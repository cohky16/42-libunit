/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strlen_null_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyamagum </var/mail/yyamagum>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:40:15 by yyamagum          #+#    #+#             */
/*   Updated: 2021/05/14 19:40:16 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	strlen_null_test(void)
{
	 const char	 *s = NULL;

	 if (ft_strlen(s) == strlen(s))
		  return (0);
	 return (-1);
}
