/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fast_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 17:23:28 by sksourou          #+#    #+#             */
/*   Updated: 2015/05/19 17:32:11 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fast_swap2(t_ps *pile)
{
	if (pile->a[0] > pile->a[pile->ac - 1])
		swap_rra(pile, 1);
	else if (pile->a[0] < pile->a[pile->ac-1] && pile->a[0] > pile->a[pile->ac-2])
		swap_rra(pile, 1), swap_sa(pile);
}

void	fast_swap(t_ps *pile)
{
	if (verif_list(pile) == 1)
		return ;
	if (pile->a[0] > pile->a[1] && pile->a[1] > pile->a[2])
		swap_sa(pile), swap_ra(pile, 0);
	else if (pile->a[0] > pile->a[1] && pile->a[1] < pile->a[2] && \
		pile->a[0] > pile->a[2])
		swap_ra(pile, found_max(pile));
	else if (pile->a[0] < pile->a[1] && pile->a[1] > pile->a[0] && \
	pile->a[0] > pile->a[2])
		swap_ra(pile, found_max(pile));
	else if (pile->a[0] < pile->a[1] && pile->a[1] > pile->a[0] && \
	pile->a[0] < pile->a[2])
		swap_sa(pile);
	else
		swap_sa(pile), swap_ra(pile, found_max(pile));
}
