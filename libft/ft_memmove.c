/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-roqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:09:35 by tde-roqu          #+#    #+#             */
/*   Updated: 2015/12/02 15:01:32 by tde-roqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;
	char	*sdst;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	tmp = (char*)malloc(sizeof(char) * len + 1);
	if (tmp == 0 || !src)
		return (0);
	ft_strcpy(tmp, src);
	sdst = dst;
	while (i < len)
	{
		sdst[i] = tmp[i];
		i++;
	}
	return (dst);
}
