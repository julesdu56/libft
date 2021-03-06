/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 17:31:39 by jumourot          #+#    #+#             */
/*   Updated: 2019/11/08 13:55:09 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	strlen_trim(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s1);
	while (is_charset(s1[i], set) && len >= 0)
	{
		len--;
		i++;
	}
	i = ft_strlen(s1) - 1;
	while (is_charset(s1[i], set) && len >= 0)
	{
		len--;
		i--;
	}
	return (len);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*ret;

	if (!s1 || !set)
		return (NULL);
	ret = (char *)malloc(sizeof(char) * (strlen_trim(s1, set) + 1));
	if (ret == 0)
		return (ret);
	i = 0;
	j = 0;
	while (is_charset(s1[i], set))
		i++;
	while (j < strlen_trim(s1, set))
	{
		ret[j] = s1[i];
		i++;
		j++;
	}
	ret[j] = '\0';
	return (ret);
}
