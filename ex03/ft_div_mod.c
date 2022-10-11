/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:47:50 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/18 19:46:09 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int a, int b, int *div, int *mod)
{
 	int resultadoDiv;
	int	resultadoMod;

 	resultadoDiv = a/b;
	resultadoMod = a%b;
	*div = resultadoDiv;
	*mod = resultadoMod;

}
