/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majmani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:59:00 by majmani           #+#    #+#             */
/*   Updated: 2022/10/28 22:19:01 by majmani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, char const *s)
{
	int	i;

	i = 0;
	while (s[i] != c)
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return (1);
}

static int	ft_ps(char const *s, char const *set)
{
	int	i;
	int	ps;

	ps = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (ft_check(s[i], set) == 0)
		{
			ps = i;
			break ;
		}
		i++;
	}
	return (ps);
}

static int	ft_pe(char const *s, char const *set)
{
	int	i;
	int	pe;

	pe = 0;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (ft_check(s[i], set) == 0)
		{
			pe = i;
			break ;
		}
		i--;
	}
	return (pe);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		ps;
	int		pe;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (0);
	ps = ft_ps(s1, set);
	pe = ft_pe(s1, set);
	if (pe > 0)
		str = malloc((pe - ps + 2));
	else
		return (ft_strdup("\0"));
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	while (s1[++i] != '\0' && pe > 0)
	{
		if (i >= ps && i <= pe)
			str[j++] = s1[i];
	}
	str[j] = '\0';
	return (str);
}
