/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   01_timeout_test.c								  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: yyamagum </var/mail/yyamagum>			  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/05/14 19:06:53 by yyamagum		  #+#	#+#			 */
/*   Updated: 2021/05/15 06:14:39 by yyamagum         ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

#include "tests.h"

int	timeout_test(void)
{
	char	dst[10];
	char	src[10];

	if (ft_strlcpy_timeout(dst, src, sizeof(dst))
		== strlcpy(dst, src, sizeof(dst)))
		return (0);
	return (-1);
}
