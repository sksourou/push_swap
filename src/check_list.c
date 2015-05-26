/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/19 17:24:13 by sksourou          #+#    #+#             */
/*   Updated: 2015/05/26 16:28:51 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "colors.h"

int 	backward_difone(t_ps *pile)
{
	int i;

	i = 0;
	if (pile->a[pile->ac - 1] > pile->a[pile->ac - 2])
		return 0;
	while (i < pile->ac - 2)
	{
		if (pile->a[i] < pile->a[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}

int 	backward_difbeg(t_ps *pile)
{
	int i;

	i = 1;
	if (pile->a[0] < pile->a[1])
		return 0;
	while (i < pile->ac - 1)
	{
		if (pile->a[i] < pile->a[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}

int		verif_list(t_ps *pile)
{
	int i;

	i = 0;
	while (i < pile->ac - 1)
	{
		if (pile->a[i] < pile->a[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}

int		*copy(int *cpy, t_ps *pile)
{
	int i;

	i = 0;
	cpy = (int *)malloc(sizeof(int*) * pile->ac + 1);
	while (i < pile->ac)
	{
		cpy[i] = pile->a[i];
		i++;
	}
	return (cpy);
}
