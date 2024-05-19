/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:21:05 by sbouabid          #+#    #+#             */
/*   Updated: 2024/05/18 16:33:05 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft__strlen(char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft__strdup(char *s1)
{
	int		len;
	char	*ptr;

	if (s1 == NULL)
		return (NULL);
	len = ft__strlen(s1);
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	len = 0;
	while (s1[len])
	{
		ptr[len] = s1[len];
		len++;
	}
	ptr[len] = '\0';
	return (ptr);
}

char	*ft__strchr(char *str, int c)
{
	if (str == NULL)
		return (NULL);
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	if (*str == c)
		return (str);
	return (NULL);
}

char	*ft__strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft__strdup(s2));
	if (s2 == NULL)
		return (ft__strdup(s1));
	str = (char *)malloc(ft__strlen(s1) + ft__strlen(s2) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return (free(s1), str);
}

char	*ft__substr(char *str, int len)
{
	char	*ptr;
	int		i;
	int		new_line;

	new_line = 0;
	i = 0;
	ptr = NULL;
	if (str == NULL)
		return (NULL);
	if (ft__strchr(str, '\n') != NULL)
		new_line = 1;
	ptr = (char *)malloc(len + new_line + 1);
	if (!ptr)
		return (NULL);
	while (i < len && str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	if (new_line == 1)
		ptr[i++] = '\n';
	ptr[i] = '\0';
	return (ptr);
}
