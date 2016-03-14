/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/17 21:36:32 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/24 23:10:16 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_verify1(char c)
{
	if (c != ' ' && c != '\n' && c != '\a' && c != '\b' && c != '\f' &&
			c != '\r' && c != '\t' && c != '\v')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s)
{
	char	*a;
	int		i;
	int		j;
	int		k;

	a = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (a == 0)
		return (0);
	i = 0;
	j = ft_strlen(s) - 1;
	while (ft_verify1(s[i]) == 0 && s[i])
		i++;
	while (ft_verify1(s[j]) == 0 && s[j])
		j--;
	k = 0;
	while (i <= j)
	{
		a[k] = s[i];
		i++;
		k++;
	}
	return (a);
}
