/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 03:59:39 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/05 04:57:25 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	if ((tab = (int*)malloc((max - min + 1) * sizeof(int))) == NULL)
		return (NULL);
	while (min < max)
	{
		tab[i] = min++;
		++i;
	}
	return (tab);
}
