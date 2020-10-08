/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 20:04:56 by trahman           #+#    #+#             */
/*   Updated: 2020/06/29 16:51:35 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	if (c == 0)
		return ((char*)s + i);
	while (i > 0)
	{
		i--;
		if (s[i] == c)
			return ((char*)s + i);
	}
	return (NULL);
}
