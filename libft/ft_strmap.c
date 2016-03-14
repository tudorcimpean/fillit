/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/17 00:43:27 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 23:34:07 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*a;
	int		i;
	int		len;

	len = ft_strlen((char *)s);
	a = (char *)malloc(sizeof(char) * len);
	i = 0;
	while (s[i])
	{
		a[i] = f(s[i]);
		i++;
	}
	return (a);
}
