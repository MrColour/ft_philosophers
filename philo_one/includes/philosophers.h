/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 11:25:31 by xinu              #+#    #+#             */
/*   Updated: 2020/04/14 20:07:43 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERs_H
# define PHILOSOPHERs_H

/*
** -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-
** HEADERS
*/

# include <pthread.h>
# include <sys/time.h>

# include <unistd.h>

# include <stdio.h>

# include "philosopher_structs.h"
# include "color.h"

/*
** -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-  -_---_-_-
** FILE: utils.c
*/

long long	to_millisec(struct timeval *event);
size_t		llto_ad(long long num, char *dest);
size_t		eto_ad(int event, char *dest);

#endif
