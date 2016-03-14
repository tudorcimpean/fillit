/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 21:18:02 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 23:22:46 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;
	int				c;

	c = 0;
	a = (unsigned char *)s;
	while (n > 0)
	{
		*a = (unsigned char)c;
		if (n > 0)
			a++;
		n--;
	}
}
