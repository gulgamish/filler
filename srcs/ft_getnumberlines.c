/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnumberlines.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:51:52 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/09 16:52:04 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		ft_getnumberlines(char *line)
{
	int	size;

	size = 0;
	while (!ft_isdigit(*line))
		line++;
	size = ft_atoi(line);
	return (size);
}
