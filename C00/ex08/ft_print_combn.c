/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 09:41:25 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/14 14:08:17 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_combn2(char n_max[], char n[], int num)
{
	int	cont;
	int	cont2;
	int	cont3;

	cont = num - 1;
	cont3 = 0;
	while (n[0] != n_max[0])
	{
		write (1, ", ", cont3);
		cont3 = 2;
		while (n[cont] == n_max[cont])
			-- cont;
		cont2 = ++ (n[cont]);
		while (cont < num - 1)
			n[++ cont] = ++ cont2;
		write (1, n, num);
	}
}

void	ft_print_combn(int num)
{
	char	n_max[10];
	char	n[10];
	int		i;

	i = 0;
	while (i < num)
	{
		n[i] = i + '0';
		n_max[i] = (10 - num) + i + '0';
		i ++;
	}
	write(1, n, num);
	write(1, ", ", 2);
	ft_print_combn2(n_max, n, num);
}
