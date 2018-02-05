/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 17:24:41 by jchow             #+#    #+#             */
/*   Updated: 2017/04/17 17:39:47 by jchow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int acc;

	i = 0;
	acc = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			acc++;
		i++;
	}
	return (acc);
}
