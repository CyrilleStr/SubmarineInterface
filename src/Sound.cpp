/**
 * @Author Cyrille Stroesser
 * @file Sound.cpp
 * @date 28/90/2021
 */

#include "Sound.hpp"

Sound::Sound() {
	this->m_max = 90;
	this->m_min = 85;
	this->name = "Son";
	this->m_logFileName ="soundLog.txt";
	this->m_unit = "dB";
	this->frequency = 1000;
}

Sound::~Sound() {}

