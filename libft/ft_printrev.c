/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printrev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rengelbr <rengelbr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:40:28 by rengelbr          #+#    #+#             */
/*   Updated: 2019/06/14 12:40:41 by rengelbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printrev(const char *s)
{
	const char *end;

	end = s + ft_strlen(s);
	while (end > s)
		ft_putchar(*--end);
}
