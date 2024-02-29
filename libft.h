/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamtaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:40:56 by rlamtaou          #+#    #+#             */
/*   Updated: 2024/02/25 21:41:02 by rlamtaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFFER_SIZE 500

typedef struct stack
{
	int				value;
	int				i;
	struct stack	*next;

}					t_stack;

typedef struct element
{
	char			**av_data;
	long			argc;
	char			*str;
	int				x_index_str;
	long			var_x;
	t_stack			*head_stack_a;
	t_stack			*head_stack_b;
	int				*sort_array;
	t_stack			**node;
	long int		value;
	long			size_arr;
	long			fl;

}					t_info;

void				parsing(t_info *data);
void				ft_atoi(const char *nptr, t_info *data);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t nmemb, size_t size);
void				ft_lst_add_back(t_stack **t_stack_a, t_stack *node);
t_stack				*ft_lstnew(long *content, t_info *data);
char				**ft_split(char const *s, char c);
char				*ft_strdup(const char *s);
char				*ft_strjoin(char *s1, char *s2);
size_t				ft_strlen(const char *s);
void				ft_error(t_info *data, int num_error);
long				ft_strlen_lst(t_info *data, char name_t_stack);
void				ft_pa(t_info *data, int flag);
void				ft_pb(t_info *data, int flag);
void				ft_lstadd_front(t_stack **lst, t_stack *new);
void				ft_sa(t_info *data, int flag);
void				ft_sb(t_info *data, int flag);
void				ft_ss(t_info *data, int flag);
void				ft_ra(t_info *data, int flag);
void				ft_rb(t_info *data, int flag);
void				ft_rr(t_info *data, int flag);
void				ft_rra(t_info *data, int flag);
void				ft_rrb(t_info *data, int flag);
void				ft_rrr(t_info *data, int flag);
void				ft_end(t_info *data);
void				ft_sort_list(t_info *data);
long				ft_strlen_lst(t_info *data, char name_t_stack);
void				del(int *value);
void				ft_lstclear(t_stack **lst, void (*del)(int *));
void				ft_lstdelone(t_stack *lst, void (*del)(int *));
void				ft_error(t_info *data, int num_error);
void				ft_intial(t_info *data);
void				ft_end(t_info *data);
int					ft_is_sort(t_stack *tmp);
int					ft_biger(t_info *data);
void				ft_index(t_info *data);
int					ft_cheak_position(t_info *data, int i, t_stack *tmp,
						char c);
void				ft_sort_3(t_info *data);
void				ft_sort_5(t_info *data);
int					ft_strcmp(const char *s1, const char *s2);
char				*get_next_line(int fd);
char				*get_alls(int fd, char *buffer);
char				*ft_strdup(const char *s);
char				*ft_strchr(const char *s, int c);
char				*get_liness(char *buffer);
char				*add_next_line(char *buffer);

#endif
