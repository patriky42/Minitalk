/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:07:51 by pabastid          #+#    #+#             */
/*   Updated: 2023/07/26 17:27:32 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>
#include "includes/printf/ft_printf.h"
#include "includes/libft/libft.h"
#include <stdio.h>

int	g_bit_nbr;

static void	ft_receiver(int bit)
{
	static unsigned char	c;

	if (bit == SIGUSR1)
		c = c | 1;
	g_bit_nbr++;
	if (g_bit_nbr == 8)
	{
		write (1, &c, 1);
		g_bit_nbr = 0;
	}
	c = c << 1;
}

int	main(void)
{
	int					pid;
	struct sigaction	sms;

	pid = getpid ();
	if (ft_printf("PID = %d\n", pid) < 0)
		return (0);
	g_bit_nbr = 0;
	sms.sa_handler = ft_receiver;
	sms.sa_flags = SA_RESTART;
	sms.sa_mask = 0;
	sigaction(SIGUSR1, &sms, NULL);
	sigaction(SIGUSR2, &sms, NULL);
	while (1)
		pause();
	return (0);
}
