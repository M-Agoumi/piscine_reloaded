/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoumi <agoumihunter@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 20:23:05 by magoumi           #+#    #+#             */
/*   Updated: 2018/10/03 20:28:24 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int f;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 2)
		return (2);
	f = 1;
	while (nb > 1)
	{
		f *= nb;
		nb--;
	}
	return (f);
}
