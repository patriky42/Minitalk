/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:34:33 by pabastid          #+#    #+#             */
/*   Updated: 2022/09/23 17:22:42 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ds;
	unsigned char	*sr;

	i = 0;
	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	if (!ds && !sr)
		return (NULL);
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (ds);
}
/*int	main(void)
{
	char dst[] = "carlos te necesito";
	char src[] = "ayudaaaaa";

	printf("%s\n", ft_memcpy(dst, src, 9));
	return (0);
}*/
