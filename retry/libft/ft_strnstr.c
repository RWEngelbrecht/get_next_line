/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:08:20 by rengelbr          #+#    #+#             */
/*   Updated: 2019/06/10 14:04:48 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nd_len;
	size_t	i;
	int		last;

	if (!(*needle))
		return ((char *)haystack);
	if (!(*haystack))
		return (NULL);
	nd_len = ft_strlen(needle);
	i = 0;
	last = 1;
	while (nd_len <= len && haystack[i] != '\0' &&
			(last = ft_strncmp(&haystack[i], needle, nd_len)))
	{
		len--;
		i++;
	}
	if (last == 0)
		return ((char*)&haystack[i]);
	else
		return (NULL);
}
