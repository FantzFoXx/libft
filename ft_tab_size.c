/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 13:06:12 by udelorme          #+#    #+#             */
/*   Updated: 2016/01/25 13:09:15 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_tab_size(char **tab)
{
	size_t size_tab;

	size_tab = 0;
	if (tab)
		while (tab[size_tab] != 0)
			size_tab++;
	return (size_tab);
}
