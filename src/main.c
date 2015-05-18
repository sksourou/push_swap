/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 01:28:55 by sksourou          #+#    #+#             */
/*   Updated: 2015/05/15 11:43:27 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pushswap(int ac, char **av)
{
	int a[ac - 1];
	int b[ac - 1];
	t_ps pile;

	error(ac, a, av);
	pile.a = a;
	pile.b = b;
	pile.ac = ac - 1;
	pile.acb = ac - 1;
	pile.topa = 0;
	pile.topb = 0;
	resolve(&pile);
}

int	main(int ac, char **av)
{
	if (ac > 2)
	{
		if (check_arg(ac, av) == 0)
			return 0;
		ft_pushswap(ac, av);
	}
	return (0);
}
