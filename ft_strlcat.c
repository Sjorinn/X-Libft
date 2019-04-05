/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 10:46:14 by pchambon          #+#    #+#             */
/*   Updated: 2019/01/02 16:18:55 by pchambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	char		*dest2;
	const char	*src2;
	size_t		size;
	size_t		destsize;

	dest2 = dest;
	src2 = src;
	size = n;
	while (*dest2 != '\0' && n-- != 0)
		dest2++;
	destsize = dest2 - dest;
	n = size - destsize;
	if (n == 0)
		return (destsize + ft_strlen(src));
	while (*src2 != '\0')
	{
		if (n != 1)
		{
			*dest2++ = *src2;
			n--;
		}
		src2++;
	}
	*dest2 = '\0';
	return (destsize + (src2 - src));
}
