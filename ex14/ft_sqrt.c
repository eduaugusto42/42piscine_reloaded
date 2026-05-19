/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 14:49:47 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/05/13 15:30:25 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("%i\n", ft_sqrt (4));
	printf("%i\n", ft_sqrt (7));
	printf("%i\n", ft_sqrt (9));
}
*/
int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i < nb)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}
