/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extractmap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:39:03 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/09 16:52:38 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char	**ft_extractmap(void)
{
	char	**map;
	char	*line;
	int		size;
	int		i;

	i = 0;
	size = -1;
	map = NULL;
	while (size != i)
	{
		line = ft_readline();
		if (ft_strstr(line, "Plateau"))
		{
			size = ft_getnumberlines(line);
			map = (char **)malloc(sizeof(char *) * (size + 1));
		}
		if (size != -1 && (ft_strchr(line, '.') ||
					ft_strchr(line, 'O') || ft_strchr(line, 'X')))
			map[i++] = ft_strdup(line + 4);
		free(line);
	}
	map[i] = NULL;
	return (map);
}
