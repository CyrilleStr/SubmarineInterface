/**
 * @Author Cyrille Stroesser
 * @file Sound.hpp
 * @date 28/90/2021
 * @brief class inherited form Sensor use to represent and generate data of sound type.
 */

#ifndef SOUND_HPP_
#define SOUND_HPP_

#include "Sensor.hpp"

class Sound: public Sensor {
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
};

#endif /* SOUND_HPP_ */
