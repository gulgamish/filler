/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 22:14:25 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/05 13:28:54 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, int (*del)(void *, size_t))
{
	t_list *list;

	while (*alst)
	{
		del((*alst)->content, (*alst)->content_size);
		list = *alst;
		*alst = (*alst)->next;
		free(list);
	}
	*alst = NULL;
}
