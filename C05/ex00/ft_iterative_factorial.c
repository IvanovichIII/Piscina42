/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:01:03 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/29 12:14:11 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	tot;

	tot = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		tot *= nb;
		nb--;
	}
	return (tot);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
}
*/
