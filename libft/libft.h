/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaghdas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 13:59:58 by dbaghdas          #+#    #+#             */
/*   Updated: 2021/02/15 17:22:48 by dbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

int					ft_atoi(const char *str);

void				ft_bzero(void *str, size_t n);

void				*ft_calloc(size_t count, size_t size);

void 				ft_error(char *str);

int					ft_isalnum(int ch);

int					ft_isalpha(int ch);

int					ft_isascii(int ch);

int					ft_isdigit(int ch);

int 				ft_isspace (char c);

int					ft_isprint(int ch);

void				*ft_memccpy(void *dest, const void *src, int c, size_t n);

void				*ft_memchr(const void *str, int c, size_t n);

int					ft_memcmp(const void *s1, const void *s2, size_t n);

void				*ft_memcpy(void *dest, const void *src, size_t n);

void				*ft_memmove(void *dest, const void *src, size_t n);

void				*ft_memset(void *str, int ch, size_t n);

void				ft_putchar_fd(char c, int fd);

void				ft_putendl_fd(char *s, int fd);

void				ft_putnbr_fd(int n, int fd);

void				ft_putstr_fd(char *s, int fd);

char				**ft_split(char const *s, char c);

char				*ft_strchr(const char *str, int c);

char				*ft_strdup(const char *src);

char				*ft_strjoin(char *s1, char *s2);

size_t				ft_strlcat(char *dest, const char *src, size_t size);

size_t				ft_strlcpy(char *dest, const char *src, size_t size);

size_t				ft_strlen(const char *str);

void				ft_swap(int *a, int *b);

char				*ft_itoa(int n);

int					ft_has_space(char *str);


void 				ft_free_matrix(int **matrix, int size);

void 				ft_free_str(char **str);

void				ft_rev_int_arr(int *arr, int size);

int					ft_strncmp(const char *s1, const char *s2, size_t n);

char				*ft_strnstr(const char *haystack, const char *needle,
								size_t len);

char				*ft_strrchr(const char *str, int c);

char				*ft_strtrim(char const *s1, char const *set);

int					*ft_num_dup(int *src, int size);

char				*ft_substr(char const *s, unsigned int start, size_t len);

int					ft_tolower(int ch);

int					ft_toupper(int ch);

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void 				ft_print_matrix(int **matrix,int row, int column);

t_list				*ft_lstnew(void *content);

void				ft_lstadd_front(t_list **lst, t_list *new);

int					ft_lstsize(t_list *lst);

t_list				*ft_lstlast(t_list *lst);

void				ft_lstadd_back(t_list **lst, t_list *new);

void				ft_lstdelone(t_list *lst, void (*del)(void*));

void				ft_lstclear(t_list **lst, void (*del)(void*));

void				ft_lstiter(t_list *lst, void (*f)(void *));

t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
								void (*del)(void *));

#endif
