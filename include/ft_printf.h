/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:42:21 by pezio             #+#    #+#             */
/*   Updated: 2026/07/19 14:42:48 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_print_fd(char c, int fd);
int	ft_printstr_fd(char *s, int fd);
int	ft_puthex_fd(unsigned long hex, char *base, int fd);
int	ft_putptr_fd(unsigned long hex, int fd);
int	ft_handler(const char *format, va_list list, int count);

#endif
