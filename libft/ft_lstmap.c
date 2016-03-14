/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 02:07:18 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/25 21:52:03 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlist;
	t_list *lnew;

	lnew = 0;
	lnew = f(lst);
	newlist = (t_list *)malloc(sizeof(t_list));
	newlist = lnew;
	lst = lst->next;
	while (lst)
	{
		lnew->next = f(lst);
		lnew = lnew->next;
		lst = lst->next;
	}
	return (newlist);
}
