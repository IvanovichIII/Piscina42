/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:08:28 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/26 20:08:49 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_map(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (i < X)
	{
		j = 0;
		while (j <= Y && map[i][j] != '\0')
		{
			write(1, &map[i][j], 1);
			j++;
		}
		i++;
	}
}

void	print_nb2(int count)
{
	ft_putnbr(count);
	write(1, " ", 1);
}

void	print_nb(char **map)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	count = 0;
	while (i < X)
	{
		j = 0;
		while (j <= Y && map[i][j] != '\0')
		{
			if (map[i][j] != 'o' && map[i][j] != '\n')
				count++;
			else if (count != 0)
			{
				print_nb2(count);
				count = 0;
				if (map[i][j] == '\n'
				|| (map[i][j] == 'o' && map[i][j + 1] == '\n'))
					write(1, "\n", 1);
			}
			j++;
		}
		i++;
	}
}
