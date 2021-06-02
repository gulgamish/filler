/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extractcords.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:43:28 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/01 19:37:12 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_list	*ft_extractcords(char **piece)
{
	t_list	*lst_cords;
	int		i;
	int		j;

	lst_cords = NULL;
	i = 0;
	while (piece[i])
	{
		j = 0;
		while (piece[i][j])
		{
			if (piece[i][j] == '*')
				ft_lst_addlast(&lst_cords, ft_lstnew(ft_newcords(i, j), 0));
			j++;
		}
		i++;
	}
	return (lst_cords);
}
