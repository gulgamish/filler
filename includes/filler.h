/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 16:22:21 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/09 16:52:22 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "libft.h"
# include <fcntl.h>
# include <stdio.h>
# include <math.h>

typedef struct	s_infos
{
	char		**map;
	char		**piece;
	t_list		*lst_cords;
	char		player;
	char		vilan;
}				t_infos;

typedef struct	s_cord
{
	int			x;
	int			y;
}				t_cord;

typedef	struct	s_character
{
	char		c;
}				t_character;

void			ft_extract_playervilan(t_infos *infos);
t_list			*ft_extractcords(char **piece);
char			**ft_extractmap(void);
char			**ft_extractpiece(void);
void			ft_makedecision(t_list *lst, t_cord *vcord);
t_cord			*ft_newcords(int i, int j);
void			ft_printcord(int x, int y);
int				ft_putpiece(char **map, t_list *l_cords,
		char player, t_cord mcord);
t_list			*ft_retrievecords(char **map, t_list *l_cords, char player);
int				ft_countlines(char **map);
void			ft_decide(t_list *lst, int *distance, int size);
t_cord			*ft_ennemi_new_piece_pos(char **map, char **oldmap, char vilan);
void			ft_freeinfos(t_infos *infos);
int				ft_del(void *content, size_t content_size);
char			*ft_readline(void);
int				ft_getnumberlines(char *line);

#endif
