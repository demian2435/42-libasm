/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: d2435 <d2435@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 15:19:07 by dmalori           #+#    #+#             */
/*   Updated: 2021/02/23 10:52:02 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int			ft_test_strlen(void)
{
	char	*str;

	printf("\e[0m               **TEST STRLEN: ");
	str = "Ciao";
	printf("\e[0m01 %s ", strlen(str) != ft_strlen(str)
		? "\e[1;31;6§mKO" : "\e[1;32mOK");
	str = "...";
	printf("\e[0m02 %s ", strlen(str) != ft_strlen(str)
		? "\e[1;31mKO" : "\e[1;32mOK");
	str = "";
	printf("\e[0m03 %s ", strlen(str) != ft_strlen(str)
		? "\e[1;31mKO" : "\e[1;32mOK");
	str = "01234567891011121314151617181920";
	printf("\e[0m04 %s ", strlen(str) != ft_strlen(str)
		? "\e[1;31mKO" : "\e[1;32mOK");
	return (1);
}

int			ft_test_strcmp(void)
{
	char	*str1;
	char	*str2;

	printf("\e[0m**TEST STRCMP: ");
	str1 = "Ciao";
	str2 = "Paolo";
	printf("\e[0m01 %s ", strcmp(str1, str2) != strcmp(str1, str2)
		? "\e[1;31mKO" : "\e[1;32mOK");
	str1 = "Cava";
	str2 = "CAva";
	printf("\e[0m02 %s ", strcmp(str1, str2) != strcmp(str1, str2)
		? "\e[1;31mKO" : "\e[1;32mOK");
	str1 = "PALLA";
	str2 = "PALLA";
	printf("\e[0m03 %s ", strcmp(str1, str2) != strcmp(str1, str2)
		? "\e[1;31mKO" : "\e[1;32mOK");
	str1 = "123*-";
	str2 = "-*123";
	printf("\e[0m04 %s\n", strcmp(str1, str2) != strcmp(str1, str2)
		? "\e[1;31mKO" : "\e[1;32mOK");
	return (1);
}

int			ft_test_strcpy(void)
{
	char	*str1;
	char	*str2;

	str1 = malloc(100);
	str2 = malloc(100);
	printf("\e[0m               **TEST STRCPY: ");
	strcpy(str1, "CIAO");
	ft_strcpy(str2, "CIAO");
	printf("\e[0m01 %s ", strcmp(str1, str2) != 0
		? "\e[1;31mKO" : "\e[1;32mOK");
	strcpy(str1, "CAVALLO \t\t CIAO");
	ft_strcpy(str2, "CAVALLO \t\t CIAO");
	printf("\e[0m02 %s ", strcmp(str1, str2) != 0
		? "\e[1;31mKO" : "\e[1;32mOK");
	strcpy(str1, "");
	ft_strcpy(str2, "");
	printf("\e[0m03 %s ", strcmp(str1, str2) != 0
		? "\e[1;31mKO" : "\e[1;32mOK");
	strcpy(str1, "_123123");
	ft_strcpy(str2, "_123123");
	printf("\e[0m04 %s ", strcmp(str1, str2) != 0
		? "\e[1;31mKO" : "\e[1;32mOK");
	free(str1);
	free(str2);
	return (1);
}

int			main(void)
{
	ft_test_strlen();
	ft_test_strcmp();
	ft_test_strcpy();
	ft_test_strdup();
	ft_test_write();
	ft_test_read();
	printf("\n\n");
	return (0);
}
