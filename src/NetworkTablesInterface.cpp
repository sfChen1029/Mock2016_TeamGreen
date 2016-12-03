/*
 * NetworkTablesInterface.cpp
 *
 *  Created on: Nov 12, 2016
 *      Author: Steven
 */

#include "NetworkTablesInterface.h"

NetworkTablesInterface::NetworkTablesInterface() {
	// TODO Auto-generated constructor stub

}
bool NetworkTablesInterface::targetFound(){
	return NetworkTable::GetTable("cv")->GetBoolean("targetFound",false);
	//"cv" is the id of the table
	//targetfound is the name of the variable
	//false is the default
}
double NetworkTablesInterface::GetAltitude(){
	return NetworkTable::GetTable("cv")->GetNumber("altitude" , -1.0);
}
double NetworkTablesInterface::GetDistance(){
	return NetworkTable::GetTable("cv")->GetNumber("distance" , -1.0);
}
double NetworkTablesInterface::GetAzimuth(){
	return NetworkTable::GetTable("cv")->GetNumber("azimuth", -1.0);
}
NetworkTablesInterface::~NetworkTablesInterface() {
	// TODO Auto-generated destructor stub
}

