/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:31:46 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/26 21:53:09 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "a.h"

void	do_moves(t_listx **stack_a, t_listx **stack_b, char *str)
{
	while(str != NULL)
	{
		if (ft_strncmp(str, "sa\n", 3) == 1)
			sa(stack_a, 0);
		else if (ft_strncmp(str, "sb\n", 3) == 1)
			sb(stack_a, 0);
		else if (ft_strncmp(str, "ss\n", 3) == 1)
			ss(stack_a, stack_b, 0);
		else if (ft_strncmp(str, "pa\n", 3) == 1)
			pa(stack_a, stack_b, 0);
		else if (ft_strncmp(str, "pb\n", 3) == 1)
			pb(stack_a, stack_b, 0);
		else if (ft_strncmp(str, "ra\n", 3) == 1)
			ra(stack_a, 0);
		else if (ft_strncmp(str, "rb\n", 3) == 1)
			rb(stack_b, 0);
		else if (ft_strncmp(str, "rr\n", 3) == 1)
			rr(stack_a, stack_b, 0);
		else if (ft_strncmp(str, "rra\n", 4) == 1)
			rra(stack_a, 0);
		else if (ft_strncmp(str, "rrb\n", 4) == 1)
			rrb(stack_b, 0);
		else if (ft_strncmp(str, "rrr\n", 4) == 1)
			rrr(stack_a, stack_b, 0);
		else
			return;
		str = get_next_line(0);
	}
}

int	main(int ac, char **av)
{
	t_listx	*stack_a;
	t_listx	*stack_b;

	if (ac < 2)
		return (0);
	if (list_init(ac, av, &stack_a) == -1)
	{
		write(2, "Error\n", 6);
		return(EXIT_FAILURE);
	}
	do_moves(&stack_a, &stack_b, get_next_line(0));

}
