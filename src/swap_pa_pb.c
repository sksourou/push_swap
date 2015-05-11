/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_pa_pb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/12 05:02:36 by sksourou          #+#    #+#             */
/*   Updated: 2015/05/07 18:42:53 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_pa(t_ps *pile)
{
	if (pile->b[0])
		pile->a[pile->ac] = pile->b[0];
}

void	swap_pb(t_ps *pile, int pos)
{
	if (pile->a[pos])
		pile->b[0] = pile->a[pos];
}
