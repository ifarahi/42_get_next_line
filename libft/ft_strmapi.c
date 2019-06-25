/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 08:20:46 by ifarahi           #+#    #+#             */
/*   Updated: 2018/10/22 11:52:51 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char const		*ptr_s;
	char			*ptr_area;
	char			*area;

	if (!(s) || !(area = ft_memalloc((size_t)ft_strlen((char*)s) + 1)))
		return (NULL);
	i = 0;
	ptr_s = s;
	ptr_area = area;
	while (s[i])
	{
		ptr_area[i] = f(i, ptr_s[i]);
		i++;
	}
	return (area);
}
