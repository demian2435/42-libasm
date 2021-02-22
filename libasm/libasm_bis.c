/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm_bis.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: d2435 <d2435@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:36:35 by dmalori           #+#    #+#             */
/*   Updated: 2021/02/22 13:59:19 by d2435            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int			ft_test_strdup(void)
{
	char	*str1;
	char	*str2;

	printf("\n**TEST STRDUP\n");
	str1 = strdup("CIAO");
	str2 = ft_strdup("CIAO");
	printf("01 [%s] ", strcmp(str1, str2) != 0 ? "FAIL" : "OK");
	free(str1);
	free(str2);
	str1 = strdup("  H Y UG");
	str2 = ft_strdup("  H Y UG");
	printf("02 [%s] ", strcmp(str1, str2) != 0 ? "FAIL" : "OK");
	free(str1);
	free(str2);
	str1 = strdup("");
	str2 = ft_strdup("");
	printf("03 [%s] ", strcmp(str1, str2) != 0 ? "FAIL" : "OK");
	free(str1);
	free(str2);
	str1 = strdup("SCIAOOOOO");
	str2 = ft_strdup("SCIAOOOOO");
	printf("04 [%s]\n", strcmp(str1, str2) != 0 ? "FAIL" : "OK");
	free(str1);
	free(str2);
	return (1);
}

int			ft_test_write(void)
{
	ssize_t	s;
	ssize_t	s2;

	printf("\n**TEST WRITE\n");
	s = write(10, "CIAO", 4);
	s2 = write(10, "CIAO", 4);
	printf("01 [%s] ", s != s2 ? "FAIL" : "OK");
	s = write(10, "\n\n\n\nTEST", 40);
	s2 = write(10, "\n\n\n\nTEST", 40);
	printf("02 [%s] ", s != s2 ? "FAIL" : "OK");
	s = write(10, "", 4);
	s2 = write(10, "", 4);
	printf("03 [%s] ", s != s2 ? "FAIL" : "OK");
	s = write(4, "TEST", 0);
	s2 = write(4, "TEST", 0);
	printf("04 [%s]\n", s != s2 ? "FAIL" : "OK");
	return (1);
}

static void	ft_sub_read(void)
{
	char	*buffer[100];
	ssize_t	s;
	ssize_t	s2;
	int		fd;

	printf("\n**TEST READ\n");
	fd = open("test_file", O_RDONLY);
	s = read(fd, buffer, 100);
	close(fd);
	fd = open("test_file", O_RDONLY);
	s2 = ft_read(fd, buffer, 100);
	printf("01 [%s] ", s != s2 ? "FAIL" : "OK");
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
	printf("02 [%s] ", s != s2 ? "FAIL" : "OK");
	fd = open("test_file_2", O_RDONLY);
	s = read(fd, buffer, 100);
	close(fd);
	fd = open("test_file_2", O_RDONLY);
	s2 = ft_read(fd, buffer, 100);
	printf("03 [%s] ", s != s2 ? "FAIL" : "OK");
	fd = open("test_file_2", O_RDONLY);
	s = read(fd, buffer, 10);
	close(fd);
	fd = open("test_file_2", O_RDONLY);
	s2 = ft_read(fd, buffer, 10);
	printf("04 [%s]\n", s != s2 ? "FAIL" : "OK");
	return (1);
}
