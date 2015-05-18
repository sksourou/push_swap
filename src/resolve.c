/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 18:40:45 by sksourou          #+#    #+#             */
/*   Updated: 2015/05/15 16:12:35 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	found_swap(int pos, t_ps *pile)
{
	if (pile->a[pos] == pile->ac - 1)
		return (3);
	else if ((pile->ac / 2) > pile->a[pos])
		return (1);
	else if ((pile->ac / 2) < pile->a[pos])
		return (2);
	return (0);
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
	//int mode;
	int ct;
	int ac;

	ac = pile->ac;
	ct = 0;
	pos = 0;
	while (ct <= ac - 1)
	 {
		pos = found_min(pile);
		if (pos == -2)
		{
			ft_putendl("non c est pas bon");
			exit(0);
		}
			swap_ra(pile, pos);
			push_b(pile);
		ct++;
	}
	push_a(pile);

	//i = 1;
	//while(i <= 2)
	// {
	// 	ft_putnbr(pile->b[i]);
	// 	ft_putchar('\n');
	// 	i++;
	// }
	//j = found_swap(pos, pile);
	//swap_a(pile);
}
