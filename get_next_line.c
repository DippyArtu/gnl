/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalome <jsalome@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:58:03 by jsalome           #+#    #+#             */
/*   Updated: 2019/11/16 20:14:45 by Artur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t			ft_strchr_index(const char *str, char c)
{
	size_t			len;

	len = 0;
	while (str[len] && str[len] != (unsigned char)c)
		len++;
	return (len);
}

static t_list		*ft_add_list(t_list *list, const int fd)
{
	t_list *fresh;

	if (!list)
	{
		fresh = (t_list *)malloc(sizeof(t_list));
		if (!fresh)
		{
			free(fresh);
			return (NULL);
		}
		fresh->content = ft_strnew(0);
		fresh->content_size = (size_t)fd;
		list = fresh;
		list->next = list;
	}
	else
	{
		fresh = ft_add_list(NULL, fd);
		fresh->next = list->next;
		list->next = fresh;
		list = fresh;
	}
	return (list);
}

static int			read_line(t_list *lst, char **line, const int fd)
{
	int		ret;
	char	*tmp;

	tmp = lst->content;
	lst->content = ft_strsub(lst->content, ft_strchr_index(lst->content, NL) + 1,\
	ft_strlen(lst->content));
	ft_strdel(&tmp);
	while ((ret = read(fd, *line, BUFF_SIZE)) && (ret != -1))
	{
		(*line)[ret] = '\0';
		tmp = lst->content;
		lst->content = ft_strjoin(lst->content, *line);
		ft_strclr(tmp);
		free(tmp);
		if (ft_strchr(*line, NL))
			break ;
	}
	return (ret);
}

int					get_next_line(const int fd, char **line)
{
	int				ret;
	char			*tmp;
	static t_list	*gnl_list;
	size_t			temp;

	if (!line || !(*line = ft_strnew(BUFF_SIZE)) || fd < 0 || fd > MAX_FDSIZE \
	|| BUFF_SIZE < 1)
		return (-1);
	if (gnl_list)
	{
		temp = gnl_list->content_size;
		while ((gnl_list->next)->content_size != temp && \
		gnl_list->content_size != (size_t)fd)
			gnl_list = gnl_list->next;
	}
	if (!gnl_list || gnl_list->content_size != (size_t)fd)
		gnl_list = ft_add_list(gnl_list, fd);
	if ((ret = read_line(gnl_list, line, fd)) == -1)
		return (-1);
	tmp = *line;
	*line = ft_strsub(gnl_list->content, 0, ft_strchr_index(gnl_list->content, \
	NL));
	ft_strdel(&tmp);
	if (!(((char *)gnl_list->content)[0]) && !(ret))
		return (0);
	return (1);
}
