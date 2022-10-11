/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:00:43 by hgeissle          #+#    #+#             */
/*   Updated: 2022/10/05 15:30:31 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int long	nl;

	nl = n;
	if (nl < 0)
	{
		nl = nl * (-1);
		ft_putchar_fd('-', fd);
	}
	if (nl >= 10)
	{
		ft_putnbr_fd(nl / 10, fd);
		nl = nl % 10;
	}
	ft_putchar_fd(nl + '0', fd);
}
