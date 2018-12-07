/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoumi <agoumihunter@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:20:27 by magoumi           #+#    #+#             */
/*   Updated: 2018/10/04 13:21:38 by magoumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*s;

	i = -1;
	s = (char*)malloc(sizeof(src));
	while (src[++i])
		s[i] = src[i];
	s[i] = '\0';
	return (s);
}
