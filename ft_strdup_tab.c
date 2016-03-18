/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 18:10:03 by udelorme          #+#    #+#             */
/*   Updated: 2016/03/18 18:12:12 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_strdup_tab(char **tab)
{
	char	**new;
	int		size_tab;
	int		i;

	size_tab = 0;
	if (tab)
		while (tab[size_tab] != 0)
			size_tab++;
	new = (char **)malloc(sizeof(char *) * (size_tab + 1));
	new[size_tab] = NULL;
	i = -1;
	if (tab)
		while (++i < size_tab)
			new[i] = ft_strdup(tab[i]);
	return (new);
}
