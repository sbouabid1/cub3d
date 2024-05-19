/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_map_color.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:39:27 by sbouabid          #+#    #+#             */
/*   Updated: 2024/05/19 15:59:10 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int	convert_and_check_range(char **color_values, int *color, char **lines, char **new)
{
	int	r;
	int	g;
	int	b;

	r = ft_atoi(color_values[0]);
	g = ft_atoi(color_values[1]);
	b = ft_atoi(color_values[2]);
	if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255)
	{
		free_arr(new);
		free_arr(lines);
		ft_puterror("check_c_var::invalid color");
	}
	*color = (r << 16) + (g << 8) + b;
	return (0);
}


int	pars_color(char	**lines, t_temp *temp)
{
	char	**new;
	int		color;
	char	*temper;

	temp->i = 0;
	temp->j = 0;
	while (lines[1][temp->i])
	{
		if (lines[1][temp->i] == ',')
			temp->j += 1;
		temp->i += 1;
	}
	if (temp->j != 2)
	{
		free_arr(lines);
		ft_puterror("check_c_var::invalid color");
	}
	temper = ft_strtrim(lines[1], "\n");
	new = ft_split(temper, ',');
	if (!new)
		return 0;
	if (size_arr(new) != 3)
	{
		free_arr(new);
		free_arr(lines);
		ft_puterror("check_c_var::invalid color");
	}
	convert_and_check_range(new, &color, lines, new);
	free(temper);
	free_arr(new);
	return (color);
}
