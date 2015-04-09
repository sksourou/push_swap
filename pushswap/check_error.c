/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 20:41:43 by sksourou          #+#    #+#             */
/*   Updated: 2015/04/07 20:41:45 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(int ac, int *tab, char **av)
{
	int			e;
	int			i;
	char	*tmp;

	e = 0;
	while (e < ac || e != 1)
	{
		//if (((tmp = ft_atoi(av[e + 1]))) > INT_MAX || tmp < INT_MIN)
		//	ft_putstr("Error"), exit(1);
		//else
			tab[e] = ft_atoi(av[(ac - e)]);
		e++;
	}
	e = 0;
	while (e < ac)
	{
		i = e + 1;
		while (i < ac)
		{
			if (tab[e] == tab[i])
				ft_putendl("Error"), exit(1);
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
				ft_putstr("BAD ARG");
				return (0);
			}
		}
		i++;
	}
	return 1;
}
