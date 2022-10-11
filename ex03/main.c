/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:00:48 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/18 19:47:10 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a = 25;
	int b = 5;
	int *pa;
	int *pb;

	pa = &a;
	pb = &b;
	ft_div_mod(a, b, pa, pb);
	printf("a/b =%d\naMODb=%d\n", a, b);
	return (0);
}
