/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin_patched.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ggenois <ggenois@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/01 18:38:53 by ggenois      #+#   ##    ##    #+#       */
/*   Updated: 2018/03/01 18:58:27 by ggenois     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_patched(char *s1, char *s2)
{
	int		x;
	char	*sx;

	x = (int)(ft_strlen(s1) + ft_strlen(s2));
	sx = ft_strnew(x);
	x = -1;
	if (s1 > 0)
		while (s1[++x] != '\0')
			sx[x] = s1[x];
	while (s2[x - ft_strlen(s1)] != '\0')
	{
		sx[x] = s2[x - ft_strlen(s1)];
		x++;
	}
	sx[x] = '\0';
	return (sx);
}
