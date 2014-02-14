/*
  DummyDevice.cpp - I2CMaster Library for Embedded Linux Boards
  acting as I2C Master.

  Copyright (c) 2014 Brent Strysko.  All right reserved.
*/

#include "DummyDevice.h"
   
DummyDevice::DummyDevice(I2CBus* bus, uint8_t address) : I2CDevice(bus, address)
{

}

uint16_t DummyDevice::readRegister2()
{
	uint16_t v;
	i2cRead(REGISTER_2, (uint8_t*)&v, 2);
	return v;
}

void DummyDevice::writeRegister2(bool flag, uint16_t v)
{
	uint8_t buf[3];
	buf[0] = flag;
	buf[1] = (uint8_t)((v >> 8) & 0xFF);
	buf[2] = (uint8_t)v;
	i2cWrite(REGISTER_2, buf, 3);
}

uint8_t DummyDevice::readRegister5()
{
	uint8_t v;
	i2cRead(REGISTER_2, &v, 1);
	return v;
}

void DummyDevice::writeRegister5(uint16_t v)
{
	i2cWrite(REGISTER_5, (uint8_t*)(&v), 2);
}
