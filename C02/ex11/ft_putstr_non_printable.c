/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:34:46 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/19 17:49:18 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	hex;
	int	i;
	int	j;

	while (*str) {
		if (*str >= 32 && *str <= 126 && *str != 92)
			write(1, str, 1);
		else {
			write(1, "\\", 1);
			hex = *str;
			i = hex / 16;
			j = hex % 16;
			i %= 16;
			j %= 16;
			if (i < 10)
				hex = i + '0';
			else
				hex = i + 'a' - 10;
			write(1, &hex, 1);
			if (j < 10)
				hex = j + '0';
			else
				hex = j + 'a' - 10;
			write(1, &hex, 1);
		}
		str++;
	}
}
/*
int	main(void)
{
	char str[] = "";
	ft_putstr_non_printable(str);
}
*/
