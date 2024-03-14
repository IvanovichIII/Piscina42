/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupercase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:34:46 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/19 16:29:35 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*or_str;

	or_str = str;
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
		}		
		str++;
	}
	return (or_str);
}
/*
int	main(void)
{
	char str[] = "hOla Mund0";
	printf("%s", ft_strupcase(str));
}
*/
