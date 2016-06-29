#ifndef LSM9DS1_MAG_DEV
#define LSM9DS1_MAG_DEV

#include "lsm9ds1.h"

namespace lam9ds1
{
    enum lsm9ds1_axis
    {
        X_AXIS,
        Y_AXIS,
        Z_AXIS,
    };
    enum lsm9ds1_sen
    {
        GYRO,
        ACCEL,
        MAG
    };

}

class Lsm9ds1Mag
{   
    public:
        Lsm9ds1Mag();
        virtual ~Lsm9ds1Mag();
        static void write_byte_with_offset(char *byte, char *data, int offset);
        static void write_byte(char *byte, char *data);
    private:
        // Sensor Outputs
        short gx, gy, gz; 
        short ax, ay, az;
        short mx, my, mz;
        short temp;
    public:
        class CtrlReg1M{
            public:
                CtrlReg1M();
                virtual ~CtrlReg1M();
            public:
                char reg_write;
                char reg_read;
        };
};

#endif 
