/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalome <jsalome@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 14:39:37 by jsalome           #+#    #+#             */
/*   Updated: 2019/11/26 18:38:44 by Artur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

int main(int argc, char **argv)
{
	int	fd;
	int	check;
	char	*line;
	int	n;
	int	i;

	n = 1;
	i = 1;
	fd = 0;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);

		while ((check = get_next_line(fd, &line)) == 1)
		{
			printf("*******test : %i\n", check);
			printf("%s nl\n________________\n", line);
			free(line);
		}
		if (check == -1)
			printf("-----------\nError\n");
		else if (check == 0)
			printf("-----------\nEnd of file\n");
		close(fd);
		free(line);
		line = NULL;
	}
	else if (argc == 1)
	{
		while ((check = get_next_line(fd, &line)) == 1)
		{
			printf("*******test : %i\n", check);
			printf("%s nl\n________________\n", line);
			free(line);
		}
		if (check == -1)
			printf("-----------\nError\n");
		else if (check == 0)
			printf("-----------\nEnd of stdin\n");
		close(fd);
		free(line);
		line = NULL;
	}
	else
	{
		while (argc > 1)
		{
			n++;
			argc--;
		}
		while (i < n)
		{
			fd = open(argv[i], O_RDONLY);
			while ((check = get_next_line(fd, &line)) == 1)
			{
				printf("********test : %i\n", check);
				printf("%s nl\n________________\n", line);
				free(line);
			}
			if (check == -1)
				printf("----------\nError\n");
			else if (check == 0)
				printf("-----------\nEnd of file\n");
			close(fd);
			free(line);
			line = NULL;
			i++;
		}
	}

	return (0);
}
