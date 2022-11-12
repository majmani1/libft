/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majmani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:35:40 by majmani           #+#    #+#             */
/*   Updated: 2022/10/28 13:17:46 by majmani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;
	size_t	c;

	i = 0;
	if (dest == NULL && dstsize == 0)
		return (ft_strlen(src));
	c = ft_strlen(src);
	l = ft_strlen(dest);
	if (l >= dstsize || dstsize == 0)
		return (dstsize + c);
	while ((dstsize - l - 1) > i && src[i] != '\0')
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (l + c);
}
