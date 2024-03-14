/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_to_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:04:36 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/27 16:41:59 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "bsq.h"
#include <stdio.h>

int	change_to_nb(char **map, int i, int j, int a, int b)
{
	int	c;
	int	d;

	c = i;
	d = j;
	a++;
	b++;
	while (c <= a && a <= X)
	{
		d  = j;
		while (d <= b && b <= Y)
		{
			if (map[c][d] != '.')
				return (a - i);
			d++;
		}
		c++;
	}
	return (change_to_nb(map, i, j, a, b));
}

void	read_to_nb(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (i < X)
	{
		j = 0;
		while (j <= Y)
		{
			if (map[i][j] == '.')
				map[i][j] = change_to_nb(map, i, j, i, j) + '0';
			j++;
		}
		i++;
	}
}
*/
#include "bsq.h"
#include <stdio.h>

int	is_valid_square(char **map, int i, int j, int size)
{
	int x;
	int y;

	x = i;
	while (x < i + size)
	{
		y = j;
		while (y < j + size)
		{
			if (map[x][y] != '.')
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

void	fill_square(char **map, int i, int j, int size)
{
	int x;
	int y;

	x = i;
	while (x < i + size)
	{
		y = j;
		while (y < j + size)
		{
			map[x][y] = 'x';
			y++;
		}
		x++;
	}
}

int	change_to_nb(char **map, int i, int j, int x, int y, int size)
{
	int c;
	int d;

	c = i;
	d = j;
	while (c <= x)
	{
		d = j;
		while (d <= y)
		{
			if (map[c][d] != '.' || !is_valid_square(map, c, d, size))
				return (c - i);
			d++;
		}
		c++;
	}
	return (change_to_nb(map, i, j, x, y, size + 1));
}

void	find_largest_square(char **map, int x, int y)
{
	int i;
	int j;
	int max_size;
	int max_i;
	int max_j;

	i = 0;
	max_size = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			if (map[i][j] == '.' && is_valid_square(map, i, j, max_size + 1))
			{
				int current_size = change_to_nb(map, i, j, i, j, 1);
				if (current_size > max_size)
				{
					max_size = current_size;
					max_i = i;
					max_j = j;
				}
			}
			j++;
		}
		i++;
	}
	fill_square(map, max_i, max_j, max_size);
}

void	read_to_nb(char **map, int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			if (map[i][j] == '.')
				find_largest_square(map, x, y);
			j++;
		}
		i++;
	}
}
