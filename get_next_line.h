/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 00:32:37 by ifarahi           #+#    #+#             */
/*   Updated: 2018/11/05 00:32:47 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/libft.h"
# include <fcntl.h>
# include <sys/uio.h>
# include <sys/types.h>

# define BUFF_SIZE 32

int get_next_line(const int fd, char **line);

#endif
