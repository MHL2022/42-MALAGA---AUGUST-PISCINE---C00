/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:37:53 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/22 13:53:53 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
 void ft_ultimate_div_mod(int *a, int *b);

 int	main (void)
{
	int 	x;
	int		y;
	int		*px;
	int		*py;

	x = 20;
	y = 5;
	px = &x;
	py = &y;

	ft_ultimate_div_mod(px, py);
	printf("%d\n%d\n", x, y);
}
