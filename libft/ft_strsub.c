/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 10:32:28 by ifarahi           #+#    #+#             */
/*   Updated: 2018/10/14 10:51:25 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*area;

	if (!(s) || !(area = ft_memalloc(len + 1)))
		return (0);
	area = ft_strncpy(area, (char*)s + start, len);
	return (area);
}
