/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 22:34:47 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/23 23:54:00 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	l1;
	size_t	l2;
	int		k;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	if (l1 > l2)
		l1 = l2;
	l1++;
	if (l1 > n)
		l1 = n;
	k = ft_memcmp(s1, s2, l1);
	return (k);
}
