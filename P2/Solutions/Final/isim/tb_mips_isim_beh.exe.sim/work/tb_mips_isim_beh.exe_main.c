/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003680232174_2058220583_init();
    work_m_00000000000255183948_0886308060_init();
    work_m_00000000001472540035_1292031434_init();
    work_m_00000000003625246146_3515808994_init();
    work_m_00000000000557550355_1250343676_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000557550355_1250343676");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
