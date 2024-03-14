/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 20:33:55 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/10 10:43:04 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	imprimir_arriba_abajo(int cont_c, int x)
{
	if (cont_c == 0 || cont_c == x - 1)
	{
		ft_putchar('o');
	}
	else
	{
		ft_putchar('-');
	}
}

void	imprimir_centro(int cont_c, int x)
{
	if (cont_c == 0 || cont_c == x - 1)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y, int cont_c, int cont_f)
{
	while (cont_f < y)
	{
		while (cont_c < x)
		{
			if (cont_f == 0 || cont_f == y - 1)
			{
				imprimir_arriba_abajo(cont_c, x);
			}
			else
			{
				imprimir_centro(cont_c, x);
			}
			cont_c++;
		}
		write(1, "\n", 1);
		cont_c = 0;
		cont_f++;
	}
}

int	main(void)
{
	int	x;
	int	y;
	int	cont_c;
	int	cont_f;

	x = 15;
	y = 4;
	cont_c = 0;
	cont_f = 0;
	rush(x, y, cont_c, cont_f);
	return (0);
}
