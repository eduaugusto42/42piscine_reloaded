/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:23:04 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/05/19 10:34:32 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
int	*ft_range(int min, int max);

int	main(void) {
	#include <stdio.h>
	int	*range;
	int	i;

	range = ft_range(-4, 9);
	i = 0;
	while (range[i] < 9)
	{
		printf("%i\n", range[i]);
		i++;
	}
	free (range);
}
*/

int	*ft_range(int min, int max)
{
	int	*arr;
	int	range;
	int	i;

	if (min >= max)
		return (0);
	range = max - min;
	arr = malloc(range * sizeof(int));
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
