/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:21:23 by pabastid          #+#    #+#             */
/*   Updated: 2023/07/19 13:21:37 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *s, ...)
{
	int		total;
	va_list	ap;

	va_start(ap, s);
	total = ft_putctype(s, ap);
	va_end(ap);
	return (total);
}
