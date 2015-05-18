/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 18:40:45 by sksourou          #+#    #+#             */
/*   Updated: 2015/05/18 16:21:17 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	found_swap(int pos, t_ps *pile)
{
	(void)pos;
	if (pile->ac < 4)
		return (1);
	//else if (backward(pile) == 1)
	//	return (2);
	else if ((pile->ac / 2) > pile->a[pos])
		return (3);/*
	else if ((pile->ac / 2) < pile->a[pos])
		return (4);*/
	return (0);
}

int found_max(t_ps *pile)
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

int found_min(t_ps *pile)
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
	int pos;
	int ct;
	int ac;
	int mode;

	mode = found_swap(found_min(pile), pile);
	ac = pile->ac;
	ct = 0;
	pos = 0;
	if (mode == 1)
	{
		fast_swap(pile);
		return ;
	}
	while (ct <= ac - 1 )
	{
		pos = found_min(pile) , swap_ra(pile, pos);
		push_b(pile), ct++;
	}
	push_a(pile);
}
