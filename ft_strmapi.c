/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:32:44 by hgeissle          #+#    #+#             */
/*   Updated: 2022/10/06 18:00:23 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *d;
    int     i;
	int 	size;

    size = ft_strlen(s);
	d = malloc(sizeof(char) * (size + 1));
    if (!d)
        return (0);
    d[size] = '\0';
	i = 0;
    while (s[i])
    {
        d[i] = f(i, s[i]);
        i++;
    }
    return (d);
}