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
    Private:
        // Sensor Outputs
        short gx, gy, gz; 
        short ax, ay, az;
        short mx, my, mz;
        short temp;
    public:
        class MagCrtlReg1M
        {
            public:
                MagCtrlReg1M();
                virtual ~MagCtrlReg1M();
                void write_reg(char reg_value);
            private:
                char reg_value_stor;

        };
};

#endif 
