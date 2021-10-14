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
#include <iostream>

template <typename T> 
class Sensor 
{
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
		 * @brief Construct a new Sensor object
		 * 
		 */
		Sensor(const Sensor&);

		/**
		 * @brief 
		 * 
		 * @return Sensor& 
		 */
		Sensor& operator=(const Sensor&);

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
		 * @brief 
		 * 
		 * @return T 
		 */
		virtual T aleaGenVal() = 0;

		/**
		 * @brief Get the Log File Name object
		 * 
		 * @return string : the LogFile name
		 */
		std::string getLogFileName();

		/**
		 * @brief Change the frequency to que sensor's data
		 * 
		 * @param frequency 
		 */
		void changeFrequency(int frequency_p);

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
