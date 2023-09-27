/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:29:35 by telufulu          #+#    #+#             */
/*   Updated: 2023/09/27 21:06:08 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*aux;
	size_t	len;
	char	*x;

	len = count * size;
	aux = malloc(len);
	if (!aux)
		return (0);
	x = aux;
	while (len--)
		*x++ = 0;
	return (aux);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_putnbr_base(long int nb, char *base)
{
	unsigned int	nbr;
	size_t			bs;
	size_t			nb_chars;
	int				aux;

	nb_chars = 0;
	if (!nb)
		return (write(1, "0", 1));
	bs = ft_strlen(base);
	if (nb < 0 && bs == 10)
	{
		nb_chars += write(1, "-", 1);
		nbr = nb * -1;
	}
	else
		nbr = nb;
	//printf("nbr: %d\n", nbr);	
	if (nbr < 10)
	{
		aux = (nbr % bs);
		nb_chars += write(1, &base[aux], 1);
	}
	else
		nb_chars += ft_putnbr_base((nbr / bs), base);
	return (nb_chars);
}
/*
size_t	ft_putnbr_base(long int nb, int base)
{
	unsigned int	i;
	unsigned int	nbr;
	size_t			nb_chars;
	char			res[32];

	i = 0;
	nb_chars = 0;
	if (nb == 0)
		nb_chars += write(1, "0", 1);
	else
	{
		if (nb < 0 && base == 10)
		{
			nb_chars += write(1, "-", 1);
			nbr = nb * -1;
		}
		else
			nbr = nb;
		while (nbr)
		{
			if (base == 160)	
			{
				if ((nbr % 16) <= 9)
					res[i] = (nbr % 16) + 48;
				else
					res[i] = (nbr % 16) + 55;
				nbr /= 16;
				i++;
			}
			else
			{
				if ((nbr % base) <= 9)
					res[i] = (nbr % base) + 48;
				else	
					res[i] = (nbr % base) + 87;
				nbr /= base;
				i++;
			}
		}
		while (i--)
			nb_chars += write(1, &res[i], 1);
	}
	return (nb_chars);
}*/
