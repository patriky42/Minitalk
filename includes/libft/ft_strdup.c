/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:45:23 by pabastid          #+#    #+#             */
/*   Updated: 2022/09/29 13:57:38 by pabastid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*s2;
	size_t		n;

	n = ft_strlen(s1);
	s2 = (char *) malloc (sizeof(char) * n + 1);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1, n + 1);
	return (s2);
}
