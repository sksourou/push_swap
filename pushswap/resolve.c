/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 18:40:45 by sksourou          #+#    #+#             */
/*   Updated: 2015/04/10 18:40:46 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*int	found_swap(int pos, t_ps *pile)
{
	if (pile->a[pos] == pile->ac - 1)
		return (3);
	else if ((pile->ac / 2) > pile->a[pos])
		return (1);
	else if ((pile->ac / 2) < pile->a[pos])
		return (2);
	return (0);
}*/

int found_max(t_ps *pile)
{
	int pos;
	int nbr;
	int ret;

	pos = 1;
	nbr = pile->a[0];
	while (pos < pile->ac)
	{
		if (nbr < pile->a[pos])
		{
			nbr = pile->a[pos++];
			ret = pos;
		}
		else if (pos < pile->ac)
			pos++;
	}
	return (ret);
}

void	resolve(t_ps *pile)
{
	int pos;

	pos = found_max(pile);
	//j = found_swap(pos, pile);
	//swap_ra(pile, pos);
	swap_a(pile);
}
