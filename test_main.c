/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalome <jsalome@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 14:27:06 by jsalome           #+#    #+#             */
/*   Updated: 2019/11/16 20:17:29 by Artur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int			main(void)
{

/*
	char 	*line;
	int 	fd;
	int 	check;

	fd = open("testfile", O_RDONLY);

	check = get_next_line(fd, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	close(fd);

	line = NULL;

	return (0);


*/

	char 	*line;
	int 	fd1;
	int 	fd2;
	int 	fd3;
	int 	check;

	fd1 = open("testfile1", O_RDONLY);
	fd2 = open("testfile2", O_RDONLY);
	fd3 = open("testfile3", O_RDONLY);

	check = get_next_line(fd1, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd2, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd3, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd3, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd1, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd3, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd2, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd1, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd2, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd1, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd3, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd2, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	check = get_next_line(fd1, &line);
	printf("*******test : %i\n", check);
	printf("%s nl\n________________\n", line);
	free(line);

	close(fd1);
	close(fd2);
	close(fd3);

	line = NULL;
	return (0);



}
