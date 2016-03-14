/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 21:43:43 by tcimpean          #+#    #+#             */
/*   Updated: 2016/03/08 23:47:00 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int				main(int ac, char **av)
{
	t_env	env;

	if (ac != 2)
		ft_exit("error");
	ft_bzero(&env, sizeof(env));
	get_tetriminos(&env, av[1]);
	start(&env);
	afis(&env);
	return (0);
}
