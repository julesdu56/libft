/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 06:28:46 by jumourot          #+#    #+#             */
/*   Updated: 2019/05/13 12:22:56 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			len;
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	len = strlen(s);
	if (!(str = ft_strnew(len)))
		while (i < len)
		{
			str[i] = f(i, str[i]);
			i++;
		}
	return (str);
}
