/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:54:29 by hgeissle          #+#    #+#             */
/*   Updated: 2022/10/06 10:56:24 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1copy;
	unsigned char	*s2copy;

	s1copy = (unsigned char *)s1;
	s2copy = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s1copy[i] == s2copy[i] && i < n - 1)
	{
		i++;
	}
	return (s1copy[i] - s2copy[i]);
}
