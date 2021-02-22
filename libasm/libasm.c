/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: d2435 <d2435@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 15:19:07 by dmalori           #+#    #+#             */
/*   Updated: 2021/02/22 13:59:02 by d2435            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int			ft_test_strlen(void)
{
	char	*str;

	printf("\n**TEST STRLEN\n");
	str = "Ciao";
	printf("01 [%s] ", strlen(str) != ft_strlen(str) ? "FAIL" : "OK");
	str = "...";
	printf("02 [%s] ", strlen(str) != ft_strlen(str) ? "FAIL" : "OK");
	str = "";
	printf("03 [%s] ", strlen(str) != ft_strlen(str) ? "FAIL" : "OK");
	str = "01234567891011121314151617181920";
	printf("04 [%s]\n", strlen(str) != ft_strlen(str) ? "FAIL" : "OK");
	return (1);
}

int			ft_test_strcmp(void)
{
	char	*str1;
	char	*str2;

	printf("\n**TEST STRCMP\n");
	str1 = "Ciao";
	str2 = "Paolo";
	printf("01 [%s] ", strcmp(str1, str2) != strcmp(str1, str2)
		? "FAIL" : "OK");
	str1 = "Cava";
	str2 = "CAva";
	printf("02 [%s] ", strcmp(str1, str2) != strcmp(str1, str2)
		? "FAIL" : "OK");
	str1 = "PALLA";
	str2 = "PALLA";
	printf("03 [%s] ", strcmp(str1, str2) != strcmp(str1, str2)
		? "FAIL" : "OK");
	str1 = "123*-";
	str2 = "-*123";
	printf("04 [%s]\n", strcmp(str1, str2) != strcmp(str1, str2)
		? "FAIL" : "OK");
	return (1);
}

int			ft_test_strcpy(void)
{
	char	*str1;
	char	*str2;

	str1 = malloc(100);
	str2 = malloc(100);
	printf("\n**TEST STRCPY\n");
	strcpy(str1, "CIAO");
	ft_strcpy(str2, "CIAO");
	printf("01 [%s] ", strcmp(str1, str2) != 0 ? "FAIL" : "OK");
	strcpy(str1, "CAVALLO \t\t CIAO");
	ft_strcpy(str2, "CAVALLO \t\t CIAO");
	printf("02 [%s] ", strcmp(str1, str2) != 0 ? "FAIL" : "OK");
	strcpy(str1, "");
	ft_strcpy(str2, "");
	printf("03 [%s] ", strcmp(str1, str2) != 0 ? "FAIL" : "OK");
	strcpy(str1, "_123123");
	ft_strcpy(str2, "_123123");
	printf("04 [%s]\n", strcmp(str1, str2) != 0 ? "FAIL" : "OK");
	free(str1);
	free(str2);
	return (1);
}

int			main(void)
{
	int		count;

	count = 0;
	printf("*******************************\n");
	printf("*    LIBFT TESTER BY D2435    *\n");
	printf("*******************************\n");
	count += ft_test_strlen();
	count += ft_test_strcmp();
	count += ft_test_strcpy();
	count += ft_test_strdup();
	count += ft_test_write();
	count += ft_test_read();
	if (count == 6)
	{
		printf("\n*******************************\n");
		printf("*     ALL TESTS PASSED!!!     *\n");
		printf("*******************************\n\n");
	}
	return (0);
}
