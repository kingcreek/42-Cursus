/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurugar <imurugar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:41:08 by imurugar          #+#    #+#             */
/*   Updated: 2022/09/16 13:41:08 by imurugar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <assert.h>

int	check_newline(char *line)
{
	int	i;

	i = 0;
	while (line[i])
	{
		if (line[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*get_line(char *buf)
{
	int	pos;

	pos = 0;
	while (*buf)
	{
		if (*buf == '\n')
		{

		}
	}
	return (NULL);
}

char	*get_next_line(int const fd)
{
	char			buf[BUFFER_SIZE + 1];
	static char		*save;
	static int		pos;
	int				read;

	if (save && pos)
		while (save[])
		{

		}
	read = read(fd, buf, BUFFER_SIZE);
	if (!read || fd < 0)
	{
		return (NULL);
	}
}
/*
int	ft_static_count(int new_value)
{
	static int	i;

	if (new_value != -1)
		i = new_value;
	return (i);
}

char	*get_next_line(int const fd)
{
	char			buf[BUFFER_SIZE + 1];
	static char		*save;
	static int		done;
	int				j;
	char			*plop;

	j = ft_static_count(-1);
	if (save && done)
		while (save[ft_static_count(-1)])
			if (10 == save[ft_static_count(ft_static_count(-1) + 1) - 1])
				return (strndup(save + j, ft_static_count(-1) - j - 1));
	done = read(fd, buf, BUFFER_SIZE);
	if (!done || fd < 0)
	{
		plop = 0;
		if (save && save[j])
			plop = strndup(save + j, ft_static_count(-1) - j);
		ft_free(&save);
		return (plop);
	}
	ft_static_count(0);
	buf[done] = 0;
	save = ft_strcat((plop = save) + j, buf);
	ft_free(plop);
	return (get_next_line(fd));
}*/
