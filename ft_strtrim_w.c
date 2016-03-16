/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_w.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 12:51:10 by udelorme          #+#    #+#             */
/*   Updated: 2016/03/16 13:06:46 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim_w(const char *s)
{
	int		i;
	int		j;
	char	*tmp;
	char	*new;

	tmp = ft_strtrim(s);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '	')
		{
			tmp[j] = ' ';
			j++;
			while (s[i] && (s[i] == ' ' || s[i] == '	'))
				i++;
		}
		if (s[i])
			tmp[j] = s[i];
		j++;
		i++;
	}	
	new = ft_strdup(tmp);
	free(tmp);
	return (new);
}
