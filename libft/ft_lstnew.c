/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 02:07:29 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/25 02:08:56 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*nod;

	nod = (t_list *)malloc(sizeof(t_list));
	if (nod == 0)
		return (0);
	if (content == 0)
	{
		nod->content = 0;
		nod->content_size = 0;
	}
	else
	{
		nod->content = malloc(sizeof(content));
		if (nod->content == 0)
			return (0);
		nod->content = (void*)content;
		nod->content_size = content_size;
	}
	nod->next = 0;
	return (nod);
}
