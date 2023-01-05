/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyu2 <donghyu2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:55:30 by donghyu2          #+#    #+#             */
/*   Updated: 2023/01/05 12:39:39 by donghyu2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define SUCCESS 1
# define ERROR -1

# include "libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);

short	init_list(t_list **head);
int		write_list(t_list *head, short idx_t);
void	free_content(void *content);

short	get_conversion(char *format, t_list *head, va_list *ptr);

void	set_type(short (*types[8])(va_list *, t_list *));
short	get_type_char(char c);
short	get_type_str(char *format);

void	set_flag(short (*flags[7])(char *, t_list *));
short	get_flag(char c);
size_t	pass_flag(char *format);
size_t	find_flag(char *format, char flag);
char	*get_str_fill_char(int width, char c);

short	type_c(va_list *ptr, t_list *head);
short	type_d(va_list *ptr, t_list *head);
short	type_i(va_list *ptr, t_list *head);
short	type_p(va_list *ptr, t_list *head);
short	type_s(va_list *ptr, t_list *head);
short	type_u(va_list *ptr, t_list *head);
short	type_x_lower(va_list *ptr, t_list *head);
short	type_x_upper(va_list *ptr, t_list *head);

short	flag_precision(char *format, t_list *head);
short	flag_zero(char *format, t_list *head);
short	flag_plus(char *format, t_list *head);
short	flag_space(char *format, t_list *head);
short	flag_hash(char *format, t_list *head);
short	flag_dash(char *format, t_list *head);
short	flag_width(char *format, t_list *head);
short	type_percent(t_list *head);

#endif