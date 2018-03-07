/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ggenois <ggenois@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/14 09:25:59 by ggenois      #+#   ##    ##    #+#       */
/*   Updated: 2018/02/26 10:58:39 by ggenois     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t    cur;

    str = (char *)malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (NULL);
    cur = -1;
    while (++cur < len)
        str[cur] = s[start + cur];
    str[cur] = '\0';
    return (str);
}
