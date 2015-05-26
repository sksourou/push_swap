/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 17:23:44 by sksourou          #+#    #+#             */
/*   Updated: 2015/05/26 16:22:14 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_ra(t_ps *pile, int pos)
{
	int *cpy = NULL;
	int i = 0;
	int j = 0;  /*compteur de la copie*/

	cpy = copy(cpy, pile);
	i = ((pile->ac -1) - pos);
	while (j < pile->ac && i != 0)
	{
		if ((j + i) >= pile->ac)
		{
			pile->a[(j + i) - pile->ac] = cpy[j];
			j++;
		}
		else
		{
			pile->a[j + i] = cpy[j];
			j++;
		}
	}
	j = 0;
	while (j < i)
	{
		ft_putstr(RED);
		ft_putstr("ra "), j++;
		ft_putstr(END);
	}
}

void	swap_rra(t_ps *pile, int pos)
{
	int *cpy = NULL;
	int i = 0;
	int j = 0;  /*compteur de la copie*/

	cpy = copy(cpy, pile);
	i = pos;
	while (j < pile->ac && i != 0)
	{
		if ((j - i) >= 0)
		{
			pile->a[(j - i) - pile->ac] = cpy[j];
			j++;
		}
		else
		{
			pile->a[j - i] = cpy[j];
			j++;
		}
	}
	j = 0;
	while (j < i)
	{
		ft_putstr(BLUE);
		ft_putstr("rra "), j++;
		ft_putstr(END);
	}
}



