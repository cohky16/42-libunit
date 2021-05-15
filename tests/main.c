/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:36:36 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/15 10:35:28 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include <stdio.h>

int	main(void)
{
	int	count;

	u_putendl("*********************************");
	u_putendl("** 42 - Unit Tests ****");
	u_putendl("*********************************");
	u_putc('\n');
	count = TESTS_COUNT;
	count += test_launcher();
	if (count == TESTS_COUNT)
		return (0);
	else
		return (-1);
}
