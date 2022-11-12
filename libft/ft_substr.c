/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majmani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:57:19 by majmani           #+#    #+#             */
/*   Updated: 2022/10/28 13:19:33 by majmani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			j;
	char			*str;

	if (s == NULL)
		return (0);
	j = ft_strlen(s);
	i = 0;
	if ((j - start) < len)
		len = j - start;
	if (start > j)
		len = 0;
	str = (char *)malloc(sizeof(const char) * len + 1);
	if (str == 0)
		return (0);
	while (i < len && start < j)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
