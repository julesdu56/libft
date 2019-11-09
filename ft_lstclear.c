/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:20:04 by jumourot          #+#    #+#             */
/*   Updated: 2019/11/07 15:13:00 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	while (lst && *lst)
	{
		ptr = *lst;
		(del)((*lst)->content);
		*lst = (*lst)->next;
		free(ptr);
	}
	*lst = NULL;
}
