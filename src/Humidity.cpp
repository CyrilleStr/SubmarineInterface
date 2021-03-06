/**
 * @Author Cyrille Stroesser
 * @file Server.cpp
 * @date 28/90/2021
 */

#include "Humidity.hpp"

Humidity::Humidity()
{
	this->m_min = 40;
	this->m_max = 60;
	this->m_name = "Humdidite";
	this->m_logFileName = "humidityLog.txt";
	this->m_unit = "%";
	this->m_frequency = 1000;
}

Humidity::~Humidity() {}

int Humidity::aleaGenVal()
{
	return 45;
}