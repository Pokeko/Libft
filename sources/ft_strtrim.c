/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdardakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:05:23 by mdardakh          #+#    #+#             */
/*   Updated: 2016/11/22 16:16:56 by mdardakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ifonlyblank(char const *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		{
			i++;
			if (s[i] == '\0')
				return (1);
		}
		return (0);
	}
	return (0);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	char	*ptr;
	int		start;
	int		end;

	end = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	start = i;
	while (s[i])
		i++;
	i--;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i--;
	end = i + 1;
	if (ft_ifonlyblank(s))
		ptr = ft_strsub(s, 0, end);
	else
		ptr = ft_strsub(s, start, end - start);
	return (ptr);
}
