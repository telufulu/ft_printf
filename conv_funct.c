/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_funct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:42:16 by telufulu          #+#    #+#             */
/*   Updated: 2023/09/27 21:06:12 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	conv_char(va_list arg)
{
	int		c;
	size_t	i;
	
	c = va_arg(arg, int); //coge el siguiente argumento, aunque no coincida con el tipo de variable dado.
	i = write(1, &c, 1);
	return (i);
}

size_t	conv_string(va_list arg)
{
	char	*s;
	size_t	i;

	i = 0;
	s = va_arg(arg, char *);
	if (s)
		i = write(1, s, ft_strlen(s));
	else if (!s)
		i = write(1, "(null)", 6);
	return (i);
}

size_t	conv_addrss(va_list arg)
{
	size_t			i;
	unsigned int	p;

	i = 0;
	p = va_arg(arg, unsigned int);
	i += write(1, "0x", 2);
	i += ft_putnbr_base(p, "0123456789abcdef");
	return (i);
}

size_t	conv_dec(va_list arg)
{
	size_t	i;
	int		d;

	d = va_arg(arg, int);
	i = ft_putnbr_base(d, "0123456789");
	return (i);
}

size_t	conv_hex(va_list arg)
{
	size_t	i;
	int		d;

	d = va_arg(arg, int);
	i = ft_putnbr_base(d, "0123456789abcdef");
	return (i);
}

size_t	conv_heX(va_list arg)
{
	size_t	i;
	int		d;

	d = va_arg(arg, int);
	i = ft_putnbr_base(d, "0123456789ABCDEF");
	return (i);
}