/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyu2 <donghyu2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:35:25 by donghyu2          #+#    #+#             */
/*   Updated: 2022/12/08 22:02:18 by donghyu2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

void	set_spcf(int (*conversion[9])(va_list *))
{
	conversion[0] = &spcf_c;
	conversion[1] = &spcf_d;
	conversion[2] = &spcf_i;
	conversion[3] = &spcf_p;
	conversion[4] = &spcf_s;
	conversion[5] = &spcf_u;
	conversion[6] = &spcf_x_lower;
	conversion[7] = &spcf_x_upper;
	conversion[8] = &spcf_percent;
}

short	get_spcf(char c)
{
	char	spcf[10];
	short	idx;

	ft_strlcpy(spcf, "cdipsuxX%", 10);
	idx = 0;
	while (spcf[idx])
	{
		if (spcf[idx] == c)
			return (idx);
		idx++;
	}
	return (-1);
}