/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 10:11:51 by ifarahi           #+#    #+#             */
/*   Updated: 2018/10/11 12:02:08 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char			*dest;
	size_t					i;

	dest = (unsigned char*)str;
	i = 0;
	while (++i <= n)
	{
		if (*(dest++) == (unsigned char)c)
			return ((void *)--dest);
	}
	return (0);
}
