/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumourot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 16:13:13 by jumourot          #+#    #+#             */
/*   Updated: 2019/04/29 16:13:15 by jumourot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void        ft_putchar(char c);

void        ft_putendl(char const *s)
{
    int i;
    while(s[i])
    {
        ft_putchar(s[i]);
        i++;
    }
    ft_putchar('\n');
}
