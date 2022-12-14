/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyu2 <donghyu2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:43:42 by donghyu2          #+#    #+#             */
/*   Updated: 2022/11/23 17:57:07 by donghyu2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	idx;

	if (*needle == 0)
		return ((char *)haystack);
	while (n > 0 && *haystack)
	{
		idx = 0;
		while (haystack[idx] == needle[idx] && needle[idx] && idx < n)
			idx++;
		if (needle[idx] == 0)
			return ((char *)haystack);
		n--;
		haystack++;
	}
	return (0);
}
