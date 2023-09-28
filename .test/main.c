/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:40:14 by telufulu          #+#    #+#             */
/*   Updated: 2023/09/28 02:33:35 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(int argc, char **argv)
{
	int				res;
	
	//s examples
	char			*s1 = "After all this time? %s";
	char			*s2 = "Always";
	//char			*s = "Hola Mundo!\1\0\6 Cómo estás?";
	//char			*s = "";
	//char			*s = "{}%oooos\n";
	
	//c examples
	unsigned char	c = 200;
	//char			c = 127;
	//unsigned		c = 0;
	//char			c = -42;
	//char			c = 42;
	
	//p examples
	//char	*p = -1;
	//char	*p = 15;
	//char	*p = ULONG_MAX;
	//char	*p = -ULONG_MAX;

	//d, i, x, X examples
	//int	d = INT_MAX;
	//int	d = INT_MIN;
	//int	d = -+-42;
	//int	d = +0;
	//int	d = -0;
	//int	d = 0;
	//int	d = 2048;
	int	d = -2048;
	

	// error
	if (*argv[argc - 1] == 'e')
	{
		printf("\n********** error **********\n");
		res = printf("org: \001\002\007\v\010\f\r\n");
		printf("(%i)\n", res);
		res = ft_printf("cpy: \001\002\007\v\010\f\r\n");
		printf("(%i)\n", res);
	}
	// no_arg
	if (*argv[argc - 1] == 'n')
	{
		printf("\n********** no_arg **********\n");
		res = printf("org: %%  %%c %%%%%% %%%% %%%c", c);
		printf("(%i)\n", res);
		res = ft_printf("cpy: %%  %%c %%%%%% %%%% %%%c", c);
		printf("(%i)\n", res);
	}
	// c
	if (*argv[argc - 1] == 'c')
	{
		printf("\n********** c **********\n");
		res = printf("org: %c ", c);
		printf("(%i)\n", res);
		res = ft_printf("cpy: %c ", c);
		printf("(%i)\n", res);
	}
	// s
	else if (*argv[argc - 1] == 's')
	{
		printf("\n********** s **********\n");
		res = printf("org: %s %s ", s1, s2);
		printf("(%i)\n", res);
		res = ft_printf("cpy: %s %s ", s1, s2);
		printf("(%i)\n", res);
	}
	// p
	else if (*argv[argc - 1] == 'p')
	{
		printf("\n********** p **********\n");
		res = printf("org: %p", s1);
		printf("(%i)\n", res);
		res = ft_printf("cpy: %p", s1);
		printf("(%i)\n", res);
	}
	// d
	else if (*argv[argc - 1] == 'd')
	{
		printf("\n********** d **********\n");
		res = printf("org: %d", d);
		printf("(%i)\n", res);
		res = ft_printf("cpy: %d", d);
		printf("(%i)\n", res);
	}
	// i
	else if (*argv[argc - 1] == 'i')
	{
		printf("\n********** i **********\n");
		res = printf("org: %i", d);
		printf("(%i)\n", res);
		res = ft_printf("cpy: %i", d);
		printf("(%i)\n", res);
	}
	// u
	else if (*argv[argc - 1] == 'u')
	{
		printf("\n********** u **********\n");
		res = printf("org: %u", d);
		printf("(%i)\n", res);
		res = ft_printf("cpy: %u", d);
		printf("(%i)\n", res);
	}
	// x
	else if (*argv[argc - 1] == 'x')
	{
		printf("\n********** x **********\n");
		res = printf("org: %x", d);
		printf("(%i)\n", res);
		res = ft_printf("cpy: %x", d);
		printf("(%i)\n", res);
	}
	// X
	else if (*argv[argc - 1] == 'X')
	{
		printf("\n********** X **********\n");
		res = printf("org: %X", d);
		printf("(%i)\n", res);
		res = ft_printf("cpy: %X", d);
		printf("(%i)\n", res);
	}
	return (0);
}
