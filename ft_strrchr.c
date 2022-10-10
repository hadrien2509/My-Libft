/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:16:11 by hgeissle          #+#    #+#             */
/*   Updated: 2022/10/07 12:19:17 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	const char    *save;

    save = NULL;
    if (*s == (char)c)
		save = s;
	s++;
	while (*(s - 1))
	{
		if (*s == (char)c)
		{
			save = s;
		}
		s++;
    }
    return ((char *)save);
}