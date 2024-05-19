/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:44:16 by sbouabid          #+#    #+#             */
/*   Updated: 2024/05/19 10:06:17 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	main(int ac, char **av)
{
	t_cub3d	cub3d;

	if (ac != 2)
	{
		ft_puterror("one file must be provided with <.cub> extension");
	}
	start_parsing(av[1], &cub3d);

}
