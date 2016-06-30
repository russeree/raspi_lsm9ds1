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
    // Template Class for Register Segments 
    public:
        template <class a_type> class reg_params
        {
            public:
                reg_params();
                reg_params(char location, int offset, a_type data); 
                virtual ~reg_params();
            protected:
                char location;
                int offset;
                a_type data;
        };

    // (Con/De)structors
    public:
        Lsm9ds1Mag();
        virtual ~Lsm9ds1Mag();
        static void write_byte_with_offset(char *byte, char data, int offset);
        static void write_byte(char *byte, char *data);
        static bool bool_to_char(bool *input);
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
                void init(bool temp_comp, char op_mode, char do_rate, bool fast_odr, bool self_test);
                void gen_register(void);
            // Register Frame Varibles
            public:
                bool temp_comp;
                char op_mode;
                char do_rate;
                bool fast_odr;
                bool self_test;
                char reg_read;
                char reg_write;
        };

    // Register State Storage 
    public:
        CtrlReg1M ctrl_reg_1_m;
};

#endif 
