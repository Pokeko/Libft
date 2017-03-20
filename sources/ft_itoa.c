/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdardakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:38:09 by mdardakh          #+#    #+#             */
/*   Updated: 2016/11/22 14:49:03 by mdardakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_count(int nb, int *i)
{
	if (nb == -2147483648)
	{
		*i = 12;
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		*i += 1;
	}
	if (nb < 10)
	{
		*i += 1;
		return ;
	}
	ft_count(nb / 10, i);
	*i += 1;
}

static void	ft_put(int nb, char *ptr, int *verif)
{
	if (nb == -2147483648)
		return ;
	if (nb < 0)
	{
		nb = nb * -1;
		*verif = 1;
	}
	if (nb < 10)
	{
		*ptr = nb + 48;
		return ;
	}
	ft_put(nb / 10, ptr + 1, verif);
	*ptr = (nb % 10) + 48;
}

static void	ft_reverse(char *ptr)
{
	char	*tmp;
	int		i;
	int		j;

	j = 0;
	i = ft_strlen((char const*)ptr);
	if (!(tmp = ft_strnew(i)))
		return ;
	i--;
	while (ptr[i])
		tmp[j++] = ptr[i--];
	i = 0;
	while (tmp[i])
	{
		ptr[i] = tmp[i];
		i++;
	}
	free(tmp);
}

static void	min(char *ptr)
{
	ptr[0] = '-';
	ptr[1] = '2';
	ptr[2] = '1';
	ptr[3] = '4';
	ptr[4] = '7';
	ptr[5] = '4';
	ptr[6] = '8';
	ptr[7] = '3';
	ptr[8] = '6';
	ptr[9] = '4';
	ptr[10] = '8';
	ptr[11] = '\0';
}

char		*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*ptr;
	int		test;

	i = 0;
	j = 0;
	test = 0;
	ft_count(n, &i);
	if (!(ptr = ft_strnew(i)))
		return (NULL);
	if (n == -2147483648)
	{
		min(ptr);
		return (ptr);
	}
	ft_put(n, ptr, &test);
	if (test)
		ptr[i - 1] = '-';
	ft_reverse(ptr);
	return (ptr);
}
