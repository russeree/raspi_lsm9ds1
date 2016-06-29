// Reese Russell

#include "lsm9ds1_dev.h"

// Magnetometer Consturctor
Lsm9ds1Mag::Lsm9ds1Mag()
{
}

// Magnetometer Desturctor
Lsm9ds1Mag::~Lsm9ds1Mag()
{
}

void Lsm9ds1Mag::write_byte_with_offset(char *byte, char *data, int offset)
{
    // Generate the mask;   
    byte[0] = ((data[0] >> offset) & 0xFF) & byte[0];

}

Lsm9ds1Mag::CtrlReg1M::CtrlReg1M()
{
}

Lsm9ds1Mag::CtrlReg1M::~CtrlReg1M()
{
}






