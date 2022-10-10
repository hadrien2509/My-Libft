/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:39:39 by hgeissle          #+#    #+#             */
/*   Updated: 2022/10/07 12:13:15 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    char	*scopy;

	scopy = (void *)s;
	i = 0;
	while (i < n)
	{
		if (*scopy == (char)c)
		{
			return (scopy);
		}
		scopy++;
		i++;
	}
    return (NULL);
}