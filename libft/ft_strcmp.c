/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 23:04:25 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/23 23:53:50 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	l1;
	size_t	l2;
	int		k;

	l1 = ft_strlen(s1) + 1;
	l2 = ft_strlen(s2) + 1;
	if (l2 < l1)
		l1 = l2;
	k = ft_memcmp(s1, s2, l1);
	return (k);
}
