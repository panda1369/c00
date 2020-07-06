/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 01:33:14 by marvin            #+#    #+#             */
/*   Updated: 2020/07/07 01:33:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
	int c;

	c = 0;
	while(c < 10)
	{
		ft_putchar(c + '0');
		c++;
	}

}

int main()
{
	ft_print_numbers();

	return 0;
}
