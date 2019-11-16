/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalome <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 14:42:03 by jsalome           #+#    #+#             */
/*   Updated: 2019/09/29 16:07:32 by jsalome          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_arrnew(size_t size)
{
	char **ptr;

	ptr = (char **)malloc(size  * sizeof(char *));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
