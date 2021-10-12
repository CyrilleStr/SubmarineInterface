/**
 * @Author Cyrille Stroesser
 * @file Humidity.hpp
 * @date 28/90/2021
 * @brief class inherited form Sensor use to represent and generate data of humidity type.
 */

#ifndef HUMIDITY_HPP_
#define HUMIDITY_HPP_

#include "Sensor.hpp"

class Humidity : public Sensor<int>{
public:
	/**
	 * @brief Humidity's constructor
	 * 
	 */
	Humidity();

	/**
	 * @brief Humidity's destructor
	 * 
	 */
	virtual ~Humidity();

	/**
	 * @brief 
	 * 
	 * @return int 
	 */
	int aleaGenVal();
};

#endif /* HUMIDITY_HPP_ */
