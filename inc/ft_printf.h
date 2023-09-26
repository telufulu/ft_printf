/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:47:39 by telufulu          #+#    #+#             */
/*   Updated: 2023/09/26 22:50:38 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define NB_OF_CONV 1

typedef struct	s_store
{
	char	conv;
	size_t	(*funct)(va_list);
}				t_store;

// ft_printf.c
int	ft_printf(char const *s, ...);

// ft_printf_utils.c
void	init_store(t_store *store, va_list arg);

// conv_funct.c
size_t	conv_char(va_list arg);

// libft_utils.c
void	*ft_calloc(size_t count, size_t size);
#endif
