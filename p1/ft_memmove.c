/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 16:21:07 by tsannie           #+#    #+#             */
/*   Updated: 2020/10/11 07:50:31 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *destination, const void *source, size_t size)
{
	size_t          i;
	unsigned char   *src;
	unsigned char   *dst;

	i = 0;
	src = (unsigned char *)source;
	dst = (unsigned char *)destination;
    if (src < dst)
    {
        while (size > 0)
        {
            dst[size] = src[size];
            size--;
        }
    }
    else
    {
        ft_memcpy(dst, src, size);
    }
	return (dst);
}
