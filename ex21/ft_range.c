/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:38:11 by antonio-          #+#    #+#             */
/*   Updated: 2024/06/12 17:49:11 by antonio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	*aux;

	res = malloc(sizeof(int *) * (max - min) + 1);
	aux = res;
	while (min != max)
	{
		*aux = min;
		min++;
		aux++;
	}
	return (res);
}
