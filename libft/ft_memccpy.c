/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 10:22:47 by ifarahi           #+#    #+#             */
/*   Updated: 2018/10/08 16:12:41 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*destptr;
	unsigned char	*srcptr;
	unsigned char	ctochar;

	i = 0;
	destptr = (unsigned char *)dest;
	srcptr = (unsigned char *)src;
	ctochar = c;
	while (i < n)
	{
		destptr[i] = srcptr[i];
		if (destptr[i] == ctochar)
			return ((void *)(destptr + i + 1));
		i++;
	}
	return (NULL);
}
