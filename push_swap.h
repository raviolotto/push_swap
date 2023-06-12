/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:29:13 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/12 19:07:59 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"

typedef struct s_listx
{
	int				index;
	int				content;
	struct s_listx	*next;
}	t_listx;

typedef struct s_memo
{
	int	mid;
	int	min;
	int	max;
}	t_memo;

//le funzione prese da libft
t_listx	*ps_lstnew(int content);
int		ps_lstsize(t_listx *lst);
void	ps_lstadd_front(t_listx **lst, t_listx *new);
void	ps_lstadd_back(t_listx **lst, t_listx *new);
t_listx	*ps_lstlast(t_listx *lst);
//inizializzare la lista
void	list_init(int ac, char **av, t_listx **stack_a);
void	fill_stack(char **av, t_listx **stack_a, int row_nb, int i);
void	index_init(t_listx **stack_a);
//pushare in b
void	ft_mid(t_listx **stack_a, t_memo *mem);
void	ft_min_max(t_listx **stack_a, t_memo *mem);
void	init_b(t_listx **stack_a, t_listx **stack_b, t_memo *mem);
//stampa valori di controllo (non servono per la versione finale)
void	ft_printindex(t_listx **stack_a);
void	ft_printlst(t_listx **stack_a);
//mosse
void	ra(t_listx **stack_a);
void	rb(t_listx **stack_b);
void	rra(t_listx **stack_a);
void	rrb(t_listx **stack_b);
void	rrr(t_listx **stack_a, t_listx **stack_b);
void	pb(t_listx **stack_a, t_listx **stack_b);
void	pa(t_listx **stack_a, t_listx **stack_b);
void	sa(t_listx **stack_a);
void	sb(t_listx **stack_b);
void	ss(t_listx **stack_b, t_listx **stack_a);

#endif
