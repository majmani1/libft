/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majmani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:25:27 by majmani           #+#    #+#             */
/*   Updated: 2022/10/24 20:39:57 by majmani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*st1;
	unsigned char	*st2;

	i = 0;
	st2 = (unsigned char *)s2;
	st1 = (unsigned char *)s1;
	while (i < n && st1[i] == st2[i])
		i++;
	if (n == i)
		return (0);
	return (st1[i] - st2[i]);
}
