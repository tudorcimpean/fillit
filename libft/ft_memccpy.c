/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 22:57:17 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/23 23:33:02 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*c1;
	char			*c2;
	size_t			i;

	if (dst == 0 || src == 0)
		return (0);
	i = 0;
	c1 = (char *)dst;
	c2 = (char *)src;
	while (i < n)
	{
		c1[i] = c2[i];
		if (c2[i] == (char)c)
			return ((void *)&c1[i + 1]);
		i++;
	}
	return (0);
}
