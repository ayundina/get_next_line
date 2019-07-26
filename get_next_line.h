/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ayundina <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/18 16:52:42 by ayundina      #+#    #+#                 */
/*   Updated: 2019/02/18 17:00:15 by ayundina      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include "libft/libft.h"

# define BUFF_SIZE 50

int					get_next_line(const int fd, char **line);

typedef struct		s_l
{
	char			*tmp;
	char			*s[1042];
	int				nl[1042];
}					t_l;

#endif
