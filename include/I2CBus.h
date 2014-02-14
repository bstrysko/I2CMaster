/*
  I2CBus.h - I2CMaster Library for Embedded Linux Boards
  acting as I2C Master.

  Copyright (c) 2014 Brent Strysko.  All right reserved.
*/

#ifndef _I2C_MASTER_I2C_BUS_H_
#define _I2C_MASTER_I2C_BUS_H_

#include <stdint.h>

class I2CBus
{
  private:
    uint32_t id;
  public:
    I2CBus(uint32_t id);
    ~I2CBus();

    uint32_t getID();
};

#endif
