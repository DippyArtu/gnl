/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalome <jsalome@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 14:36:41 by jsalome           #+#    #+#             */
/*   Updated: 2019/09/29 15:02:10 by jsalome          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	if (*n == '\0')
		return ((char *)h);
	i = 0;
	while (h[i] != '\0' && i < len)
	{
		if (h[i] == n[0])
		{
			j = 1;
			while (h[i + j] == n[j] && n[j] != '\0' && i + j < len)
			{
				j++;
			}
			if (n[j] == '\0')
				return ((char *)(h + i));
		}
		i++;
	}
	return (NULL);
}
