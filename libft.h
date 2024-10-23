/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhia <mbouhia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:08:49 by mbouhia           #+#    #+#             */
/*   Updated: 2024/10/23 14:08:04 by mbouhia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
typedef struct s_list 
{
 void *content;
 struct s_list  *next;
} t_list;
int		ft_atoi(const char *str);
void	ft_putendl_fd(char const *s,int fd);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstlast(t_list *lst);
void ft_lstclear(t_list **lst,void (*del)(void *));
void ft_lstdelone(t_list *lst, void (*del)(void *));
t_list *ft_lstnew(void *content);
char *ft_substr(char const *s,unsigned int start,size_t len);
void ft_lstadd_back(t_list **lst,t_list *new);
void ft_lstadd_front(t_list **lst,t_list *new);
int ft_lstsize(t_list *lst);
char *ft_strmapi(char const *s, char (*f)(unsigned int,char));
void	ft_putnbr_fd(int n,int fd);
char	*ft_itoa(int n);
void	ft_putstr_fd(char const *s,int fd);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_putchar_fd(char c,int fd);
char	*ft_strnstr(const char *str, const char *to_find, size_t size);
void	ft_putnbr(int n);
size_t	ft_numlen(int n);
void	ft_putchar(char c);
void	ft_putendl(char const *s);
void	ft_putstr(char const *s);
size_t	ft_countwords(char *str, char c);
int		ft_issep(char c, char *charset);
char	**ft_split(char *str, char c);
char	*ft_strndup(const char *src, size_t size);
size_t	ft_wordlen(const char *str, char c);
void	ft_strclr(char *s);
char	*ft_strtrim(char const *s,char const *set);
int		ft_strequ(char const *s1, char const *s2);
void	ft_strdel(char **as);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strnew(size_t size);
void	ft_memdel(void **ap);
int		ft_isspace(int c);
int		ft_isalnum(int c);
void	ft_bzero(void *s, size_t n);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strcat(char *dest, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *src);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strncat(char *dest, const char *src, size_t nb);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strstr(const char *str, const char *to_find);
int		ft_tolower(int c);
int		ft_isupper(int c);
int		ft_toupper(int c);
int		ft_islower(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
#endif
