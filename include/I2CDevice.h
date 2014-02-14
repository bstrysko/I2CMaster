/*
  I2CDevice.h - I2CMaster Library for Embedded Linux Boards
  acting as I2C Master.

  Copyright (c) 2014 Brent Strysko.  All right reserved.
*/

#ifndef _I2C_MASTER_I2C_DEVICE_H_
#define _I2C_MASTER_I2C_DEVICE_H_

#include "I2CBus.h"

#include <iostream>
#include <exception>
#include <sstream>
#include <string>

#include <stdint.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <linux/i2c-dev.h>
#include <unistd.h>

using namespace std;

class I2CDevice
{
  private:
    I2CBus* bus;
    int fd;
    uint8_t address;

    void setRegister(uint8_t reg);

  protected:
    I2CDevice(I2CBus* bus, uint8_t address);

    void i2cRead(uint8_t reg, uint8_t* buffer, size_t buffer_size);
    void i2cWrite(uint8_t reg, uint8_t* buffer, size_t buffer_size);
  public:
    ~I2CDevice();
};

#endif
