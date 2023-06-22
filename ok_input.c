/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:13:59 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/22 16:31:33 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ok_input(char **matrix, int i)
{
	int j;
	int tmp;

	tmp =  i;
	if(matrix[++i] == NULL)
		return(-1);
	while(matrix[i])
	{
		j = 0;
		while(matrix[i][j])
		{
			if ((matrix[i][j] < 58 && matrix[i][j] > 47) || (matrix[i][j] == 45))
				j++;
			else
				return (-1);
		}
		i++;
	}
	if (double_n(matrix, tmp) == -1)
		return (-1);
	if (min_max(matrix, tmp) == -1)
		return (-1);
	return (1);
}

int	double_n(char **matrix, int i)
{
	int j;

	while(matrix[i])
	{
		j = i + 1;
		while(matrix[j])
		{
			if(atoi(matrix[i]) != atoi(matrix[j]))
				j++;
			else
				return (-1);
		}
		i ++;
	}
	return(1);
}

int	min_max(char **matrix, int i)
{
	while (matrix[i])
	{
		if (atoi(matrix[i]) > 2147483647 || atoi(matrix[i]) < -2147483648)
			return (-1);
		i++;
	}
	return(1);
}

// int	check_one(char **matrix, int i)
// {
// 	if(i == 1 && matrix[++i] == NULL)
// 		return (-1);
// 	else if (i == 0 && matrix[++i] == NULL)
// 		return (-1);
// 	return (1);
// }
