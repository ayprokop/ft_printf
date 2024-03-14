/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:41:33 by ayprokop          #+#    #+#             */
/*   Updated: 2024/03/14 08:14:41 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
// # include "libft.h"
# include "ft_printf.h"

int		ft_printf_char(char c);
int		ft_printf_str(char *str);
int		ft_printf_deci(int n);
int		ft_printf_unsigned(unsigned int n);
char	*ft_utoa(unsigned int n);
int		ft_printf_hex(unsigned int n);
char	*ft_hextoa(unsigned int n);
int		ft_printf_hexcapital(unsigned int n);

int		ft_printf_addr(unsigned long n);
char	*ft_addrtoa(unsigned long n);

int		ft_getarg(va_list *ap, const char type);
int		ft_printf(const char *format, ...);

int		ft_atoi(const char *nptr);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t len);
char	*ft_strnstr(const char *big, const char *little, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *b, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *str);
void	*ft_calloc(size_t number, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strtrim(char const *s1, char const *set);
void	*ft_memchr(const void *b, int c, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

#endif