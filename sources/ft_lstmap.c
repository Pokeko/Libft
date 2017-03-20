/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdardakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 14:30:33 by mdardakh          #+#    #+#             */
/*   Updated: 2016/11/17 15:50:58 by mdardakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ptr;
	t_list	*begin;

	if (lst == NULL)
		return (NULL);
	if (!(ptr = (t_list*)malloc(sizeof(ptr))))
		return (NULL);
	ptr = f(lst);
	begin = ptr;
	while (lst->next)
	{
		lst = lst->next;
		ptr->next = f(lst);
		ptr = ptr->next;
	}
	return (begin);
}
