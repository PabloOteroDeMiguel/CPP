/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:52:23 by potero            #+#    #+#             */
/*   Updated: 2022/10/21 13:00:02 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>


int main() {

  // current date/time based on current system
   time_t now = time(0);

   std::cout << "Number of sec since January 1,1970 is:: " << now << std::endl;

   tm *ltm = localtime(&now);

   // print various components of tm structure.
   std::cout << "Year:" << 1900 + ltm->tm_year<< std::endl;
   std::cout << "Month: "<< 1 + ltm->tm_mon<< std::endl;
   std::cout << "Day: "<< ltm->tm_mday << std::endl;
   std::cout << "Time: "<< ltm->tm_hour << ":";
   std::cout << ltm->tm_min << ":";
   std::cout << ltm->tm_sec << std::endl;
}
