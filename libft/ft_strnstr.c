/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-roqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:38:35 by tde-roqu          #+#    #+#             */
/*   Updated: 2015/12/07 16:14:25 by tde-roqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2[i] == '\0')
		return ((char*)s1);
	while (i < n && s1[i] != 0)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s1[i] == s2[j] && s1[i] != 0 && i < n)
			{
				i++;
				j++;
			}
			if (s2[j] == '\0')
				return ((char*)(s1 + i - j));
			i = i - j;
		}
		i++;
	}
	return (NULL);
}
