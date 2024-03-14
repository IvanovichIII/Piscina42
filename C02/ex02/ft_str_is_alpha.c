/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:34:46 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/19 11:42:05 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >=65 && *str <= 90) || (*str >= 97 && *str <= 122)))
		{
			return (0);
		}		
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char str[] = "";
	printf("%d", ft_str_is_alpha(str));
}
*/
