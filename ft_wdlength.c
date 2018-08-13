/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wdlength.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmsimang <jmsimang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 19:53:19 by jmsimang          #+#    #+#             */
/*   Updated: 2017/06/23 19:26:38 by jmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wdlength(char const *s, char c)
{
	int len;

	len = 0;
	while (*s == c && *s)
		s++;
	while (*s != c && *s)
	{
		s++;
		len++;
	}
	return (len);
}
