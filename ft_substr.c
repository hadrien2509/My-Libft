/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:26:31 by hgeissle          #+#    #+#             */
/*   Updated: 2022/10/06 21:09:30 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*d;
    size_t	i;
	size_t	size;
    
	size = ft_strlen(s);
	if (start > size)
		len = 0;
	else if (len > size - start)
		len = size - start;
	d = malloc(sizeof(char) * (len + 1));
    if (!d)
        return (NULL);
    i = 0;
    while (i < len && s[start + i])
    {
        d[i] = s[start + i];
        i++;
    }
    d[i] = '\0';
    return (d);
}