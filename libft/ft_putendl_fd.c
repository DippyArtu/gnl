/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalome <jsalome@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 14:33:55 by jsalome           #+#    #+#             */
/*   Updated: 2019/09/29 16:17:17 by jsalome          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putendl_fd(char const *s, int fd)
{
	char nl;

	if (!s || !fd)
		return ;
	nl = '\n';
	ft_putstr_fd(s, fd);
	write(fd, &nl, 1);
}
