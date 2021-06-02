/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freeinfos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:20:49 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/05 13:21:01 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	ft_freeinfos(t_infos *infos)
{
	ft_freetab(infos->map);
	ft_freetab(infos->piece);
	ft_lstdel(&infos->lst_cords, ft_del);
}
