/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:44:14 by hgeissle          #+#    #+#             */
/*   Updated: 2022/10/06 17:57:12 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t  i;

    i = 0;
	if (s)
	{
		while (s[i])
		{
			f(i, s + i);
			i++;
		}
	}
}