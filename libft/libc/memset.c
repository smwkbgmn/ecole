/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyu2 <donghyu2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:18:39 by donghyu2          #+#    #+#             */
/*   Updated: 2022/11/20 16:36:39 by donghyu2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b_c;
	unsigned char	c_c;
	
	b_c = (unsigned char *)b;
	c_c = (unsigned char)c;
	while (len > 0)
	{
		*b_c++ = c_c;
		len--;
	}
	return (b);
}