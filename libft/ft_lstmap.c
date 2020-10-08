/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 16:58:49 by trahman           #+#    #+#             */
/*   Updated: 2020/07/07 11:50:34 by trahman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of nonstandard function lstmap().
** Parameters: pointer to the head node of a list, pointer to a function that
** takes a list node and returns a pointer to a list node
** Side effect: if the arguments passed are non-NULL, creates a new list
** that is the list where each element is the result of applying f to
** the corresponding node of the list passed
** Return value: pointer to the head of the new list, or NULL if the memory
** allocation failed or a NULL argument was passed
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*current;

	if (!lst)
		return (NULL);
	head = f(lst);
	current = head;
	while (lst->next)
	{
		lst = lst->next;
		current->next = f(lst);
		if (!(current = current->next))
			return (NULL);
	}
	return (head);
}
