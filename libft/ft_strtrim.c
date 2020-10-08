/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 19:55:13 by trahman           #+#    #+#             */
/*   Updated: 2020/06/30 20:58:34 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_strtrim() function allocates with malloc(3) and returns a copy of
** the string given as argument without whitespaces at the beginning or at
** the end of the string. ' ', '\n' and '\t' are considered whitespace
** characters. If s has no whitespaces at the beginning or the end, the
** function returns a copy of s. If the allocation fails the function returns
** NULL.
*/

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	int				end;

	if (!s)
		return (NULL);
	start = 0;
	end = (int)ft_strlen(s) - 1;
	while ((s[start] == ' ' || s[start] == '\t' || s[start] == '\n') &&
			s[start])
		start++;
	while ((s[end] == ' ' || s[end] == '\t' || s[end] == '\n') && s[end] &&
			end > (int)start)
		end--;
	return (ft_strsub(s, start, end - start + 1));
}
