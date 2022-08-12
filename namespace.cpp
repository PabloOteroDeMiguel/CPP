/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:32:57 by potero-d          #+#    #+#             */
/*   Updated: 2022/08/12 11:57:41 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		gl_var = 1;
int		f( void ) { return 2; }


namespace	Foo{

	int		gl_var = 3;
	int		f( void ) { return 4; }

}

namespace	Bar {

	int 	gl_var = 5;
	int		f( void ) { return 6; }

}

namespace Muf = Bar;

int		main( void ) {

	printf( "gl_var:	[%d]\n", gl_var);
	printf( "fd():	[%d]\n\n", f());

	printf( "Foo::gl_var:	[%d]\n", Foo::gl_var);
	printf( "Foo::fd():	[%d]\n\n", Foo::f());

	printf( "Bar::gl_var:	[%d]\n", Bar::gl_var);
	printf( "Bar::fd():	[%d]\n\n", Bar::f());

	printf( "Muf::gl_var:	[%d]\n", Muf::gl_var);
	printf( "Muf::fd():	[%d]\n\n", Muf::f());

	printf( "::gl_var:	[%d]\n", ::gl_var);
	printf( "::fd():	[%d]\n\n", ::f());

	return 0;
}
