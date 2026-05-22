/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <eduaaugu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 13:10:09 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/05/22 14:58:12 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str);

int	ft_display_file(char *str)
{
	char	buffer[1];
	int		fd;

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Error opening file.\n");
		return (1);
	}
	while (read(fd, buffer, 1) > 0)
		write(1, buffer, 1);
	close (fd);
	return (0);
}
