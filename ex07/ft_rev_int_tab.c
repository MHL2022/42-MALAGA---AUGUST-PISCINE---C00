/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:32:28 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/22 14:59:33 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 void	ft_rev_int_tab(int *tab, int size)
{
	int a;
	int aux;

	a = 0;
	while (a < size)
	{	
		aux = tab[a];
		tab[a] = tab[size-1];
		tab[size-1] = aux;
		size--;
		a++;
	}
}
