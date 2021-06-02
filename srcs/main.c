/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 16:39:59 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/05 14:48:14 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		ft_notreached(char **map)
{
	int i;

	i = 0;
	while (map[i])
	{
		if (ft_strchr(map[i], 'X'))
		{
			if (i <= ft_countlines(map) / 5)
				return (0);
			else
				return (1);
		}
		i++;
	}
	return (-1);
}

int		ft_isitdown(char **map, char player, char vilan)
{
	int i;
	int	p;
	int v;

	i = 0;
	p = 0;
	v = 0;
	while (map[i])
	{
		if (ft_strchr(map[i], player))
			p = 1;
		else if (ft_strchr(map[i], vilan))
			v = 1;
		if (p == 1 && v == 0)
			return (0);
		if (p == 0 && v == 1)
			return (1);
		i++;
	}
	return (-1);
}

int		ft_launch_algo(t_infos *infos, char **old_map)
{
	t_list		*lst;
	t_cord		*vcord;

	if ((infos->player == 'X' || ft_isitdown(infos->map,
					infos->player, infos->vilan) == 1)
			&& ft_notreached(infos->map))
		vcord = ft_newcords(0, 0);
	else if (!(vcord = ft_ennemi_new_piece_pos(infos->map,
					old_map, infos->vilan)))
		vcord = ft_newcords(0, 0);
	if ((lst = ft_retrievecords(infos->map, infos->lst_cords, infos->player)))
	{
		ft_makedecision(lst, vcord);
		ft_lstdel(&lst, ft_del);
		free(vcord);
	}
	else
	{
		write(1, "0 0\n", 4);
		return (0);
	}
	return (1);
}

int		main(void)
{
	char	**old_map;
	t_infos	*infos;

	if (!(infos = (t_infos *)malloc(sizeof(t_infos))))
		return (0);
	ft_extract_playervilan(infos);
	old_map = NULL;
	while (1)
	{
		infos->map = ft_extractmap();
		infos->piece = ft_extractpiece();
		infos->lst_cords = ft_extractcords(infos->piece);
		if (!ft_launch_algo(infos, old_map))
		{
			ft_freeinfos(infos);
			ft_freetab(old_map);
			free(infos);
			return (0);
		}
		ft_freetab(old_map);
		old_map = ft_clonemap(infos->map);
		ft_freeinfos(infos);
	}
	free(infos);
	return (0);
}
