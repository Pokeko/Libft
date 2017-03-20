/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdardakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:05:04 by mdardakh          #+#    #+#             */
/*   Updated: 2016/11/15 15:17:17 by mdardakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int			count_words(char const *s, char c)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			if (s[i] != c)
				count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static	char		*ft_take_word(char const *s, char c, unsigned int *i)
{
	size_t			k;
	unsigned int	l;
	char			*ptr;

	k = 0;
	while (s[*i] == c)
		*i += 1;
	l = *i;
	while (s[*i] != c && s[*i])
	{
		k++;
		*i += 1;
	}
	ptr = ft_strsub(s, l, k);
	return (ptr);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**ptr;
	unsigned int	i;
	int				k;

	k = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(ptr = (char**)malloc(sizeof(char*) * count_words(s, c) + 1)))
		return (NULL);
	while (k < count_words(s, c))
	{
		ptr[k] = ft_take_word(s, c, &i);
		k++;
	}
	ptr[k] = NULL;
	return (ptr);
}
