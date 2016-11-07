/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 21:14:39 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/05 04:31:38 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	**ft_sort(int len, char **argv, int l, char *str)
{
	int j;
	int i;

	j = 0;
	i = 0;
	while (l-- > 1)
	{
		while (++i < len - 1)
		{
			while (argv[i][j] == argv[i + 1][j] && (argv[i][j + 1] != '\0'
						&& argv[i + 1][j + 1] != '\0'))
				++j;
			if (argv[i][j] > argv[i + 1][j])
			{
				str = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = str;
			}
			j = 0;
		}
		i = 0;
	}
	return (argv);
}

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		main(int argc, char **argv)
{
	int		l;
	int		len;
	char	*str;

	str = NULL;
	len = argc;
	l = len;
	argc = 0;
	ft_sort(len, argv, l, str);
	while (++argc < len)
	{
		ft_putstr(argv[argc]);
		ft_putchar('\n');
	}
	return (0);
}
