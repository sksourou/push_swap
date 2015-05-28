/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 20:41:43 by sksourou          #+#    #+#             */
/*   Updated: 2015/05/28 14:59:37 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(int ac, int *tab, char **av)
{
	int			e;
	int			i;
	long int	tmp;

	e = 0;
	while (e < ac - 1)
	{
		if (((tmp = ft_atoi(av[e + 1]))) > 3000 || tmp < -3000)
			ft_putendl("int Error"), exit(1);
		else
			tab[e] = ft_atoi(av[e + 1]);
		e++;
	}
	e = 0;
	while (e < ac)
	{
		i = e + 1;
		while (i < ac - 1)
		{
			if (tab[e] == tab[i])
				ft_putendl("doublon"), exit(1);
			i++;
		}
		e++;
	}
}

int		check_arg(int ac, char **av)
{
	int i;
	int e;

	i = 1;
	while (ac > i)
	{
		e = 0;
		while (av[i][e] != '\0')
		{
			if (ft_isdigit(av[i][e]) || (e == 0 && av[i][e] == '-' && \
				ft_isdigit(av[i][e + 1])))
				e++;
			else
			{
				ft_putendl("BAD ARG");
				return (0);
			}
		}
		i++;
	}
	return (1);
}
