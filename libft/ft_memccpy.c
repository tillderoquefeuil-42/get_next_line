/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-roqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:53:31 by tde-roqu          #+#    #+#             */
/*   Updated: 2015/12/02 13:54:06 by tde-roqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const char	*ssrc;
	char		*sdst;
	size_t		i;

	i = 0;
	ssrc = src;
	sdst = dst;
	if (!src)
		return (0);
	while (i < n)
	{
		if (ssrc[i] == c)
		{
			sdst[i] = ssrc[i];
			return ((void*)sdst + i + 1);
		}
		sdst[i] = ssrc[i];
		i++;
	}
	return (0);
}
