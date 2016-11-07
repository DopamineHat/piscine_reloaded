/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 20:22:11 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/05 00:57:50 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		++i;
	}
}

int		main(int argc, char **argv)
{
	int len;

	len = argc;
	argc = 0;
	while (++argc < len)
	{
		ft_putstr(argv[argc]);
		ft_putchar('\n');
	}
	return (0);
}
