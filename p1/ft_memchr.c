/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 19:24:43 by tsannie           #+#    #+#             */
/*   Updated: 2020/10/11 07:57:53 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t	i;
	unsigned char *mem;
	unsigned char search;

	i = 0;
	mem = (unsigned char *)memoryBlock;
	search = (unsigned char)searchedChar;
	while (i < size)
	{
		if (mem[i] == search)
			return (&mem[i]);
		i++;
	}
	return (NULL);
}
