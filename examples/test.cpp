/*
  test.cpp - I2CMaster Library for Embedded Linux Boards
  acting as I2C Master.

  Copyright (c) 2014 Brent Strysko.  All right reserved.
*/

#include <iostream>
#include <exception>

#include <I2CMaster/I2CBus.h>
#include <I2CMaster/I2CDevice.h>

#include "DummyDevice.h"

#define DUMMY_DEVICE_I2C_ADDRESS 0x10

using namespace std;

int main()
{
	I2CBus bus(1);

	cout << (int)bus.getID() << endl;

	try
	{
		DummyDevice device(&bus, DUMMY_DEVICE_I2C_ADDRESS);

		// Read operations
		cout << (int)device.readRegister2() << endl;
		cout << (int)device.readRegister5() << endl;

		// Write operations
		device.writeRegister2(false, 0x20);
		device.writeRegister5(0x30);
	}
	catch(ios_base::failure& e)
	{
		cout << "Exception Thrown!" << endl;
		cout << e.what() << endl;
	}

	return 0;
}
