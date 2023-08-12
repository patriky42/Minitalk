/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:28:29 by pabastid          #+#    #+#             */
/*   Updated: 2022/09/27 16:58:31 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*a;

	i = ft_strlen(s) - 1;
	a = (char *)s;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return (&a[i]);
		i--;
	}
	if ((unsigned char)c == '\0')
		return (&a[ft_strlen(s)]);
	else
		return (NULL);
}
/*int	main(void)
{
	char	s[] = "patito";
	print("%s\n", ft_strrchr(s,0));
	return (0);
}*/
