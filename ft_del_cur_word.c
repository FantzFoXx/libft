/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_cur_word.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 07:21:19 by udelorme          #+#    #+#             */
/*   Updated: 2018/02/12 14:33:33 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_del_cur_word(char *str, int index)
{
	int		start;
	size_t	len;
	char	*ret;
	int		i;

	while (index - 1 >= 0 && str[index - 1] != ' ')
		index--;
	start = index;
	len = 0;
	while (str[index] && str[index] != ' ')
	{
		index++;
		len++;
	}
	index = 0;
	i = 0;
	ret = ft_strnew(strlen(str) - len);
	while (str[index])
	{
		if (index < start || index >= (int)len)
			ret[i++] = str[index];
		index++;
	}
	return (ret);
}
