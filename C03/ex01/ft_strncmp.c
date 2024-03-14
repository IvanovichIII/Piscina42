/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:09:29 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/20 10:53:17 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((*s1 != '\0' || *s2 != '\0') && n-- > 0)
	{
		if (*s2 == '\0')
			return (*s1);
		if (*s1 > *s2)
			return (*s1 - *s2);
		else if (*s1 < *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
/*
int main() {
	char	str1[] = "Hola";
	char	str2[] = "Holz";
	int	resultado = ft_strncmp(str1, str2, 3);
	printf("%d", resultado);
	resultado = strncmp(str1, str2, 3);
	printf("%d", resultado);
	
	return 0;
}
*/
