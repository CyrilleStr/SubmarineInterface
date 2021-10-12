/**
 * @Author Cyrille Stroesser
 * @file Light.cpp
 * @date 28/90/2021
 */

#include "Light.hpp"

Light::Light()
{
	this->m_min = 0;
	this->m_max = 2;
	this->m_name = "Lumiere";
	this->m_logFileName = "lightLog.txt";
	this->m_unit = "lux";
	this->m_frequency = 1000;
}

Light::~Light() {}

bool Light::aleaGenVal()
{
	return true;
}
