/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:01:55 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/05/19 10:31:50 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// char	*ft_strdup(char *src);
int		ft_strlen(char *str);
/*
int	main(void)
{
	#include <stdio.h>
	char	*s1 = "Hello, world!";
	char	*s2 = ft_strdup(s1);

	printf("%s\n", s2);
}
*/

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = ft_strlen(src);
	dup = malloc(i * sizeof(char) + 1);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
