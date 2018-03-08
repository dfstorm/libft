/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   my_malloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ggenois <ggenois@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/28 14:24:15 by ggenois      #+#   ##    ##    #+#       */
/*   Updated: 2018/02/28 18:42:26 by ggenois     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*my_malloc(int size)
{
	void *p;

	if (!(p = malloc(size)))
		return (NULL);
	if (g_ft_memhistoy_switch == 0)
	{
		g_ft_memhistoy = ft_lstnew(p, size);
		g_ft_memhistoy_switch = 1;
	}
	else
		ft_lstadd(&g_ft_memhistoy, ft_lstnew(p, size));
	return (p);
}
