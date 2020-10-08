/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 13:30:32 by trahman           #+#    #+#             */
/*   Updated: 2020/07/07 13:45:08 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_wordcount() function will count the words from input string
** which we need to print as output. here int count means the
** index number of 1st layer array
*/

#include "libft.h"

int	ft_wordcount(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	if (s[i] == '\0')
		return (0);
	count = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}
