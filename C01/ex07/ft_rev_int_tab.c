/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:55:37 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/15 12:25:05 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size / 2)
	{
		j = tab[i];
		tab [i] = tab[size - i - 1];
		tab[size - i - 1] = j;
		i++;
	}
}
/*
int	main(void)
{
	int	a1[5] = {1, 2, 3, 4, 5};	
	int	i = 0;

	while (i < 5)
	{
		printf("%d", a1[i]);
		i++;
	}
	ft_rev_int_tab(a1, 5);
	i = 0;
	printf("\n");
	while (i < 5)
	{
		printf("%d", a1[i]);
		i++;
	}
}
*/
