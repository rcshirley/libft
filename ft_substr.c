/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:37:19 by rshirley          #+#    #+#             */
/*   Updated: 2021/02/22 12:44:21 by rshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	size;
	size_t			j;
	char			*subs;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start >= size)
	{
		subs = (char *)malloc(sizeof(char));
		if (!subs)
			return (NULL);
		*subs = '\0';
		return (subs);
	}
	if (size - start <= len)
		return (ft_strdup(s + start));
	subs = (char *)malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (NULL);
	j = 0;
	while (j < len)
		subs[j++] = s[start++];
	subs[j] = '\0';
	return (subs);
}
