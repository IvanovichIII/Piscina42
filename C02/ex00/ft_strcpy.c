/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:40:23 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/19 08:50:18 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*or_str;

	or_str = dest;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (or_str);
}
/*
int	main(void)
{
	char	text[] = "hola mundo";
	char	text2[50];

	*ft_strcpy(text2, text);
	printf("%s\n%s", text, text2);
	return (0);
}
*/
