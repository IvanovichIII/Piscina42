/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:09:29 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/21 13:36:13 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

unsigned int	ft_strlcat(char *s1, char *s2, unsigned int nb)
{
	unsigned int	tam;

	tam = 0;
	while (*s1++ != '\0')
		tam++;
	while (*s2 != '\0' && nb > 1)
	{
		*s1++ = *s2++;
		tam++;
		nb--;
	}
	*s1 = '\0';
	while (*s2++ != '\0')
		tam++;
	return (tam);
}
/*
int main() {
	char	str1[50] = "1337 42";
	char	str2[] = "Born to code";
	ft_strlcat(str1, str2, 0);
	printf("%s\n", str1);
	return 0;
}
*/
