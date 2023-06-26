/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:31:46 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/26 19:49:36 by jcardina         ###   ########.fr       */
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
		return(EXIT_FAILURE);
	}


}