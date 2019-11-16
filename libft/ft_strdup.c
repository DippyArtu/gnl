/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalome <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 17:07:53 by jsalome           #+#    #+#             */
/*   Updated: 2019/09/29 15:02:16 by jsalome          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	char	*dest;
	int		i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (len > (len + 1))
		return (NULL);
	len++;
	if (!(dest = malloc(len * sizeof(char))))
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
