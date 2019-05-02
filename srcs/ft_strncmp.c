/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:31:25 by jumourot          #+#    #+#             */
/*   Updated: 2019/04/03 15:28:11 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] == s2[j] && s1[i] != '\0' && s2[j] != '\0', i < n)
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

