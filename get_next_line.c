/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 16:00:43 by rengelbr          #+#    #+#             */
/*   Updated: 2019/06/12 10:48:53 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(const int fd, char **line)
{
	char	buf[BUFF_SIZE + 1];

	if (fd < 0 || !line || read(fd, buf, 0) < 0)
		return (-1);

	read(fd, buf, BUFF_SIZE);
}
