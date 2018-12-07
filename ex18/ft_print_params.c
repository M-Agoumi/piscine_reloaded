/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoumi <agoumihunter@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 10:46:03 by magoumi           #+#    #+#             */
/*   Updated: 2018/10/04 12:51:25 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*(s++));
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;

	if (argc == 1)
		return (0);
	i = 1;
	while (argv[i])
		ft_putstr(argv[i++]);
	return (0);
}
