/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 15:22:50 by ifarahi           #+#    #+#             */
/*   Updated: 2018/10/12 16:01:09 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *dest, const char *find)
{
	int		i;
	int		in;

	i = 0;
	if (!*find)
		return ((char*)dest);
	while (dest[i] != '\0')
	{
		if (dest[i] == find[0])
		{
			in = 1;
			while (find[in] != '\0' && dest[i + in] == find[in])
				in++;
			if (find[in] == '\0')
				return ((char *)dest + i);
		}
		i++;
	}
	return (NULL);
}
