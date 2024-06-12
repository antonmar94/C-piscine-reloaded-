/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:44:20 by antonio-          #+#    #+#             */
/*   Updated: 2024/06/08 13:55:57 by antonio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*index;

	dup = malloc((sizeof(char *) * ft_strlen(src)) + 1);
	index = dup;
	while (*src)
	{
		*index = *src;
		index++;
		src++;
	}
	*index = '\0';
	return (dup);
}
