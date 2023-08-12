/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:24:35 by pabastid          #+#    #+#             */
/*   Updated: 2023/07/24 13:18:00 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	printstr(char *str)
{
	int	i;
	int	temp;
	int	total;

	i = 0;
	total = 0;
	while (str[i])
	{
		temp = ft_putchar(str[i]);
		if (temp < 0)
		{
			free(str);
			return (-1);
		}
		total += temp;
		i++;
	}
	free(str);
	return (total);
}

int	ft_putnbr(int n)
{
	char	*str;

	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	str = ftitoa(n);
	if (!str)
		return (-1);
	return (printstr(str));
}

int	ft_putuint(unsigned int n)
{
	char	*str;

	str = ft_unsigned_itoa(n);
	if (!str)
		return (-1);
	return (printstr(str));
}
