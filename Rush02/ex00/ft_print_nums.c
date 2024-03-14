/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nums.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:55:54 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/25 18:18:53 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	print(char *palabra);
char	*ft_strstr(char *s1, char *s2);
int		ft_count(char *str);

void	ft_search(int count, char *pick, char *dict)
{	
	char	*or_pick2;
	char	*pick2;
	int		count2;

	pick2 = or_pick2;
	count2 = ft_count(pick);
	while (*pick)
	{
		pick2 = or_pick2;
		if(count2 > 2 && *pick != '1')
			*pick2 = *pick;
		else
		{
			print(ft_strstr(dict, pick));
		}
		pick++;
		/*
		pick2 = or_pick2;
		*++pick2 = 0;
		if (count2 > 2)
		{
			print(ft_strstr(dict, pick2));
			*pick = '1';
		}
		while(count2-- > 1)*/
	}
}

void	ft_nums(int count, char *str, char *dict)
{
	int		count_t;
	char	*pick;
	char	*or_pick;
	char	*palabra;

	pick = (char *)malloc(count * sizeof(char));
	or_pick = pick;
	while (*str)
	{
		pick = or_pick;
		if (count % 3 != 0)
		{
			while (count % 3 != 0)
			{
				*pick++ = *str++;
				count--;
			}
			*pick = 0;
		}
		else
		{
			count_t = 3;
			while (count_t > 0)
			{
				*pick++ = *str++;
				count_t--;
				count--;
			}
			*pick = 0;
		}
		pick = or_pick;
		ft_search(count, pick, dict);
		/*while (*pick)
			write (1, pick++, 1);
		printf("%d", count);
		write (1, "\n", 1);*/
	}
	pick = or_pick;
}
