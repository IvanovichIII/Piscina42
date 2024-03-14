/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:25:23 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/26 18:47:08 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	track(char ***map, char *str)
{
	int	i;
	int	j;

	i = 0;
	(*map) = (char **)malloc((X + 1) * sizeof(char *));
	while (i < X)
	{
		(*map)[i] = (char *)malloc((Y + 1) * sizeof(char));
		i++;
	}
	i = 0;
	while (i < X)
	{
		j = 0;
		while (j <= Y && *str != '\0')
		{
			(*map)[i][j++] = *str;
			str++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		archivo;
	char	*str;
	char	**map;

	if (argc != 2)
	{
		write(1, "ERROR", 5);
		return (1);
	}
	archivo = open(argv[1], O_RDONLY);
	if (archivo == -1)
	{
		write(1, "ERROR", 5);
		return (1);
	}
	str = (char *)malloc(45000 * sizeof(char));
	read(archivo, str, (45000));
	track(&map, str);
	print_map(map);
	print_nb(map);
	read_to_nb(map);
	print_map(map);
	close(archivo);
	return (0);
}
