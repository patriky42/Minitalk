/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfftprintf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:26:40 by pabastid          #+#    #+#             */
/*   Updated: 2023/07/19 13:26:49 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include "ft_printf.h"
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <stdint.h>

int	ft_printf(const char *s, ...);

int	ftputchar(char c);

int	ftputstr(const char *s, va_list ap);

int	ftputnbr(int n);

int	ftputuint(unsigned int n);

int	puthexnbr(unsigned int n, char x);

int	putptr(unsigned long long ptr);

int	handlechar(va_list ap);

int	handlenbr(va_list ap, char c);

int	handlestr(va_list ap);

int	handleptr(va_list ap);

#endif
