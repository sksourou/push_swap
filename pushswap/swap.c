/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 19:58:48 by sksourou          #+#    #+#             */
/*   Updated: 2015/04/10 19:58:49 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_ra(t_ps *pile, int pos)
{
	int *cpy;
	int i;
	int j;
	int p = 0;
	//	t_ps *test;

	cpy = pile->a;
	j = 0;
	i = 1;  /* Nombre de decalage sur la droite */
	while(cpy[j] != cpy[(pile->ac)])
	{
		if ((j + i) > pile->ac)
			j = (j + i) - pile->ac;
		pile->a[j + i] = cpy[j];
		printf("%d\n", cpy[1]);
		j++;
	}
}
