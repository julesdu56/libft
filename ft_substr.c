/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:07:39 by jumourot          #+#    #+#             */
/*   Updated: 2019/11/11 14:58:31 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (s)
	{
		str = ft_strnew(len);
		while (str == NULL)
			return (NULL);
		s = s + start;
		while (s[start] && i < len)
		{
			str[i] = s[i];
			i++;
		}
		return (str);
	}
	return (NULL);
}
