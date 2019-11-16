/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalome <jsalome@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 14:32:40 by jsalome           #+#    #+#             */
/*   Updated: 2019/11/10 23:26:42 by Artur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char *dest;
	char *src;

	if (!str1 && !str2)
		return (NULL);
	dest = (char *)str1;
	src = (char *)str2;
	while (n)
	{
		*dest++ = *src++;
		n--;
	}
	return (str1);
}
