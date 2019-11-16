/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_arrc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalome <jsalome@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 14:37:07 by jsalome           #+#    #+#             */
/*   Updated: 2019/09/29 15:02:10 by jsalome          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strsplit_arrc(const char *s, char c)
{
	size_t i;

	i = 1;
	while (*s)
	{
		s++;
		if (*s == c)
		{
			i++;
			while (*s == c)
				s++;
		}
	}
	return (i);
}
