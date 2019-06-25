/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 10:19:43 by ifarahi           #+#    #+#             */
/*   Updated: 2018/10/22 11:42:32 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f) (char))
{
	char	*area;
	char	*ptr_area;
	char	*ptr_s;

	if (!(s) || !(area = ft_memalloc((size_t)ft_strlen((char*)s) + 1)))
		return (NULL);
	ptr_area = area;
	ptr_s = (char*)s;
	while (*ptr_s)
	{
		*(ptr_area++) = f(*(ptr_s++));
	}
	return (area);
}
