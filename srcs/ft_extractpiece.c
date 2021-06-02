/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extractpiece.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:39:52 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/09 16:53:49 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char	**ft_extractpiece(void)
{
	char	**piece;
	char	*line;
	int		size;
	int		i;

	i = 0;
	size = -1;
	while (size != i)
	{
		line = ft_readline();
		if (ft_strstr(line, "Piece"))
		{
			size = ft_getnumberlines(line);
			piece = (char **)malloc(sizeof(char *) * (size + 1));
		}
		if (size != -1 && (ft_strchr(line, '.') || ft_strchr(line, '*')))
			piece[i++] = ft_strdup(line);
		free(line);
	}
	piece[i] = NULL;
	return (piece);
}
