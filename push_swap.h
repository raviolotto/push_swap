/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:29:13 by jcardina          #+#    #+#             */
/*   Updated: 2023/05/14 19:37:10 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"

typedef struct n_list
{
	int				index;
	int				content;
	struct	n_list	*next;
}	p_list;

void	ft_printlst(p_list **stack_a);
p_list	*ps_lstnew(int content);
int	ps_lstsize(p_list *lst);
void	ps_lstadd_front(p_list **lst, p_list *new);
void	ps_lstadd_back(p_list **lst, p_list *new);
p_list	*ps_lstlast(p_list *lst);
void	list_init(int ac, char **av, p_list **stack_a);
void	fill_stack(char **av, p_list **stack_a, int row_nb, int i);
void ra(p_list **stack_a);

#endif

