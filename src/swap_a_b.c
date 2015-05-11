/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/12 03:20:05 by sksourou          #+#    #+#             */
/*   Updated: 2015/05/11 21:20:52 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_ps *pile)
{
	int cpy;
	int i = 0;

	if (pile->a[i] < pile->a[i + 1])
	{
		cpy = pile->a[i + 1];
		pile->a[i + 1] = pile->a[i];
		pile->a[i] = cpy;
	}
}

void	swap_b(t_ps *pile, int pos)
{
	int i = 0;
	int j = 0;

//	printf(" ac =%d\n", pile->ac);
	while (pile->b[i] != pile->b[pile->ac])
	{
		j = pile->b[i];
		pile->b[i + 1] = j;
		i++;
	}
	if (pile->a[pos])
		pile->b[0] = pile->a[pile->topa];
	pile->ac -= 1;
	ft_putendl("pb");
}
