/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ennemi_new_piece_pos.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 15:09:53 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/05 13:46:41 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_cord	*ft_oldmap_exist(char **map, char **oldmap, char vilan)
{
	t_cord	*cord;
	int		i;
	int		j;

	i = 0;
	cord = (t_cord *)malloc(sizeof(t_cord));
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] != oldmap[i][j] && map[i][j] == vilan)
				break ;
			j++;
		}
		if (j != (int)ft_strlen(map[i]))
		{
			cord->x = i;
			cord->y = j;
			return (cord);
		}
		i++;
	}
	return (NULL);
}

t_cord	*ft_oldmap_noexist(char **map, char vilan)
{
	t_cord	*cord;
	int		i;
	int		j;

	i = 0;
	cord = (t_cord *)malloc(sizeof(t_cord));
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == vilan)
			{
				cord->x = i;
				cord->y = j;
				return (cord);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

t_cord	*ft_ennemi_new_piece_pos(char **map, char **oldmap, char vilan)
{
	if (oldmap)
		return (ft_oldmap_exist(map, oldmap, vilan));
	else
		return (ft_oldmap_noexist(map, vilan));
	return (NULL);
}
