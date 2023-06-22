/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:10:51 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/22 17:29:54 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	fill_stack(char **av, t_listx **stack_a, int row_nb, int i)
{
	t_listx	*tmp;

	if (ok_input(av, i) == -1)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	while (i < row_nb)
	{
		tmp = ps_lstnew(ft_atoi(av[i]));
		ps_lstadd_back(stack_a, tmp);
		i++;
	}
	return (0);
}

int	list_init(int ac, char **av, t_listx **stack_a)
{
	char	**number_matrix;
	int		row_nb;

	row_nb = 0;
	if (ac == 2)
	{
		number_matrix = ft_split(av[1], ' ');
		while (number_matrix[row_nb] != NULL)
			row_nb++;
		if (fill_stack(number_matrix, stack_a, row_nb, 0) == -1)
		{
			free_matrix(number_matrix);
			return (-1);
		}
		free_matrix(number_matrix);
	}
	else
	{
		if (fill_stack(av, stack_a, ac, 1) == -1)
			return (-1);
	}
	return (0);
}

void	inst_init(t_inst *inst)
{
	inst ->a_index = 21474836;
	inst ->b_index = 21474836;
}

int	main(int ac, char **av)
{
	t_listx	*stack_a;
	t_listx	*stack_b;
	t_memo	mem;
	t_inst	inst;

	stack_a = NULL;
	stack_b = NULL;
	inst_init(&inst);
	if (ac < 2)
		return (0);
	if (list_init(ac, av, &stack_a) == -1)
		return (0);
	init_b(&stack_a, &stack_b, &mem);
	algoritm(&stack_a, &stack_b, &inst, &mem);
	free_all(&stack_a);
	return (0);
}
