/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 16:03:05 by ifarahi           #+#    #+#             */
/*   Updated: 2018/10/12 16:34:02 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dest, const char *find, size_t size)
{
	size_t		i;
	size_t		in;

	if (!*find)
		return ((char*)dest);
	i = 0;
	while (dest[i] != '\0' && i < size)
	{
		if (dest[i] == find[0])
		{
			in = 1;
			while (find[in] == dest[i + in] && find[in] != '\0' &&
					in + i < size)
				in++;
			if (find[in] == '\0')
				return ((char*)dest + i);
		}
		i++;
	}
	return (0);
}
