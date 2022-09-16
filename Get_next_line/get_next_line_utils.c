/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurugar <imurugar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:41:13 by imurugar          #+#    #+#             */
/*   Updated: 2022/09/16 13:41:13 by imurugar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_malloc(size_t len)
{
	void	*r;

	r = malloc(len);
	return (r);
}

char	*ft_strcat(const char *a, const char *b)
{
	char	*r;
	char	*p;

	r = ft_malloc(ft_strlen(a) + ft_strlen(b) + 1);
	p = r;
	if (a)
		while (*a)
			*p++ = *a++;
	if (b)
		while (*b)
			*p++ = *b++;
	*p = 0;
	return (r);
}

void	ft_free(char **save)
{
	free(*save);
	*save = 0;
}

char	*ft_strndup(const char *s, size_t n)
{
	char			*res;
	unsigned int	i;

	i = 0;
	res = ft_malloc(sizeof(char) * (n + 1));
	if (res == NULL)
		return (NULL);
	while (i < n)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
