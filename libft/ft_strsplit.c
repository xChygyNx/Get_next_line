/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcredibl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 17:11:19 by pcredibl          #+#    #+#             */
/*   Updated: 2019/04/22 22:33:58 by pcredibl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**fill_tab(char const *s, char c, char **tab)
{
	size_t		w_len;
	size_t		i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			w_len = word_len(s, c);
			if ((tab[i] = ft_strnew(w_len)) == NULL)
			{
				free_tab(tab);
				return (NULL);
			}
			tab[i] = ft_strncpy(tab[i], s, w_len);
			s += w_len;
			i++;
		}
	}
	tab[i] = 0;
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		wc;
	char		**w_tab;

	if (s == NULL)
		return (NULL);
	wc = word_count(s, c);
	if ((w_tab = (char**)malloc(sizeof(char*) * (wc + 1))) == NULL)
		return (NULL);
	w_tab = fill_tab(s, c, w_tab);
	return (w_tab);
}
