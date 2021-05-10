/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:12:23 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/10 18:48:05 by yyamagum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H
# include "../../framework/includes/libunit.h"
# include "../../libft/libft.h"
# include <string.h>
# define TESTS_COUNT 1

int		strlcpy_launcher(void);
int		strlcpy_basic_test(void);
int		strlcpy_null_test(void);

int		strlen_launcher(void);
int		strlen_basic_test(void);
int		strlen_null_test(void);

int		strnstr_launcher(void);
int		strnstr_basic_test(void);
int		strnstr_null_test(void);

#endif
