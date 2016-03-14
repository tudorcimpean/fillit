/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int_table.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 22:54:58 by tcimpean          #+#    #+#             */
/*   Updated: 2016/03/07 22:55:19 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_int_table(int *tab, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(tab[i]);
		i++;
	}
}
