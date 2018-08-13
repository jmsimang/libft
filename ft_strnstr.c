/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmsimang <jmsimang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 13:23:33 by jmsimang          #+#    #+#             */
/*   Updated: 2017/06/23 19:25:49 by jmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int a;
	int b;
	int c;

	if (*little == '\0')
		return ((char *)big);
	a = ft_strlen(little);
	b = 0;
	while (big[b])
	{
		c = 0;
		while ((little[c] == big[c + b]) && ((c + b) < (int)len))
		{
			if (c == a - 1)
				return ((char *)(big + b));
			c++;
		}
		b++;
	}
	return (NULL);
}
