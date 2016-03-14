/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/17 00:14:44 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 23:45:22 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*a;
	size_t	i;

	a = (char *)malloc(sizeof(char) * size);
	if (a == 0)
		return (0);
	i = 0;
	while (i <= size)
	{
		a[i] = '\0';
		i++;
	}
	return (a);
}
