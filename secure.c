/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   secure.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/19 19:45:32 by rdestreb          #+#    #+#             */
/*   Updated: 2015/02/19 19:54:36 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_error(char *msg)
{
	ft_putstr_fd("ft_printf : Error : ", 2);
	ft_putstr_fd(msg, 2);
	exit(2);
}

void	*safe_malloc(size_t length)
{
	void	*ret;

	if(!(ret = ft_memalloc(length)))
		print_error("Malloc failed");
	return (ret);
}

char	*safe_strdup(char *str)
{
	char	*ret;

	if(!(ret = ft_strdup(str)))
		print_error("Malloc failed");
	return (ret);
}
