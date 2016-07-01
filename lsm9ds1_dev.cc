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
void Lsm9ds1Mag::write_byte_with_offset(unsigned char &byte, unsigned char data, int offset, int size)
{
    for (int i = 0; i < size; i++)
    {
        unsigned char bit_val =  ((data >> i) & 0x01);
        byte = (-bit_val ^ byte) & (1 << (offset + i));
    }
}

/*
 * @param: Boolean Value to Convert to Char
 */
unsigned char Lsm9ds1Mag::bool_to_char(bool &input)
{
    unsigned char output; 
    if (input)
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

void Lsm9ds1Mag::CtrlReg1M::init(bool temp_comp, unsigned char op_mode, unsigned char do_rate, bool fast_odr, bool self_test)
{ 
    this -> temp_comp = temp_comp;
    this -> op_mode = op_mode;
    this -> do_rate = do_rate;
    this -> fast_odr = fast_odr;
    this -> self_test = self_test;
    this -> gen_register();
}

void Lsm9ds1Mag::CtrlReg1M::gen_register(void)
{
    Lsm9ds1Mag::write_byte_with_offset((this -> reg_write), Lsm9ds1Mag::bool_to_char((this -> temp_comp)), TEMP_COMP_OS, TEMP_COMP_SZ);
    Lsm9ds1Mag::write_byte_with_offset((this -> reg_write), this -> op_mode, OM_OS, OM_SZ);
    Lsm9ds1Mag::write_byte_with_offset((this -> reg_write), this -> do_rate, DO_OS, DO_SZ);
    Lsm9ds1Mag::write_byte_with_offset((this -> reg_write), Lsm9ds1Mag::bool_to_char((this -> fast_odr)), FAST_ODR_OS, FAST_ODR_SZ);
    Lsm9ds1Mag::write_byte_with_offset((this -> reg_write), Lsm9ds1Mag::bool_to_char((this -> self_test)), ST_OS, ST_SZ);
}
