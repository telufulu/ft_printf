/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:40:14 by telufulu          #+#    #+#             */
/*   Updated: 2023/09/26 20:41:42 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	s[] = "Hola Mundo!";

	printf("%s\n", s);
	ft_printf("%s\n", s);
	return (0);
}
