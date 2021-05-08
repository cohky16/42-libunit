/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:12:23 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/08 20:08:27 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H
# include "../../framework/includes/libunit.h"
# include <string.h>
# define TESTS_COUNT 1

int         libunit_launcher(void);
int         strlcpy_ok(void);
int         strlcpy_ko(void);
int         strlcpy_segv(void);
int         strlcpy_buse(void);

size_t      ft_strlcpy_ok(char *dst, const char *src,
                        size_t dstsize);
size_t      ft_strlcpy_ko(char *dst, const char *src,
                        size_t dstsize);
size_t      ft_strlcpy_segv(char *dst, const char *src,
                        size_t dstsize);
size_t      ft_strlcpy_buse(char *dst, const char *src,
                        size_t dstsize);
#endif