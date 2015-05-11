/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 01:30:51 by sksourou          #+#    #+#             */
/*   Updated: 2015/05/11 21:20:49 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# define INT_MAX 3000
# define INT_MIN -4500

typedef	struct	s_ps
{
	int			*a;
	int			*b;
	int 		ac;
	int 		topa;
	int 		topb;
}				t_ps;

void	*stock(char **av, int ac);
void	*creat_list(char **av, char *b, int ac);
int		check_arg(int ac, char **av);
void	error(int ac, int *tab, char **av);
void	resolve(t_ps *pile);
int 	found_max(t_ps *pile);
int		found_swap(int i, t_ps *pile);
void	swap_ra(t_ps *pile, int pos);
int		*copy(int *cpy, t_ps *pile);
void	swap_a(t_ps *pile);
void	swap_b(t_ps *pile, int pos);
void	swap_pb(t_ps *pile, int pos);
void	swap_pa(t_ps *pile);


#endif
