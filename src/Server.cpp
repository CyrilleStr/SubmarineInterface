/**
 * @Author Cyrille Stroesser
 * @file Server.cpp
 * @date 27/90/2021
 */


#include "Server.hpp"

Server::Server():
	m_consolActivation(true),
	m_logActivation(true)
{};

Server::Server(bool consolActivation_p, bool logActivation_p):
	m_consolActivation(consolActivation_p),
	m_logActivation(logActivation_p)
{};

Server::~Server(){};

Server::Server(const Server& server_p)
{
	this->m_logActivation = server_p.m_logActivation;
	this->m_consolActivation = server_p.m_consolActivation;
}

void Server::operator=(Server& server_p)
{
	this->m_consolActivation = server_p.m_consolActivation;
	this->m_logActivation = server_p.m_logActivation;
}

template <typename T> void Server::fileWrite(Sensor<T>* sensor_p, const time_t now_p)
{
	std::string time = ctime(&now_p);
	if(time[time.size() - 1] == '\n') time[time.size() - 1] = '\0';
	std::string cat =  sensor_p->getName() + " (" + time + ") : " + sensor_p->getData() + "\n";
	std::cout << cat;
}

template <typename T> void Server::consolWrite(Sensor<T>* sensor_p,const time_t now_p)
{
	std::ofstream file("log/" + sensor_p->getLogFileName(),std::ios::app);
	if(file.is_open())
	{
		std::string time = ctime(&now_p);
		if(time[time.size() - 1] == '\n') time[time.size() - 1] = ')';
		file << sensor_p->getName() << " (" << time << " : " << sensor_p->getData() << std::endl;
	}
	else
	{
		std::cout << "Erreur: impossible d\'ouvrir le ficher de log : " << sensor_p->getData() << std::endl;
	}
	file.close();
}

void Server::changeStatusConsol(bool status_p)
{
	this->m_consolActivation = status_p;
}

void Server::changeStatusLog(bool status_p)
{
	this->m_logActivation = status_p;
}

bool Server::getStatusConsol()
{
	return this->m_consolActivation;
}

bool Server::getStatusLog()
{
	return this->m_logActivation;
}


// Instations des fonctions template pour que le compilateur les compile
// (nécessaire car elles ne sont pas instantiés dans le AP4A.cpp)
template void Server::fileWrite<int>(Sensor<int>* ,const time_t);
template void Server::fileWrite<float>(Sensor<float>* ,const time_t);
template void Server::fileWrite<bool>(Sensor<bool>* ,const time_t);
template void Server::consolWrite<int>(Sensor<int>* ,const time_t);
template void Server::consolWrite<float>(Sensor<float>* ,const time_t);
template void Server::consolWrite<bool>(Sensor<bool>* ,const time_t);