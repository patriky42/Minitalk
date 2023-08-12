/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:58:30 by pabastid          #+#    #+#             */
/*   Updated: 2022/09/30 12:06:23 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	max;
	char	*sub;

	if (!s)
		return (NULL);
	max = ft_strlen(s);
	if (len > (max - start))
		len = max - start;
	if (start > max)
		len = 0;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	if (len == 0)
		sub[0] = '\0';
	else
		ft_strlcpy(sub, &((char *)s)[start], len + 1);
	return (sub);
}
/*int	main(void)
{
	char q[] = "hola";
	printf("%s\n", ft_substr(q, 2, 3));
	return (0);
}*/
