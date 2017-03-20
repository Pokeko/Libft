/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdardakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:04:56 by mdardakh          #+#    #+#             */
/*   Updated: 2016/11/17 14:50:52 by mdardakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(little);
	i = 0;
	if (little[0] == '\0')
		return ((char*)big);
	while (i < len && big[i])
	{
		if (big[i] == little[0] && i + j <= len)
		{
			if (ft_strncmp(big + i, little, j) == 0)
				return ((char*)(big + i));
		}
		i++;
	}
	return (NULL);
}
