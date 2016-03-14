/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 23:07:30 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 23:37:02 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	l;
	int		i;

	if (s1 == 0 || s2 == 0)
		return (0);
	if (*s2 == '\0')
		return ((char *)s1);
	l = ft_strlen(s2);
	i = 0;
	while (*s1)
	{
		if (ft_strncmp(s1, s2, l) == 0)
			return ((char *)s1);
		s1++;
	}
	return (0);
}
