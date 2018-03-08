/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   my_malloc_cleanup.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ggenois <ggenois@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/28 18:42:15 by ggenois      #+#   ##    ##    #+#       */
/*   Updated: 2018/02/28 20:29:31 by ggenois     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*my_malloc_cleanup(void)
{
	t_list	*erase;
	t_list	*next;

	if (g_ft_memhistoy_switch == 1)
	{
		erase = g_ft_memhistoy;
		while (erase)
		{
			next = erase->next;
			free(erase);
			erase = next;
		}
		free(g_ft_memhistoy);
		g_ft_memhistoy = NULL;
		g_ft_memhistoy_switch = 0;
		free(erase);
		free(next);
	}
	return (NULL);
}
