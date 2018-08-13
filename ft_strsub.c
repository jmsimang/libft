/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmsimang <jmsimang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 02:07:25 by jmsimang          #+#    #+#             */
/*   Updated: 2017/06/23 19:26:08 by jmsimang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (s == NULL || (start + len) > ft_strlen(s))
		return (NULL);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	return (ft_strncpy(str, s + start, len));
}
