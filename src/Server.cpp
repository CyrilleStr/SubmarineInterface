/**
 * @Author Cyrille Stroesser
 * @file Server.cpp
 * @date 27/90/2021
 */


#include "Server.hpp"

Server::Server():
	consolActivation(true),
	logActivation(true)
{
	this->temperatureLogFile.open("log/temperatureLog.txt");
	this->humidityLogFile.open("log/humidityLog.txt");
	this->soundLogFile.open("log/soundLog.txt");
	this->lightLogFile.open("log/lightLog.txt");
};

Server::Server(bool consolActivation, bool logActivation):
	consolActivation(consolActivation),
	logActivation(logActivation)
{
	this->temperatureLogFile.open("log/temperatureLog.txt");
	this->humidityLogFile.open("log/humidityLog.txt");
	this->soundLogFile.open("log/soundLog.txt");
	this->lightLogFile.open("log/lightLog.txt");
};

Server::~Server(){
	temperatureLogFile.close();
	humidityLogFile.close();
	soundLogFile.close();
	lightLogFile.close();
};

Server::Server(const Server& s)
{
	this->logActivation = s.logActivation;
	this->consolActivation = s.consolActivation;
}

void Server::operator=(Server& s)
{
	this->consolActivation = s.consolActivation;
	this->logActivation = s.logActivation;
}

void Server::fileWrite(int dataType, int dataValue, int time)
{
	std::ofstream* logFile;

	switch(dataType)
		{
			case 1:
			{
				logFile = &this->temperatureLogFile;
			}
			break;
			case 2:
			{
				logFile = &this->humidityLogFile;
			}
			break;
			case 3:
			{
				logFile = &this->soundLogFile;
			}
			break;
			case 4:
			{
				logFile = &this->lightLogFile;
			}
			break;
			default:
				std::cout << "Erreur: DataType inconnu";
		}

	if(logFile->is_open())
	{
		*logFile << "Temps: "<< time << " secondes : " << dataValue << "\n";
	}
	else {
		std::cout << "Erreur: impossible d'ouvrir le ficher de log " << std::endl;
	}

}

void Server::consolWrite(int dataType, int dataValue)
{

	std::cout << "\t" << this->getDataName(dataType) << ": " << dataValue << std::endl;
}

void Server::changeStatusConsol(bool status)
{
	this->consolActivation = status;
}

void Server::changeStatusLog(bool status)
{
	this->logActivation = status;
}

bool Server::getStatusConsol()
{
	return this->consolActivation;
}

bool Server::getStatusLog()
{
	return this->logActivation;
}

char* Server::getDataName(int dataType)
{
	char* dataName;
	switch(dataType)
	{
		case 1:
		{
			dataName = "Temperature";
		}
		break;
		case 2:
		{
			dataName = "Humidite";
		}
		break;
		case 3:
		{
			dataName = "Bruit";
		}
		break;
		case 4:
		{
			dataName = "Lumiere";
		}
		break;
		default:
			dataName = "Erreur";
	}
	return dataName;
}



