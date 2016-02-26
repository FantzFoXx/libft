/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trace.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 18:43:59 by udelorme          #+#    #+#             */
/*   Updated: 2016/02/26 15:32:40 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_trace(const char *mess, const char *s)
{
	if (mess)
	{
		ft_putstr(mess);
		ft_putstr(" : ");
	}
	else
		ft_putstr("trace : ");
	ft_putendl(s);
}
