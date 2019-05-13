/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 13:22:11 by jumourot          #+#    #+#             */
/*   Updated: 2019/05/10 15:11:39 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
			return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}
