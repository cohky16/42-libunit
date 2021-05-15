/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyasuda <kyasuda@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 14:12:23 by kyasuda           #+#    #+#             */
/*   Updated: 2021/05/15 10:15:22 by kyasuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H
# include "../../framework/includes/libunit.h"
# include <string.h>
# define TESTS_COUNT 1

int		test_launcher(void);
int		ok_test(void);
int		ko_test(void);
int		segv_test(void);
int		buse_test(void);
int		timeout_test(void);
int		fpe_test(void);
size_t	ft_strlcpy_ok(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy_ko(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy_segv(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy_buse(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy_timeout(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy_fpe(char *dst, const char *src, size_t dstsize);

#endif
