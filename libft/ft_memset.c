/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majmani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:38:14 by majmani           #+#    #+#             */
/*   Updated: 2022/10/11 19:45:25 by majmani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int				i;
	unsigned char	*st;
	unsigned char	l;

	st = (unsigned char *)str;
	l = (unsigned char )c;
	i = 0;
	while (n != 0)
	{
		st[i] = l;
		i++;
		n--;
	}
	return (str);
}
