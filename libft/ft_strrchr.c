/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 23:11:27 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/22 23:36:20 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *p;

	p = s;
	p = p + ft_strlen(s);
	while (*p != (char)c && p != s)
		p--;
	if (*p == (char)c)
		return ((char *)p);
	return (0);
}
