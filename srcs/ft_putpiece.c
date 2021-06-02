/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpiece.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:44:13 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/05 13:47:05 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int	ft_putpiece(char **map, t_list *l_cords, char player, t_cord mcord)
{
	t_cord	*cord;
	char	vilan;
	int		count;

	if (player == 'O')
		vilan = 'X';
	else
		vilan = 'O';
	count = 0;
	while (l_cords)
	{
		cord = (t_cord *)l_cords->content;
		if (mcord.x + cord->x >= ft_countlines(map) ||
				mcord.y + cord->y >= (int)ft_strlen(map[0]))
			return (-1);
		if (map[mcord.x + cord->x][mcord.y + cord->y] == player)
			count++;
		else if (map[mcord.x + cord->x][mcord.y + cord->y] == vilan)
			return (-1);
		l_cords = l_cords->next;
	}
	return (count);
}
