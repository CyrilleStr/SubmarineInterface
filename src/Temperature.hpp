/**
 * @Author Cyrille Stroesser
 * @file Temperature.hpp
 * @date 28/90/2021
 * @brief class inherited form Sensor use to represent and generate data of temperature type.
 */

#ifndef TEMPERATURE_HPP_
#define TEMPERATURE_HPP_

#include "Sensor.hpp"

class Temperature : public Sensor{
public:
	/**
	 * @brief Construct a new Temperature object
	 * 
	 */
	Temperature();

	/**
	 * @brief Destroy the Temperature object
	 * 
	 */
	virtual ~Temperature();
};

#endif /* TEMPERATURE_HPP_ */
