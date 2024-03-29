/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:08:36 by rengelbr          #+#    #+#             */
/*   Updated: 2019/05/30 10:57:58 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		nd_len;

	i = 0;
	nd_len = ft_strlen(needle);
	if (nd_len == 0)
		return ((char*)haystack);
	while (haystack[i] != '\0')
	{
		if (!(ft_strncmp((haystack + i), needle, nd_len)))
			return ((char*)(haystack + i));
		i++;
	}
	return (NULL);
}
