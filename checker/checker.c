/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:31:46 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/26 17:57:15 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
	t_listx	*sa;
	t_listx	*sb;

	if (ac < 2)
		return (0);
	if (list_init(ac, av, &sa) == -1)
	{
		write(2, "Error\n", 6);
		return(0);
	}
	while(1)
	{
		ft_printf(")
		pause();
	}


}
