/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:32:52 by telufulu          #+#    #+#             */
/*   Updated: 2023/09/26 22:50:34 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_store(t_store *store, va_list arg)
{
	store[0] = (t_store){'c', &conv_char(arg)};
	//store[1] = (t_store){'s', &conv_char(arg, store)};
	//store[2] = (t_store){'p', &conv_char(arg, store)};
	//store[3] = (t_store){'d', &conv_char(arg, store)};
	//store[4] = (t_store){'i', &conv_char(arg, store)};
	//store[5] = (t_store){'u', &conv_char(arg, store)};
	//store[6] = (t_store){'x', &conv_char(arg, store)};
	//store[7] = (t_store){'X', &conv_char(arg, store)};
}
