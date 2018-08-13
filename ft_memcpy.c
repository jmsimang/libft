/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmsimang <jmsimang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 13:53:53 by jmsimang          #+#    #+#             */
/*   Updated: 2017/06/23 19:20:38 by jmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	char		*str;
	const char	*str2;

	str = (char *)dst;
	str2 = (const char *)src;
	i = 0;
	if (n == 0)
		return (dst);
	while (i < (int)(n))
	{
		*str++ = *str2++;
		i++;
	}
	return (dst);
}
