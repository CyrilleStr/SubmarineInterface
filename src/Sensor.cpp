/**
 * @Author Cyrille Stroesser
 * @file Sensor.cpp
 * @date 27/90/2021
  */

#include "Sensor.hpp"

template <typename T> 
Sensor<T>::Sensor() {
	srand(time(NULL));
}

template <typename T> 
Sensor<T>::~Sensor() {}

template <typename T> 
std::string Sensor<T>::getData()
{
	std::string data = std::to_string(this->aleaGenVal()) + " " + this->getUnit();
	return data;
}

template <typename T> 
std::string Sensor<T>::getUnit()
{
	return this->m_unit;
}

template <typename T> 
std::string Sensor<T>::getLogFileName()
{
	return this->m_logFileName;
}

template <typename T> 
void Sensor<T>::changeFrequency(int frequency_p)
{
	this->m_frequency = frequency_p;
	std::cout << this->m_frequency << std::endl;
}

template <typename T> 
int Sensor<T>::getFrequency()
{
	return this->m_frequency;
}

template <typename T> 
std::string Sensor<T>::getName()
{
	return this->m_name;
}

// Instations des classes template pour que le compilateur les compile
// (nécessaire car elles ne sont pas instantiés dans le AP4A.cpp)
template class Sensor<int>;
template class Sensor<bool>;
template class Sensor<float>;