/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:57:53 by hgeissle          #+#    #+#             */
/*   Updated: 2022/10/05 15:57:00 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t  i; 
    unsigned char* d;

    d = (unsigned char*)b;
    i = 0;
    while (i < len)
    {
        d[i] = (unsigned char)c;
        i++;
    }
    b = (void *)d;
    return (b);
}