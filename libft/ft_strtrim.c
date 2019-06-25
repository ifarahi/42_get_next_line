/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 11:48:40 by ifarahi           #+#    #+#             */
/*   Updated: 2018/10/22 18:50:53 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void		ft_findch(char const *s, int *fi, int *la, int size)
{
	while (s[*fi] == '\n' || s[*fi] == ' ' || s[*fi] == '\t')
	{
		*fi += 1;
	}
	while (s[size] == '\n' || s[size] == '\t' || s[size] == ' ')
	{
		size--;
		*la += 1;
	}
}

static	int			ft_isblank(char const *s)
{
	int			i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') ||
				(s[i] >= '0' && s[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

char				*ft_strtrim(char const *s)
{
	int		fi;
	int		la;
	int		size;
	char	*area;
	int		j;

	if (!(s))
		return (NULL);
	fi = 0;
	la = 0;
	size = ft_strlen(s) - 1;
	if (ft_isblank(s) > 0 || *s == '\0')
		return (ft_strnew(0));
	ft_findch(s, &fi, &la, size);
	if (!(area = malloc(ft_strlen(s) - (fi + la) + 1)))
		return (NULL);
	size = ft_strlen(s);
	j = 0;
	while (fi < (size - la))
		area[j++] = s[fi++];
	area[j] = '\0';
	return (area);
}
