/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 15:23:23 by jchow             #+#    #+#             */
/*   Updated: 2017/04/07 15:27:37 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div(int *a, int *b)
{
	int x;
	int y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}
