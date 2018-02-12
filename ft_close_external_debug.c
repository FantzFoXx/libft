/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_external_debug.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udelorme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 15:09:14 by udelorme          #+#    #+#             */
/*   Updated: 2018/02/12 14:27:28 by udelorme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_close_external_debug(int fd)
{
	static int	debug_fd;

	debug_fd = -1;
	if (debug_fd != -1)
		close(debug_fd);
	if (debug_fd == -1)
		debug_fd = fd;
}
