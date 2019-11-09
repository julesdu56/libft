/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:25:09 by jumourot          #+#    #+#             */
/*   Updated: 2019/11/07 15:09:32 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_lstsize(t_list *lst)
{
	t_list	*liste;
	int		i;

	i = 0;
	liste = lst;
	if (!liste)
		return (0);
	while (liste)
	{
		i++;
		liste = liste->next;
	}
	return (i);
}
