/*
 * NetworkTablesInterface.h
 *
 *  Created on: Nov 12, 2016
 *      Author: Steven
 */

#ifndef NETWORKTABLESINTERFACE_H_
#define NETWORKTABLESINTERFACE_H_

class NetworkTablesInterface {
public:
	NetworkTablesInterface();
	virtual ~NetworkTablesInterface();
	static bool targetFound();
	static double GetDistance();
	static double GetAzimuth(); //the angle the target is at (horizontally not vertically)
	static double GetAltitude();//the angle the target is at(vertically not horizontally)

};

#endif /* NETWORKTABLESINTERFACE_H_ */
