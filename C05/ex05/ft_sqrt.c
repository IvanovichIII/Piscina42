/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:01:48 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/29 13:15:53 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt_recursive(int nb, int i)
{
	if (i * i > nb)
		return (0);
	else if (i * i == nb)
		return (i);
	else
		return ft_sqrt_recursive(nb, i + 1);
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_recursive(nb, 1));
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(25));
}
*/
