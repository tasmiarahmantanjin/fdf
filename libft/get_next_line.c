/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 18:13:49 by trahman           #+#    #+#             */
/*   Updated: 2020/10/08 11:51:03 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** A good read about fd: http://www.bottomupcs.com/file_descriptors.xhtml
*/
#include "libft.h"
//#include "get_next_line.h"

int	search_nline(char **stack, char **line)
{
	int		len;
	char	*tmp;

	len = 0;
	while ((*stack)[len] != '\n' && (*stack)[len] != '\0')
		len++;
	if ((*stack)[len] == '\n')
	{
		*line = ft_strsub(*stack, 0, len);
		tmp = ft_strdup(*stack + len + 1);
		free(*stack);
		*stack = tmp;
		if (*stack[0] == '\0')
			ft_strdel(stack);
	}
	else if ((*stack)[len] == '\0')
	{
		*line = ft_strdup(*stack);
		ft_strdel(stack);
	}
	return (1);
}

/*
** this function is created just to limit get_new_line.c in 25 lines
** mainly works as a returns the value as per subject
** return (1, 0, -1) if (line has been read, reading has been completed, error)
*/

int	ft_return(char **stack, int n, char **line)
{
	if (n < 0)
		return (-1);
	else if (n == 0 && (*stack) == NULL)
		return (0);
	else
		return (search_nline(stack, line));
}

/*
** It first checks for errors (if the number of the file
** descriptor is invalid), so it can return (-1)
**
** If there is something in the stack (because we are using a static variable)
*/

int	get_next_line(const int fd, char **line)
{
	int			n;
	char		buffer[BUFF_SIZE + 1];
	char		*tmp;
	static char	*stack[FD_SIZE];

	if (fd < 0 || line == NULL || BUFF_SIZE <= 0)
		return (-1);
	while ((n = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[n] = '\0';
		if (stack[fd] == NULL)
			stack[fd] = ft_strdup(buffer);
		else
		{
			tmp = ft_strjoin(stack[fd], buffer);
			free(stack[fd]);
			stack[fd] = tmp;
		}
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (ft_return(&stack[fd], n, line));
}
