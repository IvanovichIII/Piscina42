/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:55:37 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/15 13:02:45 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = size;
	while (i < k)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				j = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = j;
			}
			i++;
		}
		i = 0;
		k--;
	}
}
/*
int	main(void)
{
	int	a1[5] = {12, 2, 10, 4, 5};	
	int	i = 0;

	while (i < 5)
	{
		printf("%d ", a1[i]);
		i++;
	}
	ft_sort_int_tab(a1, 5);
	i = 0;
	printf("\n");
	while (i < 5)
	{
		printf("%d ", a1[i]);
		i++;
	}
}
*/
