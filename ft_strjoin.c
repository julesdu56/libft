/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 13:22:11 by jumourot          #+#    #+#             */
/*   Updated: 2019/11/04 12:21:06 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_concat_all(char *dest, char const *s1, char const *s2)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (!dest)
		return (NULL);
	while (s1[j])
	{
		dest[j] = s1[j];
		j++;
	}
	while (s2[i])
	{
		dest[j] = s2[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len;

	dest = NULL;
	if (!s1 && !s2)
		return (dest);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	if (!(dest = malloc(sizeof(char) * len)))
		return (NULL);
	ft_concat_all(dest, s1, s2);
	return (dest);
}
