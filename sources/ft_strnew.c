/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdardakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 17:47:13 by mdardakh          #+#    #+#             */
/*   Updated: 2016/11/17 14:51:10 by mdardakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *ptr;

	if (!(ptr = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (size--)
	{
		ptr[size + 1] = '\0';
	}
	ptr[0] = '\0';
	return (ptr);
}
