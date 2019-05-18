/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 15:14:51 by jumourot          #+#    #+#             */
/*   Updated: 2019/05/17 11:49:47 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dst;
	if (str1 <= str2)
	{
		while (len != '\0')
		{
			len--;
			str2[len] = str1[len];
		}
	}
	else
		ft_memcpy(str2, str1, len);
	return (str2);
}
