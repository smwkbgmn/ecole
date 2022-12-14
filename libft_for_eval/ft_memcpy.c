/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyu2 <donghyu2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:41:10 by donghyu2          #+#    #+#             */
/*   Updated: 2022/12/15 17:39:01 by donghyu2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_c;
	const char	*src_c;

	if (n == 0 || dst == src)
		return (dst);
	dst_c = (char *)dst;
	src_c = (const char *)src;
	while (n-- > 0)
		*dst_c++ = *src_c++;
	return (dst);
}
