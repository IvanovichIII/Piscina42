/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:15:52 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/29 12:23:33 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	tot;

	tot = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		tot *= nb;
		power--;
	}
	return (tot);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(2, 4));
}
*/
