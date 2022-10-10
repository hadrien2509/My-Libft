/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:47:16 by hgeissle          #+#    #+#             */
/*   Updated: 2022/10/06 16:58:45 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbrlen(int nb)
{
	size_t			count;
	unsigned int	n;

	count = 0;
	if (nb <= 0)
	{	
		count++;
		n = -nb;
	}
	else
		n = nb;
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	unsigned int	un;
	char			*nbr;
	char			i;

	i = (char)ft_nbrlen(n);
	nbr = malloc(sizeof(char) * (i + 1));
	if (!nbr)
		return (NULL);
	nbr[i] = '\0';
	i--;
	if (n < 0)
		un = -n;
	else
		un = n;
	while (i >= 0)
	{
		nbr[i] = "0123456789"[un % 10];
		un = un / 10;
		i--;
	}
	if (n < 0)
		nbr[0] = '-';
	return (nbr);
}