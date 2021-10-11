/**
 * @Author Cyrille Stroesser
 * @file Sensor.cpp
 * @date 27/90/2021
  */

#include "Sensor.hpp"

Sensor::Sensor() {
	srand(time(NULL));
}

Sensor::~Sensor() {}

std::string Sensor::getData()
{
	std::string data = std::to_string(this->aleaGenVal()) + " " + this->getUnit();
	return data;
}

int Sensor::aleaGenVal()
{
	return rand() % (this->m_max - this->m_min) + this->m_min;
}

std::string Sensor::getUnit()
{
	return this->m_unit;
}

std::string Sensor::getLogFileName()
{
	return this->m_logFileName;
}

int Sensor::getFrequency()
{
	return this->m_frequency;
}

std::string Sensor::getName()
{
	return this->m_name;
}
