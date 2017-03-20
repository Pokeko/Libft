/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdardakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 13:06:20 by mdardakh          #+#    #+#             */
/*   Updated: 2016/11/17 15:04:45 by mdardakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	i = 0;
	while (ptr1[i] && ptr2[i] && ptr1[i] == ptr2[i])
		i++;
	if (ptr1[i] && !ptr2[i])
		return (ptr1[i]);
	if (!ptr1[i] && !ptr2[i])
		return (ptr2[i]);
	return (ptr1[i] - ptr2[i]);
}
