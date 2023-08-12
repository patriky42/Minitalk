/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:19:12 by pabastid          #+#    #+#             */
/*   Updated: 2022/09/20 16:41:51 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dst;

	len_dst = 0;
	len_src = 0;
	while (dst[len_dst] != '\0')
		len_dst++;
	while (src[len_src] != '\0')
		len_src++;
	if (dstsize < len_dst)
		return (dstsize + len_src);
	i = len_dst;
	j = 0;
	while (dstsize > 0 && i < dstsize - 1 && src[j] != '\0')
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (len_src + len_dst);
}
/*int	main(void)
{
	char	dst[] = "Hola";
	char	src[] = "Adios";

	printf("%zu\n", ft_strlcat(dst, src, 4));
	return (0);
}*/
