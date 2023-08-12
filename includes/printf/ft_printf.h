/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:22:01 by pabastid          #+#    #+#             */
/*   Updated: 2023/07/19 13:22:13 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *s, ...);

int		ft_putchar(char c);

int		ft_putctype(const char *s, va_list ap);

int		ft_putnbr(int n);

int		ft_putuint(unsigned int n);

int		ft_puthexnbr(unsigned int n, char x);

int		ft_putptr(unsigned long long ptr);

int		handlechar(va_list ap);

int		handlenbr(va_list ap, char c);

int		handlestr(va_list ap);

int		handleptr(va_list ap);

char	*ftitoa(int n);

char	*ft_unsigned_itoa(unsigned int n);

#endif
