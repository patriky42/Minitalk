/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:26:46 by pabastid          #+#    #+#             */
/*   Updated: 2023/07/24 14:16:11 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>
#include "includes/printf/ft_printf.h"
#include "includes/libft/libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	speller(int pid, char c)
{
	int	i;
	int	bit;

	i = 0;
	bit = 0;
	while (i < 8)
	{
		if (c & 128)
			bit = SIGUSR1;
		else
			bit = SIGUSR2;
		if (kill(pid, bit))
			exit (1);
		usleep(150);
		c = c << 1;
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	pid;

	i = 0;
	if (argc != 3)
	{
		write (2, "ERROR\n", 6);
		return (0);
	}
	pid = ft_atoi(argv[1]);
	while (argv[2][i])
	{
		speller(pid, argv[2][i]);
		i++;
	}
	return (0);
}
