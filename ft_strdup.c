/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 12:29:51 by jumourot          #+#    #+#             */
/*   Updated: 2019/05/17 11:34:35 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		size;
	char	*str;

	i = 0;
	size = 0;
	str = NULL;
	while (src[size])
		size++;
	if (!(str = malloc(sizeof(char) * size)))
		return (NULL);
	ft_strcpy(str, src);
	return (str);
}
