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

int Sensor::getData()
{
	return this->aleaGenVal();
}

int Sensor::aleaGenVal()
{
	return rand() % (this->max - this->min) + this->min;
}

int Sensor::getDataType()
{
	return this->dataType;
}

