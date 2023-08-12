/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:44:04 by pabastid          #+#    #+#             */
/*   Updated: 2022/09/30 17:08:45 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;

	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	ft_memcpy(new, s1, ft_strlen(s1));
	ft_memcpy(&new[ft_strlen(s1)], s2, ft_strlen(s2));
	new[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (new);
}
/*int	main(void)
{
	char n[] = "hola";
	char m[] = "deu";

	printf("%s\n", ft_strjoin(n,m));
}*/
