/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 10:43:03 by trahman           #+#    #+#             */
/*   Updated: 2020/07/06 19:44:13 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	x;

	x = c;
	a = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (a[i] == x)
			return (&a[i]);
		i++;
	}
	return (NULL);
}
