/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 18:40:45 by sksourou          #+#    #+#             */
/*   Updated: 2015/05/28 14:55:01 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		found_swap(int pos, t_ps *pile)
{
	(void)pos;
	if (pile->ac == 3)
		return (1);
	else if (backward_difone(pile) == 1)
		return (2);
	else if (backward_difbeg(pile) == 1)
		return (3);
	else if (((pile->ac / 2) - 2) < pile->a[pos])
		return (-1);
	else if (pile->ac == 2)
		return (4);
	return (0);
}

int		found_max(t_ps *pile)
{
	int ct;
	int pos;

	ct = pile->topa + 1;
	pos = pile->topa;
	while (ct < pile->ac)
	{
		if (pile->a[pos] < pile->a[ct])
			pos = ct;
		ct++;
	}
	return (pos);
}

int		found_min(t_ps *pile)
{
	int ct;
	int pos;

	ct = pile->topa + 1;
	pos = pile->topa;
	while (ct < pile->ac)
	{
		if (pile->a[pos] > pile->a[ct])
			pos = ct;
		ct++;
	}
	return (pos);
}

void	resolve(t_ps *pile)
{
	int mode;

	mode = found_swap(found_min(pile), pile);
	if (mode == 1)
		fast_swap(pile);
	if (mode == 2)
	{
		if (pile->a[pile->ac - 2] > pile->a[pile->ac - 1] \
			&& pile->a[pile->ac - 1] > pile->a[pile->topa])
			swap_sa(pile);
		else if (pile->a[pile->ac - 1] < pile->a[pile->ac - 2])
			swap_ra(pile, (found_min(pile) - 1));
	}
	if (mode == 3)
		fast_swap2(pile);
	if (mode == 4)
		swap_sa(pile);
	if (mode == 1 || mode == 2 || mode == 4)
		aff_end(pile);
	if (mode > 0)
		return ;
	verratti(pile);
}

void	verratti(t_ps *pile)
{
	int ct;
	int ac;
	int mode;

	ct = 0;
	ac = pile->ac;
	while (ct < ac)
	{
		if (((pile->ac / 2) - 1) > found_max(pile))
			mode = -1;
		else
			mode = 0;
		if (pile->a[pile->ac - 1] < pile->a[pile->ac - 2] && pile->ac > 1)
			swap_sa(pile);
		if (mode == 0)
			swap_ra(pile, found_max(pile));
		else if (mode == -1)
			swap_rra(pile, found_max(pile) + 1);
		push_b(pile), ct++;
	}
	push_a(pile);
}
