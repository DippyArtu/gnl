/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalome <jsalome@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 14:10:26 by jsalome           #+#    #+#             */
/*   Updated: 2019/11/16 20:44:52 by Artur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

# include "./libft/libft.h"

# define BUFF_SIZE 8
# define MAX_FDSIZE 4864
# define NL '\n'

int					get_next_line(const int fd, char **line);

#endif
