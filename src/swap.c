/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 19:58:48 by sksourou          #+#    #+#             */
/*   Updated: 2015/05/15 16:12:34 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*copy(int *cpy, t_ps *pile)
{
	int i;

	i = 0;
	cpy = (int *)malloc(sizeof(int*) * pile->ac + 1);
	while (i < pile->ac)
	{
		cpy[i] = pile->a[i];
		i++;
	}
	return (cpy);
}

void	swap_ra(t_ps *pile, int pos)
{
	int *cpy = NULL;
	int i = 0;
	int j = 0;  /*compteur de la copie*/

	cpy = copy(cpy, pile);
	i = (pile->ac - pos) - 1;
	while (j < pile->ac)
	{
		if ((j + i) >= pile->ac)
		{
			pile->a[(j + i) - pile->ac] = cpy[j];
			j++;
		}
		else
		{
			pile->a[j + i] = cpy[j];
			j++;
		}
	}
	j = 0;
	while (j < i)
		ft_putstr("ra "), j++;;
}
