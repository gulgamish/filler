/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_playervilan.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:41:24 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/09 16:55:23 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	ft_extract_playervilan(t_infos *infos)
{
	char	*line;

	while (1)
	{
		line = ft_readline();
		if (ft_strstr(line, "exec"))
		{
			if (line[10] == '1')
			{
				infos->player = 'O';
				infos->vilan = 'X';
			}
			else
			{
				infos->player = 'X';
				infos->vilan = 'O';
			}
			break ;
		}
		free(line);
	}
}
