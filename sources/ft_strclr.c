/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdardakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:03:27 by mdardakh          #+#    #+#             */
/*   Updated: 2016/11/17 15:04:10 by mdardakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strclr(char *s)
{
	size_t	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			s[i] = '\0';
			i++;
		}
	}
}
