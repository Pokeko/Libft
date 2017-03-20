/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdardakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 12:23:23 by mdardakh          #+#    #+#             */
/*   Updated: 2016/11/17 16:16:59 by mdardakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *ptr;
	t_list *tmp;

	ptr = *alst;
	tmp = *alst;
	while (ptr->next)
	{
		del(ptr->content, ptr->content_size);
		ptr = tmp->next;
		tmp = ptr;
		free(ptr);
	}
	del(ptr->content, ptr->content_size);
	*alst = NULL;
}
