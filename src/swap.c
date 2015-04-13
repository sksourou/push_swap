/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 19:58:48 by sksourou          #+#    #+#             */
/*   Updated: 2015/04/10 19:58:49 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*copy(int *cpy, t_ps *pile)
{
	int i;

	i = 0;
	cpy = (int *)malloc(sizeof(int*) * pile->ac + 2);
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
	int j;

	cpy = copy(cpy, pile);
	j = 0;  /*compteur de la copie*/
	while(j < pile->ac)
	{
		if ((i = (pile->ac) - pos) == 0)
			break ;
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
		ft_putstr("ra "), j++;
}
