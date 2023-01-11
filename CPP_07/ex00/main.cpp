/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 09:00:53 by potero-d          #+#    #+#             */
/*   Updated: 2023/01/11 15:11:24 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<ostream>
#include "whatever.hpp"


class Awesome
{
	public:
		Awesome(void) : _n(0) {}
		Awesome( int n ) : _n( n ) {}
		Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
		int get_n() const { return _n; }

	private:
		int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) {
	o << a.get_n();
	return o;
}

int main( void ) {

	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

//	std::cout << "min( a, d ) = " << ::min( a, d ) << std::endl;
	Awesome e(2), f(42);
	std::cout << "e: " << e << std::endl;
	std::cout << "f: " << f << std::endl;
	swap(e, f);
	std::cout << "e: " << e << std::endl;
	std::cout << "f: " << f << std::endl;

	std::cout << max(e, f) << std::endl;
	std::cout << min(e, f) << std::endl;


	return 0;
}
