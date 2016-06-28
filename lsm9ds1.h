// Reese Russell
// LSM9DS1 I2X RasPi Access Registers Header

#ifndef LMS9DS1
#define LSM9DS1

//-------NAME-----------------ADDR-----TYPE------DEFAULT---------NOTES
//  ACCEL/GYRO 
#define AG_ACT_THS            0x04   // RW
#define AG_DUR_THS            0x05   // RW
#define AG_INT_GEN_CFG_XL     0x06   // RW
#define AG_INT_GEN_THS_X_XL   0x07   // RW 
#define AG_INT_GEN_THS_Y_XL   0x08   // RW
#define AG_INT_GEN_THS_Z_XL   0x09   // RW
#define AG_INT_GEN_DUT_XL     0x0A   // RW
#define AG_REFERENCE_G        0x0B   // RW
#define AG_INT1_CTRL          0x0C   // RW
#define AG_INT2_CTRL          0x0D   // RW 
#define AG_WHO_AM_I           0x0F   // R       01101000
#define AG_CRTL_REG1_G        0x10   // RW
#define AG_CTRL_REG2_G        0x11   // RW
#define AG_CTRL_REG3_G        0x12   // RW
#define AG_ORIENT_CFG_G       0x13   // RW
#define AG_INT_GEN_SRC_G      0x14   // R                        OUTPUT
#define AG_OUT_TEMP_L         0x15   // R                        OUTPUT
#define AG_OUT_TEMP_H         0x16   // R                        OUTPUT
#define AG_STATUS_REG_0       0x17   // R                        OUTPUT
#define AG_OUT_X_L_G          0x18   // R                        OUTPUT
#define AG_OUT_X_H_G          0x19   // R                        OUTPUT
#define AG_OUT_Y_L_G          0x1A   // R                        OUTPUT
#define AG_OUT_Y_H_G          0x1B   // R                        OUTPUT
#define AG OUT_Z_L_G          0x1C   // R                        OUTPUT
#define AG_OUT_Z_H_G          0x1D   // R                        OUTPUT
#define AG_CTRL_REG4          0x1E   // RW      00111000
#define AG_CTRL_REG5_XL       0x1F   // RW      00111000
#define AG_CTRL_REG6_XL       0x20   // RW
#define AG_CTRL_REG7_XL       0x21   // RW
#define AG_CTRL_REG8          0x22   // RW
#define AG_CTRL_REG9          0x23   // RW
#define AG_CTRL_REG10         0x24   // RW
#define AG_INT_GEN_SRC_XL     0x26   // R                        OUTPUT
#define AG_STATUS_1           0x27   // R                        OUTPUT
#define AG_OUT_X_L_XL         0x28   // R                        OUTPUT  
#define AG_OUT_X_H_XL         0x29   // R                        OUTPUT
#define AG_OUT_Y_L_XL         0x2A   // R                        OUTPUT
#define AG_OUT_Y_H_XL         0x2B   // R                        0UTPUT
#define AG_OUT_Z_L_XL         0x2C   // R                        OUTPUT
#define AG_OUT_Z_H_XL         0x2D   // R                        OUTPUT
#define AG_FIFO_CTRL          0x2E   // RW
#define AG_FIFO_SRC           0x2F   // R                        OUTPUT
#define AG_INT_GEN_CFG_G      0x30   // RW
#define AG_INT_GEN_THS_XH_G   0x31   // RW
#define AG_INT_GEN_THS_XL_G   0x32   // RW
#define AG_INT_GEN_THS_YH_G   0x33   // RW
#define AG_INT_GEN_THS_YL_G   0x34   // RW
#define AG_INT_GEN_THS_ZH_G   0x35   // RW
#define AG_INT_GEN_THS_ZL_G   0x36   // RW
#define AG_INT_GEN_DUR_G      0x37   // RW

// MAG
#define MAG_OFFSET_X_REG_L_M  0x05   // RW
#define MAG_OFFSET_X_REG_H_M  0x06   // RW
#define MAG_OFFSET_Y_REG_L_M  0x07   // RW
#define MAG_OFFSET_Y_REG_H_M  0x08   // RW
#define MAG_OFFSET_Z_REG_L_M  0x09   // RW
#define MAG_OFFSET_Z_REG_H_M  0x0A   // RW
#define MAG_WHO_AM_I_M        0x0F   // R       00111101
#define MAG_CTRL_REG1_M       0x20   // RW      00010000
#define MAG_CTRL_REG2_M       0x21   // RW
#define MAG_CTRL_REG3_M       0x22   // RW      00000011
#define MAG_CTRL_REG4_M       0x23   // RW
#define MAG_CTRL_REG5_M       0x24   // RW
#define MAG_STATUS_REG_M      0x27   // R       00100111
#define MAG_OUT_X_L_M         0x28   // R       00101000
#define MAG_OUT_X_H_M         0x29   // R       00101001
#define MAG_OUT_Y_L_M         0x2A   // R       00101010
#define MAG_OUT_Y_H_M         0x2B   // R       00101011
#define MAG_OUT_Z_L_M         0x2C   // R       00101100
#define MAG_OUT_Z_H_M         0x2D   // R       00101101
#define MAG_INT_CFG_M         0x30   // RW
#define MAG_INT_SRC_M         0x31   // R
#define MAG_INT_THS_L_M       0x32   // R#define MAG_INT_THS_H_M #endif
#define MAG_INT_THS_H_M #endif

#endif
