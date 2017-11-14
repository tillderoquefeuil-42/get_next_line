/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-roqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 15:28:48 by tde-roqu          #+#    #+#             */
/*   Updated: 2015/12/08 17:45:37 by tde-roqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_hmw(char const *s, char c)
{
	int	i;
	int	cmp;

	i = 0;
	cmp = 1;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
		{
			cmp++;
			while (s[i] == c)
				i++;
		}
		else
			i++;
	}
	return (cmp);
}

static int	ft_isempty(char const *s, char c)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] == c && s[i] != 0)
		i++;
	if (s[i] == 0)
		return (1);
	else
		return (0);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (NULL);
	i = 0;
	k = ft_isempty(s, c);
	tab = (char**)malloc(sizeof(char*) * (ft_hmw(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[k])
	{
		while (s[k] == c && s[k] != 0)
			k++;
		if (s[k] == 0)
			return (tab);
		j = k;
		while (s[k] != c && s[k] != 0)
			k++;
		tab[i] = ft_strsub(s, j, k - j);
		i++;
	}
	return (tab);
}
