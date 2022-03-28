/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbishop- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:11:28 by mbishop-          #+#    #+#             */
/*   Updated: 2022/03/07 13:22:48 by mbishop-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

int				ft_printf(const char *s, ...);
void			ft_putchar_len(char c, int *len);
void			ft_nbr(int n, int *len);
void			ft_str(char *args, int *len);
void			ft_xx(unsigned int x, int *len, char x_or_x);
void			ft_u(unsigned int u, int *len);
void			ft_p(size_t p, int *len);

#endif
