/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/17 21:28:45 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 23:46:26 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	int		i;

	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	a = (char *)malloc(sizeof(char) * i);
	if (a == 0)
		return (0);
	ft_strcpy(a, s1);
	ft_strcat(a, s2);
	return (a);
}
