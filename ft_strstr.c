/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:46:54 by jumourot          #+#    #+#             */
/*   Updated: 2019/11/04 12:19:24 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *str, const char *to_find)
{
	int		len;

	len = ft_strlen(to_find);
	if (len == 0)
		return (char*)(str);
	while (*str)
	{
		if (!ft_strncmp(str, to_find, len))
			return (char*)(str);
		str++;
	}
	return (0);
}
