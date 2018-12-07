/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrinso.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoumi <agoumihunter@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 18:27:03 by magoumi           #+#    #+#             */
/*   Updated: 2018/10/05 19:02:28 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	wrinso(char *str)
{
	int		fp;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fp = open(str, O_RDONLY, 777);
	if (fp == -1)
	{
		write(1, "error\n", 6);
		return (0);
	}
	ret = read(fp, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	if (fp != -1 && close(fp) != -1)
		return (0);
	return (0);
}
