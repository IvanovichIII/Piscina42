/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:34:46 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/19 16:29:06 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	char	*or_str;
	int capitalizeNext;

	or_str = str;
	capitalizeNext = 1;
	while (*str != '\0') {
        if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9')) {
            if (capitalizeNext) {
                if (*str >= 'a' && *str <= 'z') {
                    *str -= 32;
                }
                capitalizeNext = 0;
            } else {
                if (*str >= 'A' && *str <= 'Z') {
                    *str += 32;
                }
            }
        } else {
            capitalizeNext = 1;
        }
        str++;
    }
	return (or_str);
}
/*
int	main(void)
{
	char str[] = "hola mundo azul Que Tal estamos";
	printf("%s", ft_strcapitalize(str));
}
*/
