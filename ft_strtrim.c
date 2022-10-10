/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:38:59 by hgeissle          #+#    #+#             */
/*   Updated: 2022/10/07 14:39:01 by hgeissle         ###   ########.fr       */
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

char	*ft_getstring(char const *s1, char *s2, size_t start, size_t end)
{
	size_t	i;
	
	i = 0;
	s2[end - start] = '\0';
	while (start + i < end)
	{
		s2[i] = s1[start + i];
		i++;
	}
	return (s2);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	start;
	size_t	end;
	size_t	i;

	i = 0;
	while (ft_set(s1[i], set))
		i++;
	start = i;
	end = i + 1;
	while (s1[i])
	{
		if (!ft_set(s1[i], set))
			end = i + 1;
		i++;
	}
	s2 = malloc(sizeof(char) * (end - start + 1));
	if (!s2)
		return (0);
	ft_getstring(s1, s2, start, end);
	return (s2);
}