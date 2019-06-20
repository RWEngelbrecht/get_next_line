/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line02.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 09:49:15 by rengelbr          #+#    #+#             */
/*   Updated: 2019/06/20 11:40:41 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list	*get_correct_list(t_list **list, int fd)
{
	t_list	*tmp;

	tmp = *file;
}

int	get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	int				red;
	int				i;
	static t_list	*list;
	char			**arr;

	i = 0;
	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	while ((red = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[red] = '\0';
/*
** 		tmp = ft_strnew(red);
*/		while(arr = ft_strsplit(buf, '\n') || arr = ft_strsplit(buf, '\0'))
		{
			list->content = arr[i];
			list = list->next;
			i++;
		}
/*
** 		while (buf[i] != '\n' && buf[i] != '\0')
** 			tmp[i++] = buf[i++];
*/

	}
	if (red < 0)
		return (-1);
	else if (red == 0 && lst->content == NULL)
		return (0);
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
