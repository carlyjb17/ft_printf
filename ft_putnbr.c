/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:40:29 by ltranca-          #+#    #+#             */
/*   Updated: 2022/12/14 17:01:26 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(long long int n, int plus, int iter, int ret)
{
    iter++;
    if (plus >= 1)
    {
        if (n > 0)
        {
            if (plus == 1)
                ft_putchar('+');
            if (plus == 2)
                ft_putchar(' ');
        }
        ret++;
    }
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
    ret = ft_intlen(n);
	if (n < 0)
	{
        ft_putchar('-');
		n = n * -1;
        ret++;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, 0, iter, ret);
		n = n % 10;
	}
	if (n < 10)
		ft_putchar(n + '0');
    return (ret);
}