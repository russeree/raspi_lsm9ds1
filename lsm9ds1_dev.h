#ifndef LSM9DS1_MAG_DEV
#define LSM9DS1_MAG_DEV

#include "lsm9ds1.h"
#include <iostream>

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
    // Template Class for Register Segments 
    public:
        template <class a_type> class reg_params
        {
            public:
                reg_params();
                reg_params(unsigned char location, unsigned int offset, unsigned int size, a_type data); 
                virtual ~reg_params();
            protected:
                unsigned char location;
                int offset;
                a_type data;
        };

    // (Con/De)structors
    public:
        Lsm9ds1Mag();
        virtual ~Lsm9ds1Mag();
        static void write_byte_with_offset(unsigned char &byte, unsigned char data, int offset, int size);;
        static unsigned char  bool_to_char(bool &input);
    // Sensor Outputs
    private:
        // Sensor Outputs
        short gx, gy, gz; 
        short ax, ay, az;
        short mx, my, mz;
        short temp;

    // Classes for registers;
    public:
        /*
         * Ctrl_Reg_1M Class:
         * @desc: A register containg the contents of the Control Register 1
         */
        class CtrlReg1M
        {
            // Functions and Constructors
            public:
                CtrlReg1M();
                virtual ~CtrlReg1M();
                void init(bool temp_comp, unsigned char op_mode, unsigned char do_rate, bool fast_odr, bool self_test);
                void gen_register(void);
            // Register Frame Varibles
            public:
                bool temp_comp;
                unsigned char op_mode;
                unsigned char do_rate;
                bool fast_odr;
                bool self_test;
                unsigned char reg_read;
                unsigned char reg_write;
        };
        /*
         * Ctrl_Reg_2M Class: 
         * @desc: A register containing the contents of the Control Register 2
         */
        class CtrlReg2M
        {
            // Functions
            public:
                CtrlReg2M();
                virtual ~CtrlReg2M();
                void init(bool reboot, bool soft_reset, unsigned char fs);
                void gen_register(void);
            public: 
                bool reboot;
                bool soft_reset;
                unsigned char fs;
                unsigned char reg_read;
                unsigned char reg_write;
        };
    // Register State Storage 
    public:
        CtrlReg1M ctrl_reg_1_m;
        CtrlReg2M ctrl_reg_2_m;
};

#endif 
