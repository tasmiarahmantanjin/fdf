/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:28:20 by trahman           #+#    #+#             */
/*   Updated: 2020/07/07 13:33:17 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_chr() function will read and increase the charecter from input string
** if the the charecter is not the delimeter than it will increase the as i++
** and return the index number of 2nd layer array
*/

static	int		ft_chr(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**ptr;
	int		x;
	int		y;

	if (!s)
		return (0);
	if (!(ptr = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	x = -1;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			if (!(ptr[++x] = (char *)malloc(sizeof(char) * (ft_chr(s, c) + 1))))
				return (NULL);
			y = 0;
			while (*s && *s != c)
				ptr[x][y++] = *s++;
			ptr[x][y] = '\0';
		}
	}
	ptr[++x] = NULL;
	return (ptr);
}
