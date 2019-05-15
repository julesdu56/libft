/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 12:39:13 by jumourot          #+#    #+#             */
/*   Updated: 2019/05/15 12:21:06 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int			count_word(char const *s, char c)
{
	int i;
	int	num_of_word;

	i = 0;
	num_of_word = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
		}
		else if (s[i] != c)
		{
			num_of_word++;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
		}
	}
	return (num_of_word);
}

void			allou_string(char const *s, char **tab, int c)
{
	int i;
	int j;

	j = 0;
	while (*s)
	{
		if (*s == c)
		{
			s++;
		}
		else if (*s != c)
		{                                                                                              
			i = 0;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
			if (!(tab[j] = (char*)malloc(sizeof(char) * i + 1)))
				return ;
			ft_strncpy(tab[j], s, i);
			j++;
			s = s + i;
		}
	}
	tab[j] = NULL;
}

char		**ft_strsplit(char const *s, char c)
{
	char **tab;
	int len;

	len = count_word(s, c);
	if (!(tab =(char**)malloc(sizeof(tab) * (len + 1))))
		return (NULL);
	allou_string(s, tab, c);
	return (tab);
}

int			main()
{
	char		**word;
	int			i = 0;

	word = ft_strsplit("", ' ');
	while (word[i] != NULL)
	{
		printf("%s\n", word[i]);
		i++;
	}
	return (0);
}		
