/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:52:44 by antonio-          #+#    #+#             */
/*   Updated: 2024/06/15 13:03:59 by antonio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_str(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	check_error(int argc)
{
	if (argc <= 1)
	{
		ft_print_str("File name missing.");
		ft_putchar('\n');
		return (1);
	}
	if (argc > 2)
	{
		ft_print_str("Too many arguments.");
		ft_putchar('\n');
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		buffer_tam;
	int		fd;
	char	buffer[101];

	if (check_error(argc) == 1)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_print_str("Cannot read file.");
		return (1);
	}
	buffer_tam = 1;
	while (buffer_tam != 0)
	{
		buffer_tam = read(fd, buffer, 100);
		if (buffer_tam == -1)
		{
			ft_print_str("Cannot read file.");
			return (1);
		}
		buffer[buffer_tam] = '\0';
		ft_print_str(buffer);
	}
	return (0);
}
