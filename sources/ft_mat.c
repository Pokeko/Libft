/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdardakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 16:40:32 by mdardakh          #+#    #+#             */
/*   Updated: 2016/11/17 17:10:47 by mdardakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_mat(int tab[][4], int ln, int col, int mult)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < ln)
	{
		while (j < col)
		{
			tab[i][j] *= mult;
			ft_putnbr(tab[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 0;
	}
}
