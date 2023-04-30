/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palucena <palucena@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:32:00 by palucena          #+#    #+#             */
/*   Updated: 2023/04/30 21:47:57 by palucena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa(unsigned long long nb, char ch)
{
	unsigned long long	c;

	c = 0;
	if (nb >= 16)
		c += ft_printhexa(nb / 16, ch);
	if (ch == 'x')
		ft_putchar("0123456789abcef"[nb % 16]);
	else if (ch == 'X')
		ft_putchar("0123456789ABCDEF"[nb % 16]);
	return (c);
}
