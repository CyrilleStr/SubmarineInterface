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
	this->name = "Temperature";
	this->m_logFileName = "temperatureLog.txt";
	this->m_unit ="degre celsius";
	this->frequency = 1000;
}

Temperature::~Temperature(){};



