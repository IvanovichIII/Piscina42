/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getargs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:46:12 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/17 21:28:10 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_getargs(char *par)
{
	int	*num;
	int	i;
	int	j;

	num = (int *) malloc (16);
	i = -1;
	j = 0;
	while (++i < 36)
	{
		if (par[i] >= '1' && par[i] <= '4')
		{
			num[j] = par[i] - '0';
			j++;
		}
	}
	return (num);
}
