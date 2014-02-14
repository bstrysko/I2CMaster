/*
  DummyDevice.h - I2CMaster Library for Embedded Linux Boards
  acting as I2C Master.

  Copyright (c) 2014 Brent Strysko.  All right reserved.
*/

#ifndef _I2C_MASTER_EXAMPLES_DUMMY_DEVICE_H_
#define _I2C_MASTER_EXAMPLES_DUMMY_DEVICE_H_

#include <I2CMaster/I2CBus.h>
#include <I2CMaster/I2CDevice.h>

#define REGISTER_2 0x2
// Slave Device Register 2 will send 2 bytes on read
// and take 3 bytes on write

#define REGISTER_5 0x5
// Slave Device Register 5 will send 1 bytes on read
// and take 2 bytes on write

class DummyDevice : I2CDevice
{
  public:
    DummyDevice(I2CBus* bus, uint8_t address);

    uint16_t readRegister2();
    void writeRegister2(bool flag, uint16_t v);

    uint8_t readRegister5();
    void writeRegister5(uint16_t v);
};

#endif
