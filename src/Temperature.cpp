/**
 * @Author Cyrille Stroesser
 * @file Temperature.cpp
 * @date 28/90/2021
*/

#include "Temperature.hpp"

Temperature::Temperature()
{
	this->m_min = 15;
	this->m_max = 20;
	this->m_name = "Temperature";
	this->m_logFileName = "temperatureLog.txt";
	this->m_unit ="degre celsius";
	this->m_frequency = 1000;
}

Temperature::~Temperature(){};

int Temperature::aleaGenVal()
{
	return 14;
}