// Reese Russell
// LSM9DS1 I2C RasPi I2C Access

#include <errno.h>
#include <stdio.h> 
#include <stdlib.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <fcntl.h> 

// LSM9DS1 REGISTER MAPPING
#include "lsm9ds1.h"

#define MAG_ADDRESS   (0x3C >> 1)

int main(){
    return 0;
}

