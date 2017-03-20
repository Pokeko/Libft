/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsiter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdardakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 14:18:59 by mdardakh          #+#    #+#             */
/*   Updated: 2016/11/17 17:19:19 by mdardakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *ptr;

	ptr = lst;
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
		{
			f(ptr);
			ptr = ptr->next;
		}
	}
	if (ptr != NULL)
		f(ptr);
}
