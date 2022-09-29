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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Sajad/Uni/Spring00/CAD/Project/phase 1/single_cycle_cpu/control_unit_tb.v";
static unsigned int ng1[] = {469762026U, 0U};
static unsigned int ng2[] = {67108832U, 0U};
static unsigned int ng3[] = {67108834U, 0U};
static unsigned int ng4[] = {67108836U, 0U};
static unsigned int ng5[] = {67108837U, 0U};
static unsigned int ng6[] = {67108842U, 0U};
static unsigned int ng7[] = {2348810218U, 0U};
static unsigned int ng8[] = {2952789994U, 0U};
static unsigned int ng9[] = {201326570U, 0U};



static void Initial_34_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);

LAB4:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB1;

}


extern void work_m_00000000000530861335_3455515378_init()
{
	static char *pe[] = {(void *)Initial_34_0};
	xsi_register_didat("work_m_00000000000530861335_3455515378", "isim/control_unit_tb_isim_beh.exe.sim/work/m_00000000000530861335_3455515378.didat");
	xsi_register_executes(pe);
}
