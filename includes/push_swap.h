/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agigi <agigi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 00:33:44 by agigi             #+#    #+#             */
/*   Updated: 2021/07/03 01:00:29 by agigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

typedef struct s_cell
{
	int	value;
	int	order;
	int	group;
}	t_cell;

typedef struct s_group
{
	int	min;
	int	med;
	int	max;
	int	index;
}	t_group;

typedef struct s_data
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_cell	cell;
	t_group	group;
	int		next;
}	t_data;

int		ft_check_input(int argc, char **argv);
void	ft_add_order(t_data *data);
void	ft_big_sort_stack(t_data *data);
void	ft_small_sort_stack(t_data *data);
void	ft_push_a(t_data *data, int flag);
void	ft_push_b(t_data *data, int flag);
void	ft_swap_a(t_data *data, int flag);
void	ft_swap_b(t_data *data, int flag);
void	ft_swap_ab(t_data *data, int flag);
void	ft_rotate_a(t_data *data, int flag);
void	ft_rotate_b(t_data *data, int flag);
void	ft_rotate_ab(t_data *data, int flag);
void	ft_rev_rotate_a(t_data *data, int flag);
void	ft_rev_rotate_b(t_data *data, int flag);
void	ft_rev_rotate_ab(t_data *data, int flag);

#endif
