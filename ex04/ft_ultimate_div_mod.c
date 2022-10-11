/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:34:34 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/22 13:50:36 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

 void ft_ultimate_div_mod(int *a, int *b)
{
	int aux1; 
	int aux2;

	aux1 = *a;
	aux2 = *b;

	*a = aux1 /aux2;
	*b = aux1 %aux2;
}
