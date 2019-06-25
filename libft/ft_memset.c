/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 08:57:21 by ifarahi           #+#    #+#             */
/*   Updated: 2018/10/07 11:06:26 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	s;
	unsigned char	*strc;

	strc = (unsigned char *)str;
	s = (char)c;
	i = 0;
	while (i < n)
	{
		*(strc + i) = s;
		i++;
	}
	return (str);
}
