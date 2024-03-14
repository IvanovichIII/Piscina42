/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <igomez-s@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:09:29 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/20 11:20:03 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strncat(char *s1, char *s2, unsigned int nb)
{
	char	*or_str;

	or_str = s1;
	while (*s1 != '\0')
		s1++;
	while (*s2 != '\0' && nb > 0)
	{
		*s1 = *s2;
		s1++;
		s2++;
		nb--;
	}
	*s1 = '\0';
	return (or_str);
}
/*
int main() {
	char	str1[50] = "Hello";
	char	str2[] = "World";
	ft_strncat(str1, str2, 2);
	printf("%s\n", str1);
	return 0;
}
*/
