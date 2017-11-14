/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-roqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 14:15:15 by tde-roqu          #+#    #+#             */
/*   Updated: 2015/12/01 16:44:04 by tde-roqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (j >= 0 && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t'))
		j--;
	len = 1 + j - i;
	if (len < 0)
		len = 0;
	str = ft_strsub(s, i, len);
	return (str);
}
