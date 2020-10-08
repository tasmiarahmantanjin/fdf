/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 18:39:50 by trahman           #+#    #+#             */
/*   Updated: 2020/06/30 19:50:21 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloc using malloc(3) and returns new substring. Substring begins with
** index start and is of size len. If start and len aren't referring to a valid
** substring, the behavior is undefined. If the alloc fails, return NULL
** Param: string, start index of substring, size of substring
** Return: substring
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(substr = (char*)malloc(sizeof(*substr) * (len + 1))))
		return (NULL);
	while (i < len && s[start])
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
