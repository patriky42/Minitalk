/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:20:39 by pabastid          #+#    #+#             */
/*   Updated: 2023/07/19 13:20:55 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	unlen(unsigned int n)
{
	int	total;

	total = 1;
	while (n > 9)
	{
		total++;
		n = n / 10;
	}
	return (total);
}

static int	nlen(int n)
{
	int	total;

	total = 1;
	if (n < 0)
	{
		total++;
		n = -n;
	}
	while (n > 9)
	{
		total++;
		n = n / 10;
	}
	return (total);
}

char	*ftitoa(int n)
{
	char	*res;
	int		len;

	len = nlen(n);
	res = malloc (1 * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n > 0 && len - 1 >= 0)
	{
		res[len - 1] = n % 10 + '0';
		len--;
		n = n / 10;
	}
	return (res);
}

char	*ft_unsigned_itoa(unsigned int n)
{
	char	*res;
	int		len;

	len = unlen(n);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	while (n >= 0 && len - 1 >= 0)
	{
		res[len - 1] = n % 10 + '0';
		len--;
		n = n / 10;
	}
	return (res);
}
