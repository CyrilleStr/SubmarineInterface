/**
 * @Author Cyrille Stroesser
 * @file Sensor.hpp
 * @date 27/90/2021
 * @brief Abstract class use to create humidity, temperature, sound and light type
 */

#ifndef SENSOR_HPP_
#define SENSOR_HPP_

#include <cstdlib>
#include <time.h>

class Sensor {
	protected:
		int min;
		int max;
		int dataType; // 1=temperature, 2=humidity, 3=sound, 4=light
	public:
		/**
		 * @brief Construct a new Sensor object
		 * 
		 */
		Sensor();

		/**
		 * @brief Destroy the Sensor object
		 * 
		 */
		virtual ~Sensor();

		/**
		 * @brief Get the Data object
		 * 
		 * @return int : the data
		 */
		int getData();

		/**
		 * @brief generate a lucky integer within a given range [min;max]
		 * 
		 * @return int : the lucky integer
		 */
		int aleaGenVal();

		/**
		 * @brief Get the Data Type object
		 * 
		 * @return int : the data type (1=temperature, 2=humidity, 3=sound, 4=light)
		 */
		int getDataType();
};

#endif /* SENSOR_HPP_ */
