/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:09:29 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/20 11:12:12 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strcat(char *s1, char *s2)
{
	char	*or_str;

	or_str = s1;
	while (*s1 != '\0')
		s1++;
	while (*s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	return (or_str);
}
/*
int main() {
	char	str1[50] = "Hola";
	char	str2[] = " mundo";
	char	str3[] = " azul";
	ft_strcat(str1, str2);
	printf("%s\n", str1);
	ft_strcat(str1, str3);
	printf("%s", str1);
	
	return 0;
}
*/
