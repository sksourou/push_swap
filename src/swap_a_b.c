/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/12 03:20:05 by sksourou          #+#    #+#             */
/*   Updated: 2015/05/18 16:21:15 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_sa(t_ps *pile)
{
	int i;
	int cpy;

	i = 0;
	cpy = pile->a[pile->ac - 1];
	if (pile->a[pile->ac - 1])
	{
		pile->a[pile->ac - 1] = pile->a[pile->ac - 2];
		pile->a[pile->ac - 2] = cpy;
	}
	ft_putstr("sa ");
}

void	push_b(t_ps *pile)
{
	int i = 0;
	int j = 0;

	while (pile->b[i] != pile->b[pile->ac])
	{
		j = pile->b[i];
		pile->b[i + 1] = j;
		i++;
	}
	if (pile->a[pile->ac])
		pile->b[0] = pile->a[pile->ac - 1];
		ft_putstr("pb ");
	pile->ac -= 1;
}

void	push_a(t_ps *pile)
{
	int i = pile->acb - 1;
	int j = 0;

	while (j < pile->acb)
	{
		pile->a[j] = pile->b[i];
		ft_putendl("");
		i--;
		j++;
		ft_putstr("pa ");
	}
}

void fast_swap(t_ps *pile)
{
	if (verif_list(pile) == 1)
		return ;
	if (pile->a[0] > pile->a[1] && pile->a[1] > pile->a[2])
	{
		swap_sa(pile);
		swap_ra(pile, 0);
	}
	else if (pile->a[0] > pile->a[1] && pile->a[1] < pile->a[2])
		swap_ra(pile, found_max(pile));
	else if (pile->a[0] < pile->a[1] && pile->a[1] > pile->a[0])
		swap_ra(pile, found_max(pile));
	else if (pile->a[0] > pile->a[1] && pile->a[1] < pile->a[2])
		swap_rra(pile, pos), swap_sa(pile);
}
