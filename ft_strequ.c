/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmsimang <jmsimang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 01:53:37 by jmsimang          #+#    #+#             */
/*   Updated: 2017/06/23 19:23:12 by jmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int res;

	if (s1 == NULL || s2 == NULL)
		return (0);
	res = ft_strcmp(s1, s2);
	if (res == 0)
		return (1);
	else
		return (0);
}
