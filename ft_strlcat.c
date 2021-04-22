/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:26:28 by rshirley          #+#    #+#             */
/*   Updated: 2020/11/05 20:10:22 by rshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	ns;
	size_t	nd;
	size_t	i;

	ns = ft_strlen(src);
	nd = ft_strlen(dest);
	i = 0;
	if (nd >= size)
		return (size + ns);
	else
		ns = nd + ns;
	while (src[i] != '\0' && nd < size - 1)
	{
		dest[nd] = src[i];
		nd++;
		i++;
	}
	dest[nd] = '\0';
	return (ns);
}
