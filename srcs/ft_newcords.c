/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newcords.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 15:04:18 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/01 15:04:30 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_cord	*ft_newcords(int i, int j)
{
	t_cord *cords;

	cords = (t_cord *)malloc(sizeof(t_cord));
	cords->x = i;
	cords->y = j;
	return (cords);
}
