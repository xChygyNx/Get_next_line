/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 19:03:30 by pcredibl          #+#    #+#             */
/*   Updated: 2019/05/06 20:15:34 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int				check_el(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	return (i);
}

void			set_line(char *buf, char **fd_tab, int fd, char **line)
{
	int			cel;
	char		*temp;
	int			v_read;
	int			len_ost;
	char		*str_ost;

	while ((cel = check_el(buf)) == BUFF_SIZE)
	{
		temp = ft_strjoin(fd_tab[fd], buf);
		free(fd_tab[fd]);
		fd_tab[fd] = temp;
		ft_bzero((void*)buf, BUFF_SIZE);
		v_read = read(fd, buf, BUFF_SIZE);
	}
	len_ost = ft_strlen(buf);
	str_ost = ft_strsub(buf, 0, cel);
	temp = ft_strjoin(fd_tab[fd], str_ost);
	free(fd_tab[fd]);
	free(str_ost);
	free(*line);
	*line = temp;
	fd_tab[fd] = ft_strsub(buf, cel + 1, len_ost - cel);
	temp = NULL;
	str_ost = NULL;
}

int				prepare(int fd, char **line, char **fd_tab)
{
	if (fd < 0 || fd > 10240 || line == NULL)
		return (-1);
	*line = (char*)malloc(sizeof(char));
	**line = '\0';
	if (fd_tab[fd] == NULL)
	{
		fd_tab[fd] = (char*)malloc(sizeof(char));
		fd_tab[fd][0] = '\0';
	}
	return (0);
}

int				get_from_array(char **fd_tab, int fd, char **line)
{
	int			len_ost;
	char		*str_ost;
	int			cel;

	len_ost = ft_strlen(fd_tab[fd]);
	cel = check_el(fd_tab[fd]);
	if (len_ost != 0 && cel < len_ost)
	{
		str_ost = ft_strsub(fd_tab[fd], 0, cel);
		ft_strdel(line);
		*line = str_ost;
		str_ost = ft_strsub(fd_tab[fd], cel + 1, len_ost - cel);
		free(fd_tab[fd]);
		fd_tab[fd] = str_ost;
		return (1);
	}
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	static char	*fd_tab[10240];
	char		buf[BUFF_SIZE + 1];
	int			v_read;

	if (prepare(fd, line, fd_tab) < 0)
		return (-1);
	if (get_from_array(fd_tab, fd, line) == 1)
		return (1);
	ft_bzero(buf, BUFF_SIZE);
	v_read = read(fd, buf, BUFF_SIZE);
	if (v_read <= 0)
	{
		ft_strdel(line);
		if (v_read == 0 && fd_tab[fd][0] != '\0')
		{
			*line = ft_strjoin("\0", fd_tab[fd]);
			free(fd_tab[fd]);
			return (1);
		}
		return (v_read == 0 ? 0 : -1);
	}
	buf[v_read - 1] != '\0' ? buf[v_read] = '\0' : 0;
	set_line(buf, fd_tab, fd, line);
	return (1);
}
