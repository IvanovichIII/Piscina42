/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 22:22:37 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/25 14:49:43 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	*ft_strstr(char *s1, char *s2);
int		ft_count(char *str);
int		ft_str_is_numeric(char *str);
void	ft_nums(int count, char *str, char *dict);

void	print(char *palabra)
{
	int	space;

	space = 0;
	if (palabra != NULL)
	{
		while (*palabra && *palabra != '\n')
		{
			if (*palabra != ' ' && space == 1)
				space = 2;
			if (space == 2)
				write (1, palabra, 1);
			if (*palabra == ':')
				space = 1;
			palabra++;
		}
		space = 0;
	}
	else
		write (1, "No Esta\n", 8);
}

void	is_in(char *palabra, int count, char *argv, char *dict)
{
	if (palabra != NULL)
		print (palabra);
	else
	{
		ft_nums(count, argv, dict);
	}
}

int	main(int argc, char *argv[])
{
	int		archivo;
	int		buscar;
	char	*str;
	char	*palabra;

	archivo = 0;
	if (argc == 2)
	{
		archivo = open("numbers.dict", O_RDONLY);
		str = (char *)malloc(1500 * sizeof(char));
		buscar = read(archivo, str, 1500);
		palabra = ft_strstr(str, argv[1]);
		is_in(palabra, ft_count(argv[1]), argv[1], str);
	}
	else if (argc == 3)
	{
		archivo = open(argv[1], O_RDONLY);
		str = (char *)malloc(1500 * sizeof(char));
		buscar = read(archivo, str, 1500);
		palabra = ft_strstr(str, argv[2]);
		is_in(palabra, ft_count(argv[2]), argv[2], str);
	}
	if (archivo == -1)
		return (1);
	close(archivo);
	return (0);
}
