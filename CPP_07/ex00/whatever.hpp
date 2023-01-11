/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 09:00:51 by potero-d          #+#    #+#             */
/*   Updated: 2023/01/11 09:30:25 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T &arg1, T &arg2) {

	T	aux;
	aux = arg1;
	arg1 = arg2;
	arg2 = aux;
}

template <typename T>
T min(T arg1, T arg2) {

	if (arg1 < arg2) {
		return(arg1);
	}
	else {
		return(arg2);
	}
}

template <typename T>
T max(T arg1, T arg2) {

	if (arg1 > arg2) {
		return(arg1);
	}
	else {
		return(arg2);
	}
}

#endif
