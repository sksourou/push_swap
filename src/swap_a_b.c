/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/12 03:20:05 by sksourou          #+#    #+#             */
/*   Updated: 2015/05/15 16:12:35 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	printf("pile->a[%d]\n", pile->a[pile->ac - 1]);
	if (pile->a[pile->ac])
		pile->b[0] = pile->a[pile->ac - 1];
		ft_putstr("pb ");
	if (pile->topa != pile->ac)
		pile->ac -= 1;
}
