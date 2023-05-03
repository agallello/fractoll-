/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_and_exit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallell <agallell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:52:26 by agallell          #+#    #+#             */
/*   Updated: 2023/05/03 15:00:38 by agallell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	available_fractals(char **av)
{
	if (!ft_strcmp(av[1], "julia") || !ft_strcmp(av[1], "first_julia")
		|| !ft_strcmp(av[1], "second_julia") || !ft_strcmp(av[1], "mandelbrot")
		|| !ft_strcmp(av[1], "burning_ship"))
		return (0);
	return (1);
}

void	error_phrase(void)
{
	write(1, "Usage: ./fractol <NAME>\n", 24);
	write(1, "Available Fractals:\n", 21);
	write(1, "---> mandelbrot\n", 17);
	write(1, "---> julia:\n", 13);
	write(1, "\t * julia\n\t * first_julia\n\t * second_julia\n", 44);
	write(1, "---> burning_ship\n", 19);
	exit(EXIT_FAILURE);
}

int	exit_when_close(void)
{
	exit(EXIT_FAILURE);
	return (0);
}
