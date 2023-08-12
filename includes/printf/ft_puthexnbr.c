/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:23:57 by pabastid          #+#    #+#             */
/*   Updated: 2023/07/19 13:24:12 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexnbr(unsigned int n, char x)
{
	char	*nums;
	int		total;
	int		temp;

	total = 0;
	nums = "0123456789abcdef";
	if (n >= 16)
	{
		temp = ft_puthexnbr((n / 16), x);
		if (temp < 0)
			return (-1);
		total += temp;
		temp = ft_puthexnbr((n % 16), x);
		if (temp < 0)
			return (-1);
		total += temp;
	}
	else
	{
		if (x == 'X' && n > 9)
			return (ft_putchar(nums[n] - 32));
		else
			return (ft_putchar(nums[n]));
	}
	return (total);
}
