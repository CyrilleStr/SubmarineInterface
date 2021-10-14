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
Sensor<T>::Sensor(const Sensor& s)
{
	this->m_min = s.m_min;
	this->m_max = s.m_max;
	this->m_frequency = s.m_frequency;
	this->m_name = s.m_name;
	this->m_logFileName = s.m_logFileName;
	this->m_unit = s.m_unit;
}

template <typename T>
Sensor<T>& Sensor<T>::operator=(const Sensor& s)
{
	this->m_min = s.m_min;
	this->m_max = s.m_max;
	this->m_frequency = s.m_frequency;
	this->m_name = s.m_name;
	this->m_logFileName = s.m_logFileName;
	this->m_unit = s.m_unit;
	return *this;
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

// Instantiations des classes template pour que le compilateur les compile
template class Sensor<int>;
template class Sensor<bool>;
template class Sensor<float>;