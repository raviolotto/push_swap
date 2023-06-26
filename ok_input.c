/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:13:59 by jcardina          #+#    #+#             */
/*   Updated: 2023/06/26 20:39:23 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ok_input(char **matrix, int i)
{
	int	j;
	int	tmp;

	tmp = i;
	if (matrix[++i] == NULL)
		return (-1);
	i = tmp;
	while (matrix[i])
	{
		j = 0;
		while (matrix[i][j])
		{
			if ((matrix[i][j] < 58 && matrix[i][j] > 47)
				|| (matrix[i][j] == 45))
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
	int	j;

	while (matrix[i])
	{
		j = i + 1;
		while (matrix[j])
		{
			if (atoi(matrix[i]) != atoi(matrix[j]))
				j++;
			else
				return (-1);
		}
		i++;
	}
	return (1);
}

int	min_max(char **matrix, int i)
{
	long	value;

	while (matrix[i])
	{
		value = ft_atoi(matrix[i]);
		if (value > 2147483647 || value < -2147483648)
			return (-1);
		i++;
	}
	return (1);
}
