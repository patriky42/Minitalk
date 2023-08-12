/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:25:19 by pabastid          #+#    #+#             */
/*   Updated: 2023/07/19 13:25:32 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ptrlen(uintptr_t ptr)
{
	int	total;

	total = 1;
	while (ptr >= 16)
	{
		ptr = ptr / 16;
		total++;
	}
	return (total);
}

static int	printptr(uintptr_t ptr)
{
	int	total;

	total = 0;
	if (ptr >= 16)
	{
		total += printptr(ptr / 16);
		total += printptr(ptr % 16);
	}
	else if (ptr < 10)
		total += ft_putchar((ptr + '0'));
	else
		total += ft_putchar(ptr - 10 + 'a');
	return (total);
}

int	ft_putptr(unsigned long long ptr)
{
	int	total;
	int	temp;

	total = 0;
	if (ptr == 0)
		return (write(1, "0x0", 3));
	temp = write(1, "0x", 2);
	if (temp < 0)
		return (-1);
	total += temp;
	temp = printptr(ptr);
	if (temp < 0)
		return (-1);
	total += temp;
	if (total != ptrlen(ptr) + 2)
		return (-1);
	return (total);
}
