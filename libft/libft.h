/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 19:46:25 by dwilliam          #+#    #+#             */
/*   Updated: 2017/11/15 11:39:42 by dwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include "get_next_line.h"

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, int nbyte);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	ft_strdel(char **as);
void	ft_striter(char *s, void (f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_strclr(char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	*ft_realloc(void *ptr, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t	ft_strlcat(char *dest, const char *src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strstr(const char *big, const char *little);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strnew(size_t size);
char	*ft_strtrim(char const *s);
char	*ft_strsub(char const *s, unsigned int str, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_strsplit(char const *s, char c);
char	*ft_do_neg(int n);
char	*ft_itoa(int n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isalpha(int c);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_count(int n);
int		ft_word_count(char *str);
int		ft_word_length(char *str, int i);
int		is_space(char c);

#endif
