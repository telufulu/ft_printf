/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:29:35 by telufulu          #+#    #+#             */
/*   Updated: 2023/09/26 20:32:06 by telufulu         ###   ########.fr       */
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
