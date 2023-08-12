/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handletype.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:26:07 by pabastid          #+#    #+#             */
/*   Updated: 2023/07/19 13:26:17 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handlechar(va_list ap)
{
	char	c;

	c = (char) va_arg(ap, int);
	return (write(1, &c, 1));
}

int	handlenbr(va_list ap, char c)
{
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (c == 'u')
		return (ft_putuint(va_arg(ap, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthexnbr(va_arg(ap, unsigned int), c));
	return (-1);
}

int	handlestr(va_list ap)
{
	char	*str;
	size_t	i;
	int		temp;
	int		total;

	total = 0;
	i = 0;
	str = va_arg(ap, char *);
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i])
	{
		temp = ft_putchar(str[i]);
		if (temp < 0)
			return (-1);
		total += temp;
		i++;
	}
	return (total);
}

int	handleptr(va_list ap)
{
	unsigned long long	n;

	n = va_arg(ap, unsigned long long);
	return (ft_putptr(n));
}
