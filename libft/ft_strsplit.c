/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 16:39:31 by ifarahi           #+#    #+#             */
/*   Updated: 2018/10/19 10:31:52 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			word_len(char *s, int i, char c)
{
	int j;

	j = 0;
	while (s[i] != c && s[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}

static int			count_word(char *s, char c)
{
	int		i;
	int		j;
	int		x;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		x = 0;
		while (s[i] != c && s[i] != '\0')
		{
			x++;
			i++;
		}
		if (x > 0)
		{
			j += 1;
			i = i - 1;
		}
		i++;
	}
	return (j);
}

static int			insert(int *i, char c, char *tab, char const *s)
{
	int		x;

	x = 0;
	while (s[*i] != c && s[*i] != '\0')
	{
		tab[x] = s[*i];
		*i = *i + 1;
		x++;
	}
	tab[x] = '\0';
	return (x);
}

static void			ifs(int *i, int *j, int x)
{
	if (x > 0)
	{
		*j = *j + 1;
		*i = *i - 1;
	}
}

char				**ft_strsplit(char const *s, char c)
{
	char	**area;
	int		i;
	int		j;
	int		x;

	i = 0;
	j = 0;
	if (!(s) || !(c))
		return (NULL);
	if (!(area = (char**)malloc(sizeof(char*) * (count_word((char*)s, c) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		x = 0;
		if (s[i] != c && s[i] != '\0')
		{
			area[j] = (char*)malloc(sizeof(char) *
					word_len((char*)s, i, c) + 1);
			x = insert(&i, c, area[j], s);
		}
		ifs(&i, &j, x);
		i++;
	}
	area[j] = 0;
	return (area);
}
