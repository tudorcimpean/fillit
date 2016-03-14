/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/17 21:21:50 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/23 23:59:00 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;

	a = (char *)malloc(sizeof(char) * (len + 1));
	if (a == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		a[i] = s[start];
		i++;
		start++;
	}
	return (a);
}
