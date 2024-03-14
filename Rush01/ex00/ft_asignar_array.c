/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asignar_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:43:28 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/17 18:37:54 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*array_up(int *num)
{
	int i;
	int j;
	int *up;
	int	val;

	i = -1;
	j = 0;
	up = (int *) malloc (4);
	while (++i < 4)
	{
		up[i] = num[j];
		j++;
	}
	return (up);
}

int	*array_down(int *num)
{
	int i;
	int j;
	int *down;

	i = -1;
	j = 4;
	down = (int *) malloc (4);
	while (++i < 4)
	{
		down[i] = num[j];
		j++;
	}
	return (down);
}

int	*array_left(int *num)
{
	int i;
	int j;
	int *left;

	i = -1;
	j = 8;
	left = (int *) malloc (4);
	while (++i < 4)
	{
		left[i] = num[j];
		j++;
	}
	return (left);
}

int	*array_right(int *num)
{
	int i;
	int j;
	int *right;

	i = -1;
	j = 12;
	right = (int *) malloc (4);
	while (++i < 4)
	{
		right[i] = num[j];
		j++;
	}
	return (right);
}

