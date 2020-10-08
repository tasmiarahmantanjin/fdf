/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 18:20:38 by trahman           #+#    #+#             */
/*   Updated: 2020/06/30 13:10:51 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *ptr;

	if (!(ptr = (char*)malloc(sizeof(*ptr) * size + 1)))
		return (NULL);
	ft_bzero(ptr, size);
	*(ptr + size) = '\0';
	return (ptr);
}
