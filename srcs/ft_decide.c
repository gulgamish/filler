/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decide.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 15:06:24 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/05 13:00:43 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	ft_decide(t_list *lst, int *distance, int size)
{
	t_cord	*cord;
	int		min;
	int		i;
	int		j;

	min = distance[0];
	j = 0;
	i = 1;
	while (i < size)
	{
		if (distance[i] < min)
		{
			min = distance[i];
			j = i;
		}
		i++;
	}
	while (lst && j)
	{
		lst = lst->next;
		j--;
	}
	cord = (t_cord *)lst->content;
	ft_printcord(cord->x, cord->y);
}
