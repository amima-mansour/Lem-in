/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amansour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:55:04 by amansour          #+#    #+#             */
/*   Updated: 2017/11/10 15:08:02 by amansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H
# include "../libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# define A          e->a_nbr
# define R          e->r
# define RNBR       e->r_nbr
# define ANTNBR     "Invalid ANTS' NUMBER!\n"
# define INVALIDMAP "INVALID MAP\n"
# define NOSTART    "NO COMMAND START\n"
# define NOEND      "NO COMMAND END\n"
# define WRONGROOM  "WRONG ROMM'S FORMAT\n"

typedef struct	    s_room
{
    char			*name;
    int				x;
    int				y;
    struct s_room	*next;
    struct s_room   *liaison;
    int             start;
    int             end;
}			        t_room;

typedef struct      s_env
{
    t_room          *r;
    int             r_nbr;
    int             a_nbr;
    int             end;
}                   t_env;

int                 main(void);
/*
 * checking
 */
int                 check_nbr_ants(t_env *e, char *line);
int                 check_map(t_env *e, char *line);
void                check_tubes(t_env *e);
/*
 * error
 */
int                 ft_error(char *str);
/*
 *room
 */
void                fill_room(t_env *e, char *str);
void                delete_room(t_room **r);
/*
 * map
 */
void                init_map(t_env *env);
#endif
