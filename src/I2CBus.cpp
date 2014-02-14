/*
  I2CBus.cpp - I2CMaster Library for Embedded Linux Boards
  acting as I2C Master.

  Copyright (c) 2014 Brent Strysko.  All right reserved.
*/

#include "I2CBus.h"

I2CBus::I2CBus(uint32_t id)
{
	this->id = id;
}

I2CBus::~I2CBus()
{

}

uint32_t I2CBus::getID()
{
	return id;
}
