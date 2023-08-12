/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:29:11 by pabastid          #+#    #+#             */
/*   Updated: 2022/09/30 18:11:39 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int	main(void)
{
	//int = fd;
	char c = 'a';
	//fd = open("test.txt", O_RONLY);
	//ft_putchar_fd (c, fd);
	ft_putchar_fd (c, 1);
	return (0);
}*/
