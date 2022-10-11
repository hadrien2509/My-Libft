/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:12:49 by hgeissle          #+#    #+#             */
/*   Updated: 2022/10/11 14:13:42 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack && len == 0)
		return (0);
	i = 0;
	if (!needle[i])
	{
		return ((char *)(haystack));
	}
	while (haystack[i] && i != len)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			j++;
			if (!needle[j])
				return ((char *)&(haystack)[i]);
			if (!haystack[i + j] || i + j == len)
				return (0);
		}
		i++;
	}
	return (0);
}
