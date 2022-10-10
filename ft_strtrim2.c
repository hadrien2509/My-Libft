/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:34:18 by hgeissle          #+#    #+#             */
/*   Updated: 2022/10/07 18:45:29 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_set(char c, const char *set)
{
	int	i;

	i = 0;
	if (!set)
		return (0);
	while (set[i] != c && set[i])
		i++;
	if (set[i] != '\0')
		return (1);
	return (0);
}
#include <stdio.h>
int ft_strtrimlen(char const *s1, char const *set)
{
    int i;
	int	count;

    i = 0;
	count = 0;
    while (s1[i])
    {
        if (!ft_set(s1[i], set))
            count++;
		i++;
    }
    return (count);
}

char    *ft_strtrim2(char const *s1, char const *set)
{
    int i;
	int	j;
    int strtrimlen;
    char    *s2;

    strtrimlen = ft_strtrimlen(s1, set);
    s2 = malloc(sizeof(char) * (strtrimlen + 1));
    if (!s2)
        return (0);
    i = 0;
	j = 0;
    while (s1[i])
    {
        if (!ft_set(s1[i], set))
        {    
        	s2[j] = s1[i];
			j++;
        }
		i++;
    }
	printf("%s", s2);
    s2[j] = '\0';
    return (s2);
}