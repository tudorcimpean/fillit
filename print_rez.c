/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_rez.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 21:38:06 by tcimpean          #+#    #+#             */
/*   Updated: 2016/03/11 01:07:28 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

static void		cp_tetrisaved_to_tetri(t_env *env)
{
	int		i;

	i = 0;
	while (i < NB_TETRI)
	{
		TETRI[i]->x = TETRI_SAVED[i]->x;
		TETRI[i]->y = TETRI_SAVED[i]->y;
		ft_memcpy(TETRI[i]->content[0], TETRI_SAVED[i]->content[0], 5);
		ft_memcpy(TETRI[i]->content[1], TETRI_SAVED[i]->content[1], 5);
		ft_memcpy(TETRI[i]->content[2], TETRI_SAVED[i]->content[2], 5);
		ft_memcpy(TETRI[i]->content[3], TETRI_SAVED[i]->content[3], 5);
		i++;
	}
	MAP_SIZE = SIZE_MAP_SAVED;
}

static void		golire_map(t_env *env)
{
	int		i;

	i = 0;
	while (i < MAP_WIDTH)
	{
		ft_bzero(MAP[i], MAP_WIDTH);
		i++;
	}
}

static void		umplere_map(t_env *env)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	c = 'a';
	while (i < NB_TETRI)
	{
		add_tetri_in_map(env, i);
		i++;
	}
	i = 0;
	while (i < MAP_SIZE)
	{
		j = 0;
		while (j < MAP_SIZE)
		{
			if (MAP[i][j])
				MAP[i][j] += 17;
			else
				MAP[i][j] = '.';
			j++;
		}
		i++;
	}
}

void			afis(t_env *env)
{
	int		i;
	int		j;

	cp_tetrisaved_to_tetri(env);
	golire_map(env);
	umplere_map(env);
	i = 0;
	while (i < MAP_SIZE)
	{
		j = 0;
		while (j < MAP_SIZE)
		{
			if (MAP[i][j])
				ft_putchar(MAP[i][j]);
			else
				ft_putchar('.');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
