/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naharumi <naharumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:04:10 by naharumi          #+#    #+#             */
/*   Updated: 2024/10/11 16:42:16 by naharumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;

	count = 0;
	if (tab == 0 || f == 0)
		return (0);
	while (*tab)
	{
		if (f(*tab) == 1)
			count++;
		tab++;
	}
	return (count);
}
