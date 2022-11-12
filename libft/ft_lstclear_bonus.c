/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majmani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:24:02 by majmani           #+#    #+#             */
/*   Updated: 2022/10/28 22:24:11 by majmani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	if (lst != NULL && del != NULL)
	{
		while (*lst != NULL)
		{
			p = (*lst)->next;
			ft_lstdelone((*lst), del);
			*lst = p;
		}
	}
}
