/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: d2435 <d2435@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 12:58:26 by d2435             #+#    #+#             */
/*   Updated: 2021/02/22 13:48:19 by d2435            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <fcntl.h>

size_t		ft_strlen(char const *s);
int			ft_strcmp(char const *s1, char const *s2);
char		*ft_strcpy(char *dst, char const *src);
ssize_t		ft_write(int fd, void const *buf, size_t n);
ssize_t		ft_read(int fd, void *buf, size_t n);
char		*ft_strdup(char const *s);
int			main(void);
int			ft_test_strlen(void);
int			ft_test_strcmp(void);
int			ft_test_strcpy(void);
int			ft_test_strdup(void);
int			ft_test_write(void);
int			ft_test_read(void);

#endif
