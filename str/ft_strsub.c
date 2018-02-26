/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ggenois <ggenois@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/14 09:25:59 by ggenois      #+#   ##    ##    #+#       */
/*   Updated: 2018/02/26 09:30:23 by ggenois     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;
	int		i;
	size_t	newlen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen || len > slen || len > slen - start)
		return (NULL);
	i = start;
	newlen = -1;
	while (s[i] && ++newlen < len)
		i++;
	if (!(str = malloc(sizeof(char) * (newlen + 1))))
		return (NULL);
	str[newlen] = '\0';
	i = start;
	newlen = -1;
	while (++newlen < len)
	{
		str[newlen] = s[i];
		i++;
	}
	return (str);
}
