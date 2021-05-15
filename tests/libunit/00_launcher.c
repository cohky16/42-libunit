/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   00_launcher.c									  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: yyamagum </var/mail/yyamagum>			  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/05/14 18:25:01 by yyamagum		  #+#	#+#			 */
/*   Updated: 2021/05/15 06:15:07 by yyamagum         ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

#include "tests.h"

static void	load_tests(t_unit_test **testlist)
{
	load_test(testlist, "FPE     test", &fpe_test);
	load_test(testlist, "TIMEOUT test", &timeout_test);
	load_test(testlist, "BUSE    test", &buse_test);
	load_test(testlist, "SEGV    test", &segv_test);
	load_test(testlist, "KO      test", &ko_test);
	load_test(testlist, "OK      test", &ok_test);
}

static void	put_count(int test_count, int testlist_len)
{
	u_putc('\n');
	u_putn(test_count);
	u_putc('/');
	u_putn(testlist_len);
	u_putendl(" tests checked");
	u_putc('\n');
}

int	test_launcher(void)
{
	t_unit_test	*testlist;
	int			test_count;
	int			testlist_len;

	u_putendl("TEST: ");
	testlist = NULL;
	load_tests(&testlist);
	test_count = launch_tests(&testlist);
	testlist_len = list_len(testlist);
	put_count(test_count, testlist_len);
	list_free(&testlist);
	if (test_count == testlist_len)
		return (0);
	else
		return (-1);
}
