/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 18:50:46 by ifarahi           #+#    #+#             */
/*   Updated: 2018/10/22 11:42:53 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char		*string;
	size_t		i;

	i = 0;
	if (!(string = malloc(size + 1)))
		return (0);
	while (i < size)
	{
		string[i] = '\0';
		i++;
	}
	string[i] = '\0';
	return (string);
}
