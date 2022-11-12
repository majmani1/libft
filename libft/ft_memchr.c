/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majmani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:45:14 by majmani           #+#    #+#             */
/*   Updated: 2022/10/17 20:31:07 by majmani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*st;
	unsigned char	ca;

	ca = (unsigned char)c;
	st = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (st[i] == ca)
			return (st + i);
		i++;
	}
	return (0);
}
