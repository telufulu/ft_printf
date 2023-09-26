/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:48:56 by telufulu          #+#    #+#             */
/*   Updated: 2023/09/26 22:50:36 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *s, ...)
{
	va_list	arg;
	size_t	nb_chars;
	t_store	*store;
	int		i;

	nb_chars = 0;
	va_start(arg, s);
	store = ft_calloc(sizeof(t_store), NB_OF_CONV + 1);
	if (!store)
		return (-1);
	init_store(store, arg);
	while (s && *s)
	{
		if (*s == '%')
		{
			i = 0;
			s++;
			while (i < NB_OF_CONV && store[i].conv != *s)
				i++;
			if (i < NB_OF_CONV)
				nb_chars += store[i].funct(arg);
		}
		nb_chars += write(1, s++, 1);
	}
	va_end(arg);	
	return (nb_chars);
}
