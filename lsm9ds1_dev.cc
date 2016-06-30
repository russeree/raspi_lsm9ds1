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

/*
 * @param: Pointer to the byte to be modified.
 * @param: Input data to be writted onto *byte.
 * @param: Offset big endian for bits to be shifted in from the right.
 */
void Lsm9ds1Mag::write_byte_with_offset(char *byte, char data, int offset)
{
    // Generate the mask;   
    byte[0] = ((data >> offset) & 0xFF) & byte[0];

}

/*
 * @param: Boolean Value to Convert to Char
 */
bool Lsm9ds1Mag::bool_to_char(bool *input)
{
    char output; 
    if (input[0])
    {
        output = 0x01;
    }
    else
    {
        output = 0x00;
    }
    return output;
}

Lsm9ds1Mag::CtrlReg1M::CtrlReg1M()
{
}

Lsm9ds1Mag::CtrlReg1M::~CtrlReg1M()
{
}

void Lsm9ds1Mag::CtrlReg1M::init(bool temp_comp, char op_mode, char do_rate, bool fast_odr, bool self_test)
{
    this -> temp_comp = temp_comp;
    this -> op_mode = op_mode;
    this -> do_rate = do_rate;
    this -> fast_odr = fast_odr;
    this -> self_test = self_test;
}

void Lsm9ds1Mag::CtrlReg1M::gen_register(void)
{
    Lsm9ds1Mag::write_byte_with_offset(&(this -> reg_write), Lsm9ds1Mag::bool_to_char(&(this -> temp_comp)), TEMP_COMP_OS);
    Lsm9ds1Mag::write_byte_with_offset(&(this -> reg_write), this -> op_mode, OM_OS);
    Lsm9ds1Mag::write_byte_with_offset(&(this -> reg_write), this -> do_rate, DO_OS);
    Lsm9ds1Mag::write_byte_with_offset(&(this -> reg_write), Lsm9ds1Mag::bool_to_char(&(this -> fast_odr)), FAST_ODR_OS);
    Lsm9ds1Mag::write_byte_with_offset(&(this -> reg_write), Lsm9ds1Mag::bool_to_char(&(this -> self_test)), ST_OS);
}
