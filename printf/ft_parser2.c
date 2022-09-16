/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurugar <imurugar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 20:51:22 by imurugar          #+#    #+#             */
/*   Updated: 2022/08/06 21:07:56 by imurugar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parser_hexadecimal(va_list arg, int *total_write, char step)
{
	long long	i;

	i = va_arg(arg, unsigned int);
	ft_putstr(convert(i, 16, step));
	*total_write += ft_count_numbers(i, 16);
}

void	ft_parser_pointer(va_list arg, int *total_write, char step)
{
	long long	i;

	i = (unsigned long long)va_arg(arg, void *);
	ft_putstr("0x");
	ft_putstr(convert(i, 16, step));
	*total_write += ft_count_numbers(i, 16) + 2;
}
