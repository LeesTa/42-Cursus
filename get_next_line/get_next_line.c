/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:24:07 by lta               #+#    #+#             */
/*   Updated: 2021/11/29 12:07:47 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
 * append connects 2 strings together
 * or just returns the second string if first string is empty
 */

static char	*ft_append(char *line, char *buf)
{
	if (line == NULL)
		return (ft_strdup(buf));
	else
		return (ft_strjoin(line, buf));
}

/*
 * trim removes everything after newline \n
 */

static char	*ft_trim(char *line)
{
	int		i;
	int		j;
	char	*str;

	if ((line == NULL) || (line[0] == '\0'))
		return (NULL);
	else if (ft_strchr(line, '\n') == 0)
		return (ft_strdup(line));
	i = 0;
	while ((line[i] != '\0') && (line[i] != '\n'))
		i++;
	if (line[i] == '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	j = 0;
	while (line[j] != '\0')
	{
		str[j] = line[j];
		if (line[j++] == '\n')
			break ;
	}
	return (str);
}

/*
 * ft_overwrite puts the trimmed buf into line[]
 */

static char	*ft_overwrite(char *line)
{
	int		i;
	int		j;
	char	*str;

	if ((ft_strchr(line, '\n') == 0) || (line[0] == '\0'))
	{
		free(line);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(line) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while ((line[i] != '\n') && (line[i] != '\0'))
		i++;
	i++;
	j = 0;
	while ((i + j < (int)ft_strlen(line)) && (line[i + j] != '\0'))
	{
		str[j] = line[i + j];
		j++;
	}
	str[j] = '\0';
	free(line);
	return (str);
}

/*
 * get_next_line returns 1 line at a time
 * uses read to get 1 line (with any size BUFFER)
 * uses append to connect blocks of BUFFER_SIZE together to buf
 * uses trim to trim the BUFFER_SIZE blocks
 * uses overwrite to write buf to line[4096]
 */

char	*get_next_line(int fd)
{
	static char	*line[4096];
	char		*buf;
	char		*rtn;
	size_t		r;

	if ((fd < 0) || (BUFFER_SIZE < 1))
		return (NULL);
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	r = 1;
	while ((ft_strchr(line[fd], '\n') == 0) && (r != 0))
	{
		r = read(fd, buf, BUFFER_SIZE);
		if (r < 0)
			break ;
		buf[r] = '\0';
		line[fd] = ft_append(line[fd], buf);
	}
	free(buf);
	rtn = ft_trim(line[fd]);
	line[fd] = ft_overwrite(line[fd]);
	return (rtn);
}
