/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 14:53:08 by ifarahi           #+#    #+#             */
/*   Updated: 2018/10/21 14:41:01 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		dst_len;
	size_t		src_len;
	size_t		result;
	size_t		bc;

	dst_len = ft_strlen((const char *)dest);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		result = size + src_len;
	else
	{
		result = dst_len + src_len;
		bc = size - dst_len - 1;
		ft_strncat(dest, src, bc);
	}
	return (result);
}
