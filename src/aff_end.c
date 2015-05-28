/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_end.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/28 10:38:15 by sksourou          #+#    #+#             */
/*   Updated: 2015/05/28 12:49:38 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	aff_end(t_ps *pile)
{
	int i;

	i = 0;
	ft_putendl("");
	ft_putendl("PILE A : ");
	while (i < pile->ac)
	{
		ft_putnbr(pile->a[i]);
		ft_putendl("");
		i++;
	}
	ft_putstr(RED);
	ft_putstr("Nombres d'operations [");
	ft_putstr(END);
	ft_putnbr(pile->ct);
	ft_putstr(RED);
	ft_putstr("]");
	ft_putstr(END);
	ft_putstr(BLUE);
	ft_putstr(" PILE IS OK\n");
	ft_putstr(END);
}
