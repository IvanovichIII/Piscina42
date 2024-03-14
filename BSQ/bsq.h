/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:59:30 by igomez-s          #+#    #+#             */
/*   Updated: 2024/02/27 16:39:06 by igomez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#define X 50
#define Y 25

//ft_putnbr.c
void	ft_putnbr(int nb);
//bsq.c
void	track(char ***map, char *str);
int		main(int argc, char *argv[]);
//print.c
void	print_map(char **map);
void	print_nb2(int count);
void	print_nb(char **map);
//change_to_x.c
void read_to_nb(char **map);
int change_to_nb(char **map, int i, int j, int a, int b);
