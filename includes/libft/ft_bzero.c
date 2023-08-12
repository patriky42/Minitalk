/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:40:13 by pabastid          #+#    #+#             */
/*   Updated: 2022/09/29 13:27:49 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *)s;
	if (!n)
		return ;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
}
/*int	main(void)
{
	char s[] = "quien dijo cansancio";
	printf("%s\n", s);
	ft_bzero(s, 3);
	printf("%s\n", s);
	return (0);
}*/
