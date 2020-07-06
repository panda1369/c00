/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 14:42:24 by marvin            #+#    #+#             */
/*   Updated: 2020/07/06 14:42:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printNum(int num)
{
	if(num >= 10)
	{
		printNum(num / 10);
	}
		ft_putchar((num % 10)+ '0');
}

void	ft_putnbr(int nb)
{
	if(nb >= 0)
	{
		printNum(nb);
	}
	else
	{
		ft_putchar('-');
		printNum(-nb);
	}
}
