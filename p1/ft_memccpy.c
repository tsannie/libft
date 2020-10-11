/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 15:51:23 by tsannie           #+#    #+#             */
/*   Updated: 2020/10/11 07:57:05 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*res;
	unsigned char	*str;
	size_t			i;

	i = 0;
	res = (unsigned char *)dst;
	str = (unsigned char *)src;
	while (i < n)
	{
		res[i] = str[i];
		if (str[i] == c)
		{
			res[i + 1] = str[i + 1];
			return(res);
		}
		i++;
	}
	return (res);
}
