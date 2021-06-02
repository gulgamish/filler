/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:28:40 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/09 16:43:05 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_character	*ft_newcharacter(char c)
{
	t_character	*character;

	character = (t_character *)malloc(sizeof(t_character));
	character->c = c;
	return (character);
}

char		*ft_readline(void)
{
	t_list		*lst;
	char		*line;
	t_character	*character;
	int			i;
	char		c;

	lst = NULL;
	i = 0;
	while (read(0, &c, 1) && c != '\n')
		ft_lst_addlast(&lst, ft_lstnew(ft_newcharacter(c), 1));
	line = ft_strnew(ft_lstcount(lst));
	while (lst)
	{
		character = (t_character *)lst->content;
		line[i] = character->c;
		i++;
		lst = lst->next;
	}
	line[i] = '\0';
	ft_lstdel(&lst, ft_del);
	return (line);
}
