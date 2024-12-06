/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:49:18 by alamini           #+#    #+#             */
/*   Updated: 2023/12/18 16:20:48 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 20
# endif
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char	*s1, char	*s2);
void	*ft_strcpy(char *s1, char *s2, char *res);
int		ft_strlen(char *str);
char	*ft_strchr(char *s, int c);
char	*ft_strdup(char *s1);
#endif
