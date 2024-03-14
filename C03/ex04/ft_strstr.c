/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:09:29 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/20 12:59:45 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strstr(char *s1, char *s2)
{
	char	*or_s1;
	char	*or_s2;

	or_s1 = s1;
	or_s2 = s2;
	while (*s1 != '\0')
	{
		or_s1 = s1;
		s2 = or_s2;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (or_s1);
		s1++;
	}
	return (NULL);
}
/*
int main() {
	char str1[] = "Hola mundo azulado Marvin";
	char str2[] = "rv";
	char *resultado = ft_strstr(str1, str2);

	if (resultado != NULL) {
		printf("%s\n", resultado);
	} else {
	printf("caca\n");
	}
	return 0;
}
*/
