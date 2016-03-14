/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 21:52:33 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/23 23:52:59 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_verify(char c)
{
	if ((c > '9' || c < '0') && c != '+' && c != '-' && c != ' ' && c != '\n' &&
			c != '\a' && c != '\b' && c != '\f' && c != '\r' && c != '\t' &&
			c != '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int i;
	int semn;
	int nr;

	i = 0;
	nr = 0;
	if (ft_verify(str[i]))
		return (0);
	while (str[i] != '\0' && (str[i] == ' ' || ft_isprint(str[i]) == 0))
		i++;
	if (ft_isdigit(str[i]) == 0 && str[i] != '-' && str[i] != '+')
		return (0);
	if (ft_isdigit(str[i]) == 1)
		semn = 1;
	else
	{
		if (str[i++] == '+')
			semn = 1;
		else
			semn = -1;
	}
	while (ft_isdigit(str[i]) != 0)
		nr = nr * 10 + str[i++] - '0';
	nr = nr * semn;
	return (nr);
}
