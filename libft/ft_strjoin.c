/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 16:55:23 by trahman           #+#    #+#             */
/*   Updated: 2020/06/30 19:00:13 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strjoin() function allocates (with malloc(3)) and returns a "fresh"
** string that is the concatenation of s1 and s2, ending with '\0'. If the
** allocation fails, the function returns NULL.
** ft_strjoin.c Concatenate an array into a single string.
** ex: str = ft_strjoin({'this','is','a','cell','array'})
** ex output: str = this is a cell array
*/

#include "libft.h"

char	*ft_strjoin(char const *dest, char const *src)
{
	char	*str;
	int		d_len;
	int		s_len;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (!dest || !src)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(*str) * (d_len + s_len) + 1)))
		return (NULL);
	if (str)
	{
		ft_strcpy(str, (char*)dest);
		ft_strcat(str, (char*)src);
	}
	return (str);
}
