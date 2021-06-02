/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_retrievecords.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 15:05:50 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/02 20:22:40 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_list	*ft_retrievecords(char **map, t_list *l_cords, char player)
{
	t_list	*lst;
	t_cord	cord;
	int		i;
	int		j;

	i = 0;
	lst = NULL;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			cord.x = i;
			cord.y = j;
			if (ft_putpiece(map, l_cords, player, cord) == 1)
				ft_lst_addlast(&lst, ft_lstnew(ft_newcords(i, j), 0));
			j++;
		}
		i++;
	}
	return (lst);
}
