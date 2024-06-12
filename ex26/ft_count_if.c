/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:45:56 by antonio-          #+#    #+#             */
/*   Updated: 2024/06/12 18:50:48 by antonio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int(*f)(char*))
{
	int	num_one;

	num_one = 0;
	while (**tab != 0)
	{
		if ((*f)(*tab) == 1)
			num_one++;
		(*tab)++;
	}
	return (num_one);
}
