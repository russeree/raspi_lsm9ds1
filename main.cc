// Reese Russell
// LSM9DS1 I2C RasPi I2C Access

#include <unistd.h>
#include <errno.h>
#include <stdio.h> 
#include <stdlib.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <fcntl.h> 

// LSM9DS1 REGISTER MAPPING
#include "lsm9ds1.h"

#define AG_ADDRESS    (0x6B)
#define MAG_ADDRESS   (0x1E)

int main(){
    const char * dev_name = "/dev/i2c-1";
    char *buf;
    buf = new char[10];

    // Open up the I2C bus.
    int file = open(dev_name, O_RDWR);
    if (file == -1)
    {
        perror(dev_name);
        exit(1);
    }

    // Specify the address of the slave device.
    if(ioctl(file, I2C_SLAVE, MAG_ADDRESS) < 0)
    {
        perror("Failed to acquire bus access and/or talk to slave.\n");
        exit(1);
    }

    // Write a byte to the slave. 
    buf[0] = MAG_WHO_AM_I_M;
    if (write(file, buf, 1) != 1)
    {
        perror("Failed to write to the i2c bus");
        exit(1);
    }

    // Read a byte from the slave.
    if (read(file, buf,1) != 1)
    {
        perror("Failed to read from the i2x bus");
        exit(1);
    }

    printf ("Result: %02x\n", buf[0]);

    return 0;
}

