/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 09:44:57 by jumourot          #+#    #+#             */
/*   Updated: 2019/11/07 10:26:10 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstlast(t_list *lst)
{
	t_list	*liste;

	liste = lst;
	if (!liste)
		return (NULL);
	while (liste->next != NULL)
	{
		liste = liste->next;
	}
	return (liste);
}
