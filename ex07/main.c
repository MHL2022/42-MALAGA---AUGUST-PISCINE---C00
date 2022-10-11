/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:41:32 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/22 14:58:35 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
 void ft_rev_int_tab(int *tab, int size);

 int	main(void)
{
	int a;
	int str[4];

	str[0] = 1;
	str[1] = 2;
	str[2] = 3;
	str[3] = 4;

	 ft_rev_int_tab(str, 4);

	 a = 0;
	 while (a < 4)
		{ 
			printf ("%d", str[a]);
	 		a++;
		}
}
