/**
 * @Author Cyrille Stroesser
 * @file Light.hpp
 * @date 28/90/2021
 * @brief class inherited form Sensor use to represent and generate data of light type.
 */

#ifndef LIGHT_HPP_
#define LIGHT_HPP_

#include "Sensor.hpp"

class Light: public Sensor<bool> {
public:
	/**
	 * @brief Construct a new Light object
	 * 
	 */
	Light();

	/**
	 * @brief Destroy the Light object
	 * 
	 */
	virtual ~Light();

	bool aleaGenVal();
};

#endif /* LIGHT_HPP_ */
