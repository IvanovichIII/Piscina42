/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:01:48 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/29 13:47:34 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime_recursive(int nb, int i)
{
	if (nb == i)
		return (1);
	else if (nb % i == 1)
		return (0);
	else
		return ft_is_prime_recursive(nb, i + 1);
}

int	ft_is_prime(int nb)
{
	if (nb > 1)
		return (ft_is_prime_recursive(nb, 1));
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_is_prime(0));
}
*/
