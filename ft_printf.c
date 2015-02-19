/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 11:53:50 by rdestreb          #+#    #+#             */
/*   Updated: 2015/02/04 12:16:39 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const	char *str, ...)
{
	char	**arg;
	int		i;

	arg = ft_strsplit(str, '%');
	i = -1;
	while(arg[++i])
		ft_putendl(arg[i]);
	return(0);
}
