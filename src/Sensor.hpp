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
#include <string>

class Sensor {
	protected:
		int m_min;
		int m_max;
		int m_frequency;
		std::string m_name;
		std::string m_logFileName;
		std::string m_unit;
		
		/**
		 * @brief Get the Unit object
		 * 
		 * @return string : the Unit object
		 */
		std::string getUnit();
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
		std::string getData();

		/**
		 * @brief generate a lucky integer within a given range [min;max]
		 * 
		 * @return int : the lucky integer
		 */
		int aleaGenVal();

		/**
		 * @brief Get the Log File Name object
		 * 
		 * @return string : the LogFile name
		 */
		std::string getLogFileName();

		/**
		 * @brief Get the Frequency object
		 * 
		 * @return int : the frequency
		 */
		int getFrequency();

		/**
		 * @brief Get the Name object
		 * 
		 * @return std::string 
		 */
		std::string getName();
};

#endif /* SENSOR_HPP_ */
