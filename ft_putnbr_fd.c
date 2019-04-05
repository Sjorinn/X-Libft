/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:24:23 by pchambon          #+#    #+#             */
/*   Updated: 2019/01/02 16:17:46 by pchambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int size;
	int nbr;

	size = 1;
	if ((n < 0) && (n != -2147483648))
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	nbr = n;
	while ((nbr /= 10) > 0)
		size *= 10;
	nbr = n;
	while (size >= 1)
	{
		ft_putchar_fd((char)((nbr / size) + 48), fd);
		nbr %= size;
		size /= 10;
	}
}
