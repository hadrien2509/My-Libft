/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:22:52 by hgeissle          #+#    #+#             */
/*   Updated: 2022/10/07 11:35:18 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  srcsize;
    size_t  j;

    if (!dst && dstsize == 0)
		return (0);
	srcsize = ft_strlen(src);
    i = 0;
    while (dst[i])
	{
		i++;
	}
	if (i >= dstsize)
		return (dstsize + srcsize);
	j = 0;
	while (src[j] && j < dstsize - i - 1)
	{
		dst[i + j] = src[j];
        j++;
	}
	dst[i + j] = '\0';
	return (i + srcsize); 
}