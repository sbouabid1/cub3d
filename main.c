/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:44:16 by sbouabid          #+#    #+#             */
/*   Updated: 2024/05/19 15:39:55 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	f()
{
	system("leaks cub3D");
}

int	main(int ac, char **av)
{
	t_cub3d	cub;

	cub.EA = NULL;
	cub.NO = NULL;
	cub.SO = NULL;
	cub.WE = NULL;
	cub.map = NULL;

	atexit(f);
	if (ac != 2)
	{
		ft_puterror("one file must be provided with <.cub> extension");
	}
	start_parsing(av[1], &cub);
	free_cub(&cub);
}
