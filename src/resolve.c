/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 18:40:45 by sksourou          #+#    #+#             */
/*   Updated: 2015/05/19 18:21:35 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	found_swap(int pos, t_ps *pile)
{
	(void)pos;
	if (pile->ac < 4)
		return (1);
	else if (backward_difone(pile) == 1)
		return (2);
	else if (backward_difbeg(pile) == 1)
		return (3);
	//else if ((pile->ac / 2) < pile->a[pos])
	//	return (4);*/
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
	int mode;
	int ac;

	ac = pile->ac;
	mode = found_swap(found_min(pile), pile);
	ct = 0;
	pos = 0;
	if (mode == 1)
		fast_swap(pile);
	if (mode == 2)
		swap_sa(pile);
	if (mode == 3)
		fast_swap2(pile);
	if (mode != 0)
		return ;
	while (ct < ac)
	{
		if (pile->a[pile->ac - 1] > pile->a[pile->ac - 2] && pile->ac > 1)
			swap_sa(pile);
		pos = found_min(pile), swap_ra(pile, found_min(pile));
		push_b(pile), ct++;
	}
	/*int i = 0;
	while (i < pile->ac)
	{
		ft_putendl("");
		ft_putnbr(pile->b[i]);
		ft_putendl("");
		i++;
	}*/
	push_a(pile);
}
