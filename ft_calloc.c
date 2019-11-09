/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:10:53 by jumourot          #+#    #+#             */
/*   Updated: 2019/11/07 15:10:52 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t nmemb, size_t size)
{
	void	*house;

	house = malloc(size * nmemb);
	if (house != NULL)
	{
		ft_memset(house, 0, size * nmemb);
		return (house);
	}
	return (house);
}
