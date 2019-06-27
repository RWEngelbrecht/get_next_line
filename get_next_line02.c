/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line02.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 09:49:15 by rengelbr          #+#    #+#             */
/*   Updated: 2019/06/26 13:37:30 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	verify_line(char **buffer, char **line)
{
	char *tmp_buf;
	char *schr;
	int i;

	i = 0;
	schr = *buffer;
	while (schr[i] != '\n')
		if (!schr[i++])
			return (0);
	tmp_buf = &schr[i];
	*tmp_buf = '\0';
	*line = ft_strdup(*buffer);
	*buffer = ft_strdup(tmp_buf + 1);
	return (1);
}

static int	read_file(int fd, char *heap, char **buffer, char **line)
{
	int red;
	char *tmp_buf;

	while ((red = read(fd, heap, BUFF_SIZE)) > 0)
	{
		heap[red] = '\0';
		if (*buffer)
		{
			tmp_buf = *buffer;
			*buffer = ft_strjoin(tmp_buf, heap);
			free(tmp_buf);
			tmp_buf = NULL;
		}
		else
			*buffer = ft_strdup(heap);
		if (verify_line(buffer, line))
			break ;
	}
	return
}

int	get_next_line(const int fd, char **line)
{
	static char			*buf[BUFF_SIZE + 1];
	int				red;
	int				i;
	char			*heap;

	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0
		|| !(heap = (char**)malloc(sizeof(*arr) * BUFF_SIZE + 1))
		return (-1);
	if (buf[fd])   //???????????
		if (verify_line(&buf[fd], line))
			return (1);
	i = 0;
	while (i < BUFF_SIZE)
		heap[i++] = '\0';
	red = read_file(fd, heap, &buf[fd], line);
	free(heap);
	if (red != 0 || buf[fd] == NULL || buf[fd][0] == '\0')
	{
		if (!red && *line)
			*line = NULL;
		return (red);
	}
	*line = stack[fd];
	stack[fd] = NULL;
	return (1);
}
/*
** int main()
** {
** 	int res;
**
** 	res = 0;
** 	fd = open("test.txt", O_RDONLY | O_CREAT);
** 	write(fd, "this is a line\n", 15);
** 	res = get_next_line02(fd, )
** }
*/
