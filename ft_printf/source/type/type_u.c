/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyu2 <donghyu2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:54:26 by donghyu2          #+#    #+#             */
/*   Updated: 2023/01/08 15:57:29 by donghyu2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

short	type_u(va_list *ptr, t_list *head)
{
	char	*content;

	content = ft_itoa_uint(va_arg(*ptr, unsigned int));
	if (content)
	{
		ft_lstidx(head, 3)->content = content;
		return (TRUE);
	}
	else
		return (FALSE);
}
