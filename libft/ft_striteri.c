/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 19:37:24 by trahman           #+#    #+#             */
/*   Updated: 2020/06/30 11:41:17 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (*s)
		{
			f(i, s);
			s++;
			i++;
		}
	}
}
