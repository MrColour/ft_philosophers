/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 11:58:53 by xinu              #+#    #+#             */
/*   Updated: 2020/04/14 20:08:59 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	main(int aa __attribute__((unused)),
		char **args __attribute__((unused)))
{
	int				result;
	size_t			at;
	struct timeval	curr_time;
	char			buff[100];

	result = gettimeofday(&curr_time, NULL);
	printf("worked: %d\n", result);
	printf("Sec: %ld and micro: %ld\n", curr_time.tv_sec, curr_time.tv_usec);

	long long con = to_millisec(&curr_time);
	printf("Total: %lld\n", con);

	int	event;

	event = E_EATS;
	at = llto_ad(con, buff);
	buff[at++] = ' ';
	at += llto_ad(32, &buff[at]);
	at += eto_ad(event, &buff[at]);

	write(1, buff, at);

	return (0);
}
