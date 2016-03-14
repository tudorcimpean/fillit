/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 21:09:55 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 23:26:12 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	z;
	int				i;

	i = 0;
	z = (unsigned char)c;
	str = (unsigned char *)s;
	while (n > 0)
	{
		if (str[i] == z)
			return (str + i);
		i++;
		n--;
	}
	return (0);
}
