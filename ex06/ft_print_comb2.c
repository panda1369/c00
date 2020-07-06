/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 11:59:59 by marvin            #+#    #+#             */
/*   Updated: 2020/07/06 11:59:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printNum (int num1, int num2, int num3, int num4)
{
	ft_putchar(num1 + '0');
	ft_putchar(num2 + '0');
	ft_putchar(' ');
	ft_putchar(num3 + '0');
	ft_putchar(num4 + '0');
}

void	ft_print_comb2(void)
{
	int num1;
	int num2;
	int num3;
	int num4;

	num1 = 0;
	num2 = 0;
	num3 = 0;
	num4 = 0;

while(num1<=9)
{
	num2 = 0;
	while(num2<9)
	{

		while(num3<9)
		{

			num4 = 0;
			while(num4<9)
			{
				printNum(num1,num2,num3,num4);
				ft_putchar(',');
				ft_putchar(' ');
				num4++;
			}

			printNum(num1,num2,num3,num4);
			ft_putchar(',');
			ft_putchar(' ');
			num3++;
		}

		printNum(num1,num2,num3,num4);
		ft_putchar(',');
		ft_putchar(' ');
		num2++;
	}

	printNum(num1,num2,num3,num4);
	num1++;

}

}
