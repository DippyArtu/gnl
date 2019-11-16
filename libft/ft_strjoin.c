/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalome <jsalome@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 14:35:50 by jsalome           #+#    #+#             */
/*   Updated: 2019/11/11 00:51:47 by Artur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*fresh;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (len > (len + 1))
		return (NULL);
	len++;
	fresh = ft_strnew(len);
	if (fresh == NULL)
	{
		free(fresh);
		return (NULL);
	}
	fresh = ft_memcpy(fresh, s1, (size_t)ft_strlen(s1));
	ft_strlcat(fresh, s2, len);
	return (fresh);
}
