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

int found_swap(t_ps *pile)
{
	int pos;
	int nbr;

	pos = 1;
	nbr = pile->a[0];
	while (pos < pile->ac)
	{
		if (nbr > pile->a[pos])
			nbr = pile->a[pos++];
		else if (pos < pile->ac)
			pos++;
		printf("yolo\n");
	}
	return (nbr);
}

void	resolve(t_ps *pile)
{
	int i;

	i = found_swap(pile);
	printf("%d\n", i);
}
