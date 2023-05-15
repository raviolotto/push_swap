/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amema <amema@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:29:13 by jcardina          #+#    #+#             */
/*   Updated: 2023/05/15 18:14:11 by amema            ###   ########.fr       */
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

//le funzione prese da libft
p_list	*ps_lstnew(int content);
int		ps_lstsize(p_list *lst);
void	ps_lstadd_front(p_list **lst, p_list *new);
void	ps_lstadd_back(p_list **lst, p_list *new);
p_list	*ps_lstlast(p_list *lst);
//inizializzare la lista
void	list_init(int ac, char **av, p_list **stack_a);
void	fill_stack(char **av, p_list **stack_a, int row_nb, int i);
void	index_init(p_list **stack_a);
//stampa valori di controllo (non servono per la versione finale)
void	ft_printindex(p_list **stack_a);
void	ft_printlst(p_list **stack_a);
//mosse
void	ra(p_list **stack_a);
void	rb(p_list **stack_b);
void	rra(p_list **stack_a);
void	rrb(p_list **stack_b);
void	rrr(p_list **stack_a, p_list **stack_b);
void	pb(p_list **stack_a, p_list **stack_b);
void	pa(p_list **stack_a, p_list **stack_b);
void    sa(p_list **stack_a);
void    sb(p_list **stack_b);
void    ss(p_list **stack_b, p_list **stack_a);

#endif