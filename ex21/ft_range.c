/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:53:08 by naharumi          #+#    #+#             */
/*   Updated: 2024/10/01 14:53:31 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*array;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	array = malloc(sizeof(int) * size);
	if (!array)
		return (0);
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
