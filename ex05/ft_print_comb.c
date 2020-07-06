/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 10:21:36 by marvin            #+#    #+#             */
/*   Updated: 2020/07/06 10:21:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	printNum(int num1, int num2, int num3)
{
	ft_putchar(num1 + '0');
	ft_putchar(num2 + '0');
	ft_putchar(num3 + '0');
}

void ft_print_comb(void)
{
	int num1;
	int num2;
	int num3;

	num1 = 0;
	num2 = 0;
	num3 = 0;

	while(num1<=7)
	{
		num2 = num1 + 1;
		while(num2<=8)
		{
			num3 = num2 + 1;
			while(num3<=9)
			{
				printNum(num1,num2,num3);
				if(!(num1==7&&num2==8&&num3==9))
				ft_putchar(',');
				ft_putchar(' ');
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
