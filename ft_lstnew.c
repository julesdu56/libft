/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:13:46 by jumourot          #+#    #+#             */
/*   Updated: 2019/11/07 15:08:10 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list*)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	if (!content)
	{
		new->content = (char*)malloc(sizeof(content));
		new->content = NULL;
	}
	else
	{
		new->content = ft_strdup(content);
		ft_memcpy(new->content, content, sizeof(content));
	}
	new->next = NULL;
	return (new);
}
