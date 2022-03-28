/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbishop- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:45:33 by mbishop-          #+#    #+#             */
/*   Updated: 2022/03/28 10:42:02 by mbishop-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int				hextest;
	int				inttest;
	char			chartest;
	char*			strtest;
	unsigned int	unsigntest;

	hextest = 4242;
	inttest = -8;
	chartest = 'A';
	strtest = "String Test";
	unsigntest = 9;
	ft_printf("value of hextest using %%X = %X\n", hextest);
	ft_printf("value of hextest using %%x - %x\n", hextest);
	ft_printf("address of *strtest = %p\n", strtest);
	ft_printf("strtest = %s\n", strtest);
	ft_printf("test character = %c\n", chartest);
	ft_printf("test integer using %%i = %i\n", inttest);
	ft_printf("test integer using %%d = %d\n", inttest);
	ft_printf("test unsigned int = %u\n", unsigntest);
	ft_printf("teststring\n");
}
