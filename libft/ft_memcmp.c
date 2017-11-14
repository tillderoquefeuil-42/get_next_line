/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-roqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:08:25 by tde-roqu          #+#    #+#             */
/*   Updated: 2015/12/02 14:16:27 by tde-roqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				cmp;
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	cmp = 0;
	i = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (i < n && cmp == 0)
	{
		cmp = str1[i] - str2[i];
		i++;
	}
	return (cmp);
}
