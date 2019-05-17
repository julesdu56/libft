/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 16:12:47 by jumourot          #+#    #+#             */
/*   Updated: 2019/05/17 20:20:43 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int is_neg;
	int result;

	i = 0;
	result = 0;
	is_neg = 0;
	while (str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
			|| str[i] == '\t' || str[i] == '\f' || str[i] == ' ')
		i++;
	is_neg = (str[i] == '-') ? -1 : 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - 48);
	return (result * is_neg);
}
