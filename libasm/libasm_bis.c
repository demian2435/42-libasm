/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm_bis.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: d2435 <d2435@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:36:35 by dmalori           #+#    #+#             */
/*   Updated: 2021/02/22 19:09:08 by d2435            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

static void	ft_sub_strdup(void)
{
	char	*str1;
	char	*str2;

	printf("\e[0m**TEST STRDUP: ");
	str1 = strdup("CIAO");
	str2 = ft_strdup("CIAO");
	printf("\e[0m01 %s ", strcmp(str1, str2) != 0
		? "\e[1;31mOK" : "\e[1;32mOK");
	free(str1);
	free(str2);
}

int			ft_test_strdup(void)
{
	char	*str1;
	char	*str2;

	ft_sub_strdup();
	str1 = strdup("  H Y UG");
	str2 = ft_strdup("  H Y UG");
	printf("\e[0m02 %s ", strcmp(str1, str2) != 0
		? "\e[1;31mOK" : "\e[1;32mOK");
	free(str1);
	free(str2);
	str1 = strdup("");
	str2 = ft_strdup("");
	printf("\e[0m03 %s ", strcmp(str1, str2) != 0
		? "\e[1;31mOK" : "\e[1;32mOK");
	free(str1);
	free(str2);
	str1 = strdup("SCIAOOOOO");
	str2 = ft_strdup("SCIAOOOOO");
	printf("\e[0m04 %s\n", strcmp(str1, str2) != 0
		? "\e[1;31mOK" : "\e[1;32mOK");
	free(str1);
	free(str2);
	return (1);
}

int			ft_test_write(void)
{
	ssize_t	s;
	ssize_t	s2;

	printf("\e[0m               **TEST WRITE : ");
	s = write(10, "CIAO", 4);
	s2 = write(10, "CIAO", 4);
	printf("\e[0m01 %s ", s != s2 ? "\e[1;31mOK" : "\e[1;32mOK");
	s = write(10, "\n\n\n\nTEST", 40);
	s2 = write(10, "\n\n\n\nTEST", 40);
	printf("\e[0m02 %s ", s != s2 ? "\e[1;31mOK" : "\e[1;32mOK");
	s = write(10, "", 4);
	s2 = write(10, "", 4);
	printf("\e[0m03 %s ", s != s2 ? "\e[1;31mOK" : "\e[1;32mOK");
	s = write(4, "TEST", 0);
	s2 = write(4, "TEST", 0);
	printf("\e[0m04 %s ", s != s2 ? "\e[1;31mOK" : "\e[1;32mOK");
	return (1);
}

static void	ft_sub_read(void)
{
	char	*buffer[100];
	ssize_t	s;
	ssize_t	s2;
	int		fd;

	printf("\e[0m**TEST READ  : ");
	fd = open("test_file", O_RDONLY);
	s = read(fd, buffer, 100);
	close(fd);
	fd = open("test_file", O_RDONLY);
	s2 = ft_read(fd, buffer, 100);
	printf("\e[0m01 %s ", s != s2 ? "\e[1;31mOK" : "\e[1;32mOK");
}

int			ft_test_read(void)
{
	char	buffer[100];
	ssize_t	s;
	ssize_t	s2;
	int		fd;

	ft_sub_read();
	fd = open("test_file", O_RDONLY);
	s = read(fd, buffer, 1);
	close(fd);
	fd = open("test_file", O_RDONLY);
	s2 = ft_read(fd, buffer, 1);
	printf("\e[0m02 %s ", s != s2 ? "\e[1;31mOK" : "\e[1;32mOK");
	fd = open("test_file_2", O_RDONLY);
	s = read(fd, buffer, 100);
	close(fd);
	fd = open("test_file_2", O_RDONLY);
	s2 = ft_read(fd, buffer, 100);
	printf("\e[0m03 %s ", s != s2 ? "\e[1;31mOK" : "\e[1;32mOK");
	fd = open("test_file_2", O_RDONLY);
	s = read(fd, buffer, 10);
	close(fd);
	fd = open("test_file_2", O_RDONLY);
	s2 = ft_read(fd, buffer, 10);
	printf("\e[0m04 %s\n", s != s2 ? "\e[1;31mOK" : "\e[1;32mOK");
	return (1);
}
