/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makedecision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 15:07:01 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/09 18:03:49 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	ft_makedecision(t_list *lst, t_cord *vcord)
{
	int		*distance;
	t_list	*cur;
	t_cord	*pcord;
	int		i;
	int		size;

	size = ft_lstcount(lst);
	distance = (int *)malloc(sizeof(int) * size);
	i = 0;
	cur = lst;
	while (i < size)
	{
		pcord = (t_cord *)cur->content;
		distance[i] = ft_pow(pcord->x - vcord->x, 2) +
			ft_pow(pcord->y - vcord->y, 2);
		i++;
		cur = cur->next;
	}
	ft_decide(lst, distance, size);
	if (distance)
		free(distance);
}
