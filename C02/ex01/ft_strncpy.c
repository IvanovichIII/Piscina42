/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:40:23 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/19 09:31:31 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*or_str;

	or_str = dest;
	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
    	{
		*dest++ = '\0';
		n--;
	}
	return (or_str);
}
/*
int	main(void)
{
	char	text[] = "hola mundo";
	char	text2[] = "cacas fritas con arroz";

	ft_strncpy(text2, text, 8);
	printf("%s\n%s", text, text2);
	return (0);
}
*/
