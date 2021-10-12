/**
 * @Author Cyrille Stroesser
 * @file Sound.cpp
 * @date 28/90/2021
 */

#include "Sound.hpp"

Sound::Sound() {
	this->m_max = 90;
	this->m_min = 85;
	this->m_name = "Son";
	this->m_logFileName ="soundLog.txt";
	this->m_unit = "dB";
	this->m_frequency = 1000;
}

Sound::~Sound() {}

float Sound::aleaGenVal()
{
	return 5.3;
}

