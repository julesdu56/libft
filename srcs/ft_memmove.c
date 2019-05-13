/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 15:14:51 by jumourot          #+#    #+#             */
/*   Updated: 2019/05/10 15:14:53 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmouve(void *dest, const void *src, size_t n)
{
	int i;

	i = (int)n - 1;
	if (dest > src)
	{
		while (i >= 0)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
