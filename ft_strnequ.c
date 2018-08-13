/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmsimang <jmsimang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 01:53:47 by jmsimang          #+#    #+#             */
/*   Updated: 2017/06/23 19:25:40 by jmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int res;

	if (s1 == NULL || s2 == NULL)
		return (0);
	res = ft_strncmp(s1, s2, n);
	if (res < 0 || res > 0)
		return (0);
	else
		return (1);
}
