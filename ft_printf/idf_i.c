/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idf_i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyu2 <donghyu2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:54:03 by donghyu2          #+#    #+#             */
/*   Updated: 2022/11/29 02:01:47 by donghyu2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

void	idf_i(va_list ptr)
{
	ft_putnbr_fd(va_arg(ptr, int), 1);
}