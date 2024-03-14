/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 09:56:37 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/18 00:12:11 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int nb);
int*	ft_getargs(char *par);
int*	array_up(int *num);
int*	array_down(int *num);
int*	array_left(int *num);
int*	array_right(int *num);

void most_args(int *up, int *down, int *left, int *right)
{
	int 	i;
	char	char_valor;

	i = 0;
	write (1, "up: ", 4);
	while (i < 4)
	{
		char_valor = up[i] + '0';
		write (1, &char_valor, 1);
		i++;
	}
	i = 0;
	write (1, "\ndown: ", 7);
	while (i < 4)
	{
		char_valor = down[i] + '0';
		write (1, &char_valor, 1);
		i++;
	}
	i = 0;
	write (1, "\nleft: ", 7);
	while (i < 4)
	{
		char_valor = left[i] + '0';
		write (1, &char_valor, 1);
		i++;
	}
	i = 0;
	write (1, "\nright: ", 8);
	while (i < 4)
	{
		char_valor = right[i] + '0';
		write (1, &char_valor, 1);
		i++;
	}
	write (1, "\n", 1);
}

int	comp_args(int *up, int *down, int *left, int *right)
{
	return (1);
	return (0);
}

int**	resolver(int **cuadricula, int *up, int *down, int *left, int *right)
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		if(up[i] == 4)
		{
			j = 0;
			while (j < 4)
			{
				cuadricula[j][i] = j + 1;
				j++;
			}
		}
		else
			if(up[i] == 1)
				cuadricula[0][i] = 4;

	}
	return (cuadricula);
}

void	declarar(int ***cuadricula)
{
	int	i;
	int	j;

	i = 0;
	(*cuadricula) = (int**)malloc(4*sizeof(int*));
	while (i < 4)
	{
		(*cuadricula)[i] = (int*)malloc(4*sizeof(int));
		i++;
	}
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			(*cuadricula)[i][j] = 0;
		}
	}
}
int	main(int argc, char *argv[])
{
	int		**cuadricula;
	int		i;
	int		j;

	int		*num;
	char	cont_num;

	int		*up;
	int		*down;
	int		*left;
	int		*right;

	declarar(&cuadricula);
	if (argc != 2)
	{
		write (1, "Error\n", 6);
		return (1);
	}
	cont_num = 0;
	up = array_up(ft_getargs(argv[1]));
	down = array_down(ft_getargs(argv[1]));
	left = array_left(ft_getargs(argv[1]));
	right = array_right(ft_getargs(argv[1]));
	most_args(up, down, left, right);
	resolver(cuadricula, up, down, left, right);
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			//ft_putnbr(cuadricula[i][j]);
			cont_num = cuadricula[i][j] + '0';
			write (1, &cont_num , 1);
		}
		write (1, "\n", 1);
	}
}
/*
1 = 1,2,3,4
2 = 1,2,3
3 = 1,2
4 = 1
*/
