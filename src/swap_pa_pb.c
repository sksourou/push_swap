/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_pa_pb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/12 05:02:36 by sksourou          #+#    #+#             */
/*   Updated: 2015/04/12 05:02:37 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_pa(t_ps *pile)
{

	if (pile->b[0])
		pile->a[pile->ac] = pile->b[0];
}

void	swap_pb(t_ps *pile)
{
	if (pile->a[0])
		pile->b[pile->ac] = pile->a[0];
}
