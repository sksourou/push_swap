/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/12 03:20:05 by sksourou          #+#    #+#             */
/*   Updated: 2015/05/19 18:21:34 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_sa(t_ps *pile)
{
	int cpy;

	cpy = pile->a[pile->ac - 1];
	if (pile->a[pile->ac - 1])
	{
		pile->a[pile->ac - 1] = pile->a[pile->ac - 2];
		pile->a[pile->ac - 2] = cpy;
	}
	ft_putstr(CYAN);
	ft_putstr("sa ");
	ft_putstr(END);
	pile->ct += 1;
}

void	push_b(t_ps *pile)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (pile->b[i] != pile->b[pile->ac])
	{
		j = pile->b[i];
		pile->b[i + 1] = j;
		i++;
	}
	pile->b[0] = pile->a[pile->ac - 1];
	ft_putstr(GREEN);
	ft_putstr("pb ");
	ft_putstr(END);
	pile->ac -= 1;
	pile->ct += 1;

}

void	push_a(t_ps *pile)
{
	int i;
	int j;

	i = pile->acb - 1;
	j = 0;
	while (j < pile->acb)
	{
		pile->a[j] = pile->b[i];
		i--;
		j++;
		ft_putstr("pa ");
	}
	pile->ct += 1;
}

