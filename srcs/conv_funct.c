/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_funct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:42:16 by telufulu          #+#    #+#             */
/*   Updated: 2023/09/26 22:07:20 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	conv_char(va_list arg)
{
	char	c;
	size_t	i;
	
	c = va_arg(arg, char); //coge el siguiente argumento, aunque no coincida con el tipo de variable dado.
	i = write(1, &c, 1);
	return (i);
}
