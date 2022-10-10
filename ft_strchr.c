/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:06:12 by hgeissle          #+#    #+#             */
/*   Updated: 2022/10/07 12:18:57 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
	if (*s == (char)c)
		return ((char *)s);
	s++;
	while (*(s - 1))
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
    return (NULL);
}