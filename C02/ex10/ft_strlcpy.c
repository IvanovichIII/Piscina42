/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:40:23 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/19 16:15:10 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	int	tam;

	tam = 0;
	while (*src != '\0' && n > 1)
	{
		*dest++ = *src;
		n--;
		tam++;
		src++;
	}
	*dest = '\0';
	return (tam);
}
/*
int	main(void)
{
	char	text[] = "hola mundo";
	char	text2[] = "cacas fritas con arroz";
	int	tam;

	tam = ft_strlcpy(text2, text, 8);
	printf("%s\n%s\n%d", text, text2, tam);
	return (0);
}
*/
