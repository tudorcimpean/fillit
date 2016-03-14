/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rez.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 21:39:38 by tcimpean          #+#    #+#             */
/*   Updated: 2016/03/11 01:00:01 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

static int		calc_size_start_value(t_env *env)
{
	int		n;
	float	r;
	float	s;
	int		i;

	if (NB_TETRI)
		n = NB_TETRI;
	else
		n = 1;
	r = 1;
	i = 1;
	while (i <= n)
	{
		r = 0.5 * (r + n / r);
		i++;
	}
	s = r - (int)r;
	if (s > 0)
		return ((int)r + 1);
	else
		return (r);
}

static void		need_space(t_env *env, int i)
{
	if (!(TETRI_SAVED[i] = (t_tetri*)ft_memalloc(sizeof(t_tetri)))
			|| !(TETRI_SCONTENT(i) =
				(char**)ft_memalloc(sizeof(char*) * 4))
			|| !(TETRI_SCONTENT(i)[0] =
				ft_strsub(TETRI_STRTAB[i * 4], 0, 4))
			|| !(TETRI_SCONTENT(i)[1] =
				ft_strsub(TETRI_STRTAB[i * 4 + 1], 0, 4))
			|| !(TETRI_SCONTENT(i)[2] =
				ft_strsub(TETRI_STRTAB[i * 4 + 2], 0, 4))
			|| !(TETRI_SCONTENT(i)[3] =
				ft_strsub(TETRI_STRTAB[i * 4 + 3], 0, 4)))
		ft_exit("error");
}

static void		init_before_recursive(t_env *env)
{
	int	i;

	if (!(TETRI_SAVED = (t_tetri**)ft_memalloc(sizeof(t_tetri*) * NB_TETRI)))
		ft_exit("error");
	i = 0;
	while (i < NB_TETRI)
	{
		need_space(env, i);
		TETRI_SAVED[i]->x = 0;
		TETRI_SAVED[i]->y = 0;
		i++;
	}
	MAP = (char**)ft_memalloc(sizeof(char*) * MAP_WIDTH);
	i = 0;
	while (i < MAP_WIDTH)
	{
		MAP[i] = (char*)ft_strnew(MAP_WIDTH);
		i++;
	}
	MAP_SIZE = 1;
	SIZE_MAP_SAVED = 1;
	MAP_WIDTH = calc_size_start_value(env);
}

static void		start2(t_env *env, int cur_tetri)
{
	TETRI_Y(cur_tetri) = -1;
	while (SIZE_MAP_SAVED == 1
			&& ++TETRI_Y(cur_tetri) < MAP_WIDTH)
	{
		TETRI_X(cur_tetri) = -1;
		while (SIZE_MAP_SAVED == 1
				&& ++TETRI_X(cur_tetri) < MAP_WIDTH)
		{
			if (!add_tetri_in_map(env, cur_tetri))
			{
				if (cur_tetri + 1 == NB_TETRI)
				{
					save_map(env);
					return ;
				}
				else
					start2(env, cur_tetri + 1);
				replace_tetri_in_map(env, cur_tetri, 0);
			}
		}
	}
}

void			start(t_env *env)
{
	init_before_recursive(env);
	while (++MAP_WIDTH < MAP_WIDTH_SAVED && SIZE_MAP_SAVED == 1)
	{
		start2(env, 0);
	}
}
