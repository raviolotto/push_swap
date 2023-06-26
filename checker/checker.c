/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:31:46 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/26 20:06:02 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	do_moves(t_listx **stack_a, t_listx **stack_b, char *str)
{
	while(str != NULL)
	{
		if (ft_strcmp(str, "sa\n") == 1)
			sa(stack_a, 0);
		else if (ft_strcmp(str, "sb\n") == 1)
			sb(stack_a, 0);
		else if (ft_strcmp(str, "ss\n") == 1)
			ss(stack_a, stack_b, 0);
		else if (ft_strcmp(str, "pa\n") == 1)
			pa(stack_a, stack_b, 0);
		else if (ft_strcmp(str, "pb\n") == 1)
			pb(stack_a, stack_b, 0);
		else if (ft_strcmp(str, "ra\n") == 1)
			ra(stack_a, 0);
		else if (ft_strcmp(str, "rb\n") == 1)
			rb(stack_b, 0);
		else if (ft_strcmp(str, "rr\n") == 1)
			rr(stack_a, stack_b, 0);
		else if (ft_strcmp(str, "rra\n") == 1)
			rra(stack_a, 0);
		else if (ft_strcmp(str, "rrb\n") == 1)
			rrb(stack_b, 0);
		else if (ft_strcmp(str, "rrr\n") == 1)
			rrr(stack_a, stack_b, 0);

	}
}

int	main(int ac, char **av)
{
	t_listx	*stack_a;
	t_listx	*stack_b;

	if (ac < 2)
		return (0);
	if (list_init(ac, av, &sa) == -1)
	{
		write(2, "Error\n", 6);
		return(EXIT_FAILURE);
	}
	do_moves(&stack_a, &stack_b, get_next_line(0));

}
