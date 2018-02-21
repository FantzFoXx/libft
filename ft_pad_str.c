/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pad_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 16:40:16 by udelorme          #+#    #+#             */
/*   Updated: 2018/02/21 17:05:06 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*pad_str_before(char *str, char pad, size_t len)
{
	size_t	str_len;
	char	*ret;

	str_len = ft_strlen(str);
	ret = ft_strnew(len);
	if (!ret)
		return (NULL);
	ft_memset(ret, pad, len);
	ft_memcpy(&ret[len - str_len], str, str_len);
	return (ret);
}
