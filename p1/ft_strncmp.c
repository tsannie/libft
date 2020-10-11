/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 17:36:23 by tsannie           #+#    #+#             */
/*   Updated: 2020/10/11 10:23:58 by tsannie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*src1;
	char	*src2;
	size_t	i;

	src1 = (char *)s1;
	src2 = (char *)s2;
	i = 0;
	while ((src1[i] && src2[i]) && (src1[i] == src2[i]) && (n > i))
		i++;
	if (src1[i] == src2[i])
		return (0);
	return (src1[i] > src2[i] ? 1 : -1);
}
