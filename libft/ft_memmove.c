/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 13:04:05 by trahman           #+#    #+#             */
/*   Updated: 2020/07/06 19:04:57 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 < s2)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			s1[len] = s2[len];
	}
	return (s1);
}
