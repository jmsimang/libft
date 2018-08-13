/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_joinchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmsimang <jmsimang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 19:10:52 by jmsimang          #+#    #+#             */
/*   Updated: 2017/06/23 19:27:05 by jmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_joinchr(char const *s1, char c)
{
	char	*str;
	size_t	i;
	size_t	len;

	if (!s1 || !c)
		return (NULL);
	len = ft_strlen(s1);
	str = ft_strnew(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = c;
	return (str);
}
