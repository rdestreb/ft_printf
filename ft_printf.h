/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 11:57:10 by rdestreb          #+#    #+#             */
/*   Updated: 2015/02/19 20:39:16 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define CONV "sSpdDioOuUxXcC"

# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct s_arg	t_arg;
typedef struct s_type	t_type;

typedef	enum	e_bool
{
	FALSE,
	TRUE
}				t_bool;

struct	s_arg
{
	char 	*arg;
	t_arg	*right;
	t_arg	*left;
};

struct	s_type
{
	char	*str;
	t_type	(**ft)(char *str, size_t len);
}

int		ft_printf(const char *str, ...);
t_type	flag_s(char *str, size_t len);
t_type	flag_S(char *str, size_t len);
t_type	flag_p(char *str, size_t len);
t_type	flag_d(char *str, size_t len);
t_type	flag_D(char *str, size_t len);
t_type	flag_i(char *str, size_t len);
t_type	flag_o(char *str, size_t len);
t_type	flag_O(char *str, size_t len);
t_type	flag_u(char *str, size_t len);
t_type	flag_U(char *str, size_t len);
t_type	flag_x(char *str, size_t len);
t_type	flag_X(char *str, size_t len);
t_type	flag_c(char *str, size_t len);
t_type	flag_C(char *str, size_t len);


#endif
