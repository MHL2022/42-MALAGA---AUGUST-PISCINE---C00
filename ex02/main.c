/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:11:51 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/18 17:57:00 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap (int *a, int *b);
int	main(void)
{
	int a = 0;
	int b = 1;
	int *pa = &a;
	int *pb = &b;

	printf("%d %d\n", a, b);
	ft_swap(pa, pb);
	printf("%d %d\n", a, b);
	return (0);
}
