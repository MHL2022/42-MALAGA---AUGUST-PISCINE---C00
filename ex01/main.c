/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:31:14 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/18 16:59:38 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_ultimate_ft(int *********nbr);

int main (void)
{
	int x;
	int *px = &x;
	int **px2 = &px;
	int ***px3 = &px2;
	int ****px4 = &px3;
	int *****px5 = &px4;
	int ******px6 = &px5;
	int *******px7 = &px6;
	int ********px8 = &px7;
	int *********px9 = &px8;
	
	x  = 0;

	ft_ultimate_ft(px9);
	printf("%d", x);
	return (0);
}

