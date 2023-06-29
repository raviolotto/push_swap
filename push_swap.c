/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:10:51 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/29 05:19:38 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_av(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] != ' ')
			return (0);
	}
	return (-1);
}

int	main(int ac, char **av)
{
	t_listx	*stack_a;
	t_listx	*stack_b;
	t_memo	mem;
	t_inst	inst;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		return (0);
	if (ft_strlen(av[1]) == 0)
	{
		write(2, "Error\n", 6);
		return (EXIT_FAILURE);
	}
	inst_init(&inst);
	if (list_init(ac, av, &stack_a) == -1)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	if (okorko2(&stack_a) == 0)
		return (free_all(&stack_a));
	init_b(&stack_a, &stack_b, &mem);
	algoritm(&stack_a, &stack_b, &inst, &mem);
	return (free_all(&stack_a));
}
