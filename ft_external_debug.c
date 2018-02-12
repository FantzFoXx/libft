/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_external_debug.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 15:10:51 by udelorme          #+#    #+#             */
/*   Updated: 2018/02/12 14:28:30 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "libft.h"

void	ft_external_debug(char *debug, int fd)
{
	static int	debug_fd;

	debug_fd = -1;
	if (debug && (debug_fd != -1))
		ft_putendl_fd(debug, debug_fd);
	if (debug_fd == -1)
	{
		debug_fd = fd;
		ft_nbrtrace("Debug_fd set to", debug_fd);
	}
}
