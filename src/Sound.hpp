/**
 * @Author Cyrille Stroesser
 * @file Sound.hpp
 * @date 28/90/2021
 * @brief class inherited form Sensor use to represent and generate data of sound type.
 */

#ifndef SOUND_HPP_
#define SOUND_HPP_

#include "Sensor.hpp"

class Sound: public Sensor<float> 
{
	private:
		
	public:
		/**
		 * @brief Construct a new Sound object
		 * 
		 */
		Sound();

		/**
		 * @brief Destroy the Sound object
		 * 
		 */
		virtual ~Sound();
		
		float aleaGenVal();
};

#endif /* SOUND_HPP_ */
