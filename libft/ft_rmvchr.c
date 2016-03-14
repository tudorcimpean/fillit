/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rmvchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 20:31:59 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/25 20:44:47 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_rmvchr(char *str, char c)
{
	int		i;
	int		j;
	char	*s;

	s = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			s[j] = str[i];
			j++;
		}
		i++;
	}
	s[j] = '\0';
	return (s);
}
