/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/06 01:30:51 by sksourou          #+#    #+#             */
/*   Updated: 2015/05/19 17:31:32 by sksourou         ###   ########.fr       */
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
	int 		acb;
	int 		topa;
	int 		topb;
}				t_ps;

void	*stock(char **av, int ac);
void	*creat_list(char **av, char *b, int ac);
int		check_arg(int ac, char **av);
void	error(int ac, int *tab, char **av);
void	resolve(t_ps *pile);
int 	found_max(t_ps *pile);
int 	found_min(t_ps *pile);
int		found_swap(int pos, t_ps *pile);
void	swap_ra(t_ps *pile, int pos);
int		*copy(int *cpy, t_ps *pile);
void	push_b(t_ps *pile);
void	push_a(t_ps *pile);
void 	fast_swap(t_ps *pile);
int		verif_list(t_ps *list);
void	swap_sa(t_ps *pile);
int 	found_max(t_ps *pile);
void	swap_sa(t_ps *pile);
int 	backward_difone(t_ps *pile);
int 	backward_difbeg(t_ps *pile);
void	fast_swap2(t_ps *pile);

#endif
