/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher_structs.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 11:24:55 by xinu              #+#    #+#             */
/*   Updated: 2020/04/14 19:47:25 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHER_STRUCTS_H
# define PHILOSOPHER_STRUCTS_H

enum	events
{
	E_FORK = 0b00001,
	E_EATS = 0b00010,
	E_SLEE = 0b00100,
	E_THIN = 0b01000,
	E_DIED = 0b10000,
	E_NONE = 0b00000
};

#endif
