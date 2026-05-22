/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 12:44:42 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/05/22 15:11:56 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	buffer;
	int	i;

	buffer = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			buffer++;
		i++;
	}
	return (buffer);
}
