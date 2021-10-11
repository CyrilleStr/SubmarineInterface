/**
 * @Author Cyrille Stroesser
 * @file Interface.hpp
 * @date 28/90/2021
 * @brief contains all the functions that improve user's visual experience
 */

#ifndef INTERFACE_HPP_
#define INTERFACE_HPP_

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <thread>

using namespace std;

class Interface
{
	public:
	/**
	 * @brief display the top banner of the interface
	 * 
	 */
	void display_banner();

	/**
	 * @brief clear the screen and display the top banner
	 * 
	 */
	void clear();


	/**
	 * @brief display the menu, get and return the user's choice
	 * 
	 * @return int : user's choice 
	 */
	int display_menu();

	/**
	 * @brief wait for the user to press Enter to continue the program
	 * 
	 */
	void waitUser();
};

#endif /* INTERFACE_HPP_ */
