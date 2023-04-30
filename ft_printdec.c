/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 20:47:09 by palucena          #+#    #+#             */
/*   Updated: 2023/04/30 21:06:06 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

static int	ft_dcount(long int nb)
{
	int	i;

	i = 1;
	while (nb >= 10)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

int	ft_printdec(int nb)
{
	long int	c;

	c = 0;
	ft_putnbr(nb);
	if (nb >= 0)
		return (ft_dcount(c));
	c = (long int)nb * (-1);
	return (ft_dcount(c) + 1);
}
