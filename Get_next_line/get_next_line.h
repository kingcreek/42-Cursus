/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurugar <imurugar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:41:18 by imurugar          #+#    #+#             */
/*   Updated: 2022/09/16 13:41:18 by imurugar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
void	*ft_malloc(size_t len);
char	*ft_strcat(const char *a, const char *b);
void	ft_free(char **save);
char	*ft_strndup(const char *s, size_t n);

#endif