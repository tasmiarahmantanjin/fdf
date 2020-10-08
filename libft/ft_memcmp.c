/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:56:36 by trahman           #+#    #+#             */
/*   Updated: 2020/06/30 16:10:12 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*s1;
	unsigned const char	*s2;

	if (dest == src || n == 0)
		return (0);
	s1 = (unsigned char*)dest;
	s2 = (unsigned const char*)src;
	i = 0;
	while (s1[i] == s2[i] && i < n - 1)
		i++;
	if (i != n)
		return (s1[i] - s2[i]);
	return (s1[i - 1] - s2[i - 1]);
}
