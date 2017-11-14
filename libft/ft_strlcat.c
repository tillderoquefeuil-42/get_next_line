/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-roqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:47:12 by tde-roqu          #+#    #+#             */
/*   Updated: 2015/11/30 15:14:28 by tde-roqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	len;
	size_t	i;
	size_t	dstlen;

	i = 0;
	len = ft_strlen(dst);
	dstlen = ft_strlen(dst);
	if (size > len)
	{
		while (len < size - 1 && src[i] != '\0')
		{
			dst[len] = src[i];
			len++;
			i++;
		}
		dst[len] = '\0';
		return (dstlen + ft_strlen(src));
	}
	else
		return (size + ft_strlen(src));
}
