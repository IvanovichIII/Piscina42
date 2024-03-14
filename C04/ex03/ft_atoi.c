/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:06:48 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/22 21:30:38 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (!(*str >= 48 && *str <= 57))
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_space(char *str)
{
	if (*str != 32)
	{
		return (0);
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (ft_str_is_space(str) == 1)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (ft_str_is_numeric(str) == 1)
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	result *= sign;
	return (result);
}
/*
int main(void) {
    char *input = "   ---+--+1234ab567";
    int result = ft_atoi(input);
    printf("%d\n", result);

    return 0;
}
*/
