/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/12 03:20:05 by sksourou          #+#    #+#             */
/*   Updated: 2015/04/12 03:20:07 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_ps *pile)
{
	int cpy;
	int i = 0;

	if (pile->a[i] < pile->a[i + 1])
	{
		cpy = pile->a[i + 1];
		pile->a[i + 1] = pile->a[i];
		pile->a[i] = cpy;
	}
}

void	swap_b(t_ps *pile)
{
	int cpy;
	int i = 0;

	if (pile->b[i] < pile->b[i + 1])
	{
		cpy = pile->b[i + 1];
		pile->b[i + 1] = pile->b[i];
		pile->b[i] = cpy;
	}
}
