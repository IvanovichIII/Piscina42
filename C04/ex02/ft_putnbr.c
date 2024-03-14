/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 21:29:00 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/22 19:53:02 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	cont_digitos(int nb)
{
	int	cont;

	cont = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		nb = -nb;
	while (nb != 0)
	{
		nb /= 10;
		cont ++;
	}
	return (cont);
}

void	ft_putnbr(int nb)
{
	int		nb_t;
	int		nb_rest;
	int		cont;
	char	c[10];

	nb_t = nb;
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		cont = cont_digitos(nb);
		while (cont > 0)
		{
			nb_rest = nb_t % 10;
			nb_t /= 10;
			if (nb > 0)
				c[cont - 1] = '0' + nb_rest;
			else
				c[cont - 1] = '0' - nb_rest;
			cont--;
		}
		if (nb < 0)
			write(1, "-", 1);
		write (1, c, cont_digitos(nb));
	}
}
/*
int	main(void)
{
	int i = 1234;
	ft_putnbr(i);
}
*/