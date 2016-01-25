/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 13:01:39 by udelorme          #+#    #+#             */
/*   Updated: 2016/01/25 13:05:29 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	realloc_tab(char ***tab, size_t size)
{
	char	**new;
	int		size_tab;
	int		i;

	size_tab = 0;
	if (*tab)
		while ((*tab)[size_tab] != 0)
			size_tab++;
	new = (char **)malloc(sizeof(char *) * (size_tab + size + 1));
	new[size_tab + size] = NULL;
	i = -1;
	while (++i < size_tab)
		new[i] = (*tab)[i];
	free(*tab);
	*tab = new;
}