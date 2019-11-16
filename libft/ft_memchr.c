/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalome <jsalome@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 14:29:29 by jsalome           #+#    #+#             */
/*   Updated: 2019/09/29 15:02:10 by jsalome          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*ptr;
	int				i;

	ptr = (unsigned char *)str;
	ch = c;
	i = 0;
	while (n--)
	{
		if (*ptr++ == ch)
		{
			return (--ptr);
		}
	}
	return (NULL);
}
