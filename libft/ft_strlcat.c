/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 13:18:10 by trahman           #+#    #+#             */
/*   Updated: 2020/06/25 11:59:06 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t res;
	size_t s_len;
	size_t d_len;

	i = 0;
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	res = d_len + s_len;
	if (size <= d_len)
		return (size + s_len);
	while (dest[i] && i < size - 1)
		i++;
	while (*src && i < size - 1)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (res);
}
