/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/17 22:14:47 by tcimpean          #+#    #+#             */
/*   Updated: 2016/03/07 23:44:41 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_len1(int n)
{
	int k;

	k = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		k++;
		n = n / 10;
	}
	return (k);
}

char	*ft_space(char *a, int len, int n)
{
	len--;
	while (len >= 0)
	{
		a[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (a);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		len;
	int		pozitiv;

	if (n == -2147483648)
		return ("-2147483648");
	pozitiv = 1;
	if (n < 0)
	{
		n = n * -1;
		pozitiv = 0;
	}
	len = ft_len1(n);
	if (pozitiv == 0)
		len++;
	a = (char *)malloc(sizeof(char) * len);
	a = ft_space(a, len, n);
	if (pozitiv == 0)
		a[0] = '-';
	a[len] = '\0';
	return (a);
}
