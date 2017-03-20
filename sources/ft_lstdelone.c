/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdardakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 12:18:22 by mdardakh          #+#    #+#             */
/*   Updated: 2016/11/17 14:54:32 by mdardakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelone(t_list **als, void (*del)(void *, size_t))
{
	t_list	*ptr;

	ptr = *als;
	del(ptr->content, ptr->content_size);
	free(ptr);
	*als = NULL;
}
