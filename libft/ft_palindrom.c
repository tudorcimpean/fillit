/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_palindrom.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 20:22:16 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/25 20:25:12 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_palindrom(int n)
{
	int rev;
	int cop;

	cop = n;
	rev = 0;
	while (cop > 0)
	{
		rev = rev * 10 + cop % 10;
		cop = cop / 10;
	}
	if (n == rev)
		return (1);
	return (0);
}
