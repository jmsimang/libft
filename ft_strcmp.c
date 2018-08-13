/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmsimang <jmsimang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 16:57:25 by jmsimang          #+#    #+#             */
/*   Updated: 2017/06/23 19:22:51 by jmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = -1;
	while ((s2[++i]) && ((unsigned char)s1[i] == (unsigned char)s2[i]))
		continue;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
