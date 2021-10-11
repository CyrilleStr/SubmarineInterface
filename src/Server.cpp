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

void Server::fileWrite(Sensor sensor_p, const time_t now_p)
{
	std::ofstream file("log/" + sensor_p.getLogFileName(),std::ios::app);
	// file.open();
	if(file.is_open())
	{
		std::string time = ctime(&now_p);
		if(time[time.size() - 1] == '\n') time[time.size() - 1] = ')';
		file << sensor_p.getName() << " (" << time << " : " << sensor_p.getData() << std::endl;
	}
	else
	{
		std::cout << "Erreur: impossible d\'ouvrir le ficher de log : " << sensor_p.getData() << std::endl;
	}
	file.close();
}

void Server::consolWrite(Sensor sensor_p,const time_t now_p)
{
	std::string time = ctime(&now_p);
	if(time[time.size() - 1] == '\n') time[time.size() - 1] = '\0';
	std::string cat =  sensor_p.getName() + " (" + time + ") : " + sensor_p.getData() + "\n";
	std::cout << cat;
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



