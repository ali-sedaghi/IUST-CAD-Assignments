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
static const char *ng0 = "D:/__Term6/CAD/Project/Final/Datapath.v";
static const char *ng1 = "mem.mem";
static unsigned int ng2[] = {4294967295U, 4294967295U};
static const char *ng3 = "Write on memory. address:%h, value:%d";
static int ng4[] = {0, 0};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {3U, 1U};
static int ng9[] = {16, 0};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {7U, 0U};
static unsigned int ng13[] = {12U, 0U};



static void Initial_61_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 6040);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Cont_62_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 7688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1640U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t27 = (t0 + 12576);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t31, 0, 8);
    t32 = 255U;
    t33 = t32;
    t34 = (t3 + 4);
    t35 = *((unsigned int *)t3);
    t32 = (t32 & t35);
    t36 = *((unsigned int *)t34);
    t33 = (t33 & t36);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 | t32);
    t39 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t39 | t33);
    xsi_driver_vfirst_trans(t27, 0, 7);
    t40 = (t0 + 12224);
    *((int *)t40) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 5240);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    goto LAB9;

LAB10:    t23 = (t0 + 5080);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t26, t25, 8);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t18, 32, t26, 32);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_63_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 7936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1800U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t12);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t32 = (t0 + 12640);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t3, 8);
    xsi_driver_vfirst_trans(t32, 0, 31);
    t37 = (t0 + 12240);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 6040);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t20 = (t0 + 6040);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 6040);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 4200U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t19, 32, t18, t22, t25, 2, 1, t27, 8, 2);
    goto LAB9;

LAB10:    t26 = ((char*)((ng2)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t19, 32, t26, 32);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

}

static void Always_69_3(char *t0)
{
    char t15[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    int t26;
    char *t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;

LAB0:    t1 = (t0 + 8184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 12256);
    *((int *)t2) = 1;
    t3 = (t0 + 8216);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);

LAB5:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 1960U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(71, ng0);

LAB9:    xsi_set_current_line(72, ng0);
    t11 = (t0 + 5880);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 6040);
    t17 = (t0 + 6040);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 6040);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 4200U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t24, 8, 2);
    t23 = (t15 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (!(t25));
    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t26 && t29);
    if (t30 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4200U);
    t3 = *((char **)t2);
    t2 = (t0 + 5880);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t0, (char)118, t3, 8, (char)118, t5, 32);
    goto LAB8;

LAB10:    t31 = *((unsigned int *)t15);
    t32 = *((unsigned int *)t16);
    t33 = (t31 - t32);
    t34 = (t33 + 1);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, *((unsigned int *)t16), t34, 0LL);
    goto LAB11;

}

static void Always_81_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 8432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 12272);
    *((int *)t2) = 1;
    t3 = (t0 + 8464);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);

LAB5:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 2280U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(83, ng0);
    t11 = (t0 + 4360U);
    t12 = *((char **)t11);
    t11 = (t0 + 6200);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 32, 0LL);
    goto LAB8;

}

static void Always_86_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 8680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 12288);
    *((int *)t2) = 1;
    t3 = (t0 + 8712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(86, ng0);

LAB5:    xsi_set_current_line(87, ng0);
    t4 = (t0 + 4360U);
    t5 = *((char **)t4);
    t4 = (t0 + 6360);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB2;

}

static void Cont_94_6(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t17[8];
    char t47[8];
    char t54[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;

LAB0:    t1 = (t0 + 8928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 6200);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 21);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 21);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 31U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 31U);
    t16 = ((char*)((ng4)));
    memset(t17, 0, 8);
    t18 = (t5 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB5;

LAB4:    if (t29 != 0)
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t33 = (t17 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t33) != 0)
        goto LAB10;

LAB11:    t40 = (t4 + 4);
    t41 = *((unsigned int *)t4);
    t42 = *((unsigned int *)t40);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB12;

LAB13:    t66 = *((unsigned int *)t4);
    t67 = (~(t66));
    t68 = *((unsigned int *)t40);
    t69 = (t67 || t68);
    if (t69 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t40) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t70, 8);

LAB20:    t71 = (t0 + 12704);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    memcpy(t75, t3, 8);
    xsi_driver_vfirst_trans(t71, 0, 31);
    t76 = (t0 + 12304);
    *((int *)t76) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t17) = 1;
    goto LAB7;

LAB6:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t39 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB11;

LAB12:    t44 = (t0 + 6520);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t48 = (t0 + 6520);
    t49 = (t48 + 72U);
    t50 = *((char **)t49);
    t51 = (t0 + 6520);
    t52 = (t51 + 64U);
    t53 = *((char **)t52);
    t55 = (t0 + 6200);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    memset(t54, 0, 8);
    t58 = (t54 + 4);
    t59 = (t57 + 4);
    t60 = *((unsigned int *)t57);
    t61 = (t60 >> 21);
    *((unsigned int *)t54) = t61;
    t62 = *((unsigned int *)t59);
    t63 = (t62 >> 21);
    *((unsigned int *)t58) = t63;
    t64 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t64 & 31U);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t65 & 31U);
    xsi_vlog_generic_get_array_select_value(t47, 32, t46, t50, t53, 2, 1, t54, 5, 2);
    goto LAB13;

LAB14:    t70 = ((char*)((ng4)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t47, 32, t70, 32);
    goto LAB20;

LAB18:    memcpy(t3, t47, 8);
    goto LAB20;

}

static void Cont_95_7(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t17[8];
    char t47[8];
    char t54[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;

LAB0:    t1 = (t0 + 9176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 6200);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 16);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 16);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 31U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 31U);
    t16 = ((char*)((ng4)));
    memset(t17, 0, 8);
    t18 = (t5 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB5;

LAB4:    if (t29 != 0)
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t33 = (t17 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t33) != 0)
        goto LAB10;

LAB11:    t40 = (t4 + 4);
    t41 = *((unsigned int *)t4);
    t42 = *((unsigned int *)t40);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB12;

LAB13:    t66 = *((unsigned int *)t4);
    t67 = (~(t66));
    t68 = *((unsigned int *)t40);
    t69 = (t67 || t68);
    if (t69 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t40) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t70, 8);

LAB20:    t71 = (t0 + 12768);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    memcpy(t75, t3, 8);
    xsi_driver_vfirst_trans(t71, 0, 31);
    t76 = (t0 + 12320);
    *((int *)t76) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t17) = 1;
    goto LAB7;

LAB6:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t39 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB11;

LAB12:    t44 = (t0 + 6520);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t48 = (t0 + 6520);
    t49 = (t48 + 72U);
    t50 = *((char **)t49);
    t51 = (t0 + 6520);
    t52 = (t51 + 64U);
    t53 = *((char **)t52);
    t55 = (t0 + 6200);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    memset(t54, 0, 8);
    t58 = (t54 + 4);
    t59 = (t57 + 4);
    t60 = *((unsigned int *)t57);
    t61 = (t60 >> 16);
    *((unsigned int *)t54) = t61;
    t62 = *((unsigned int *)t59);
    t63 = (t62 >> 16);
    *((unsigned int *)t58) = t63;
    t64 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t64 & 31U);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t65 & 31U);
    xsi_vlog_generic_get_array_select_value(t47, 32, t46, t50, t53, 2, 1, t54, 5, 2);
    goto LAB13;

LAB14:    t70 = ((char*)((ng4)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t47, 32, t70, 32);
    goto LAB20;

LAB18:    memcpy(t3, t47, 8);
    goto LAB20;

}

static void Always_97_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 9424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 12336);
    *((int *)t2) = 1;
    t3 = (t0 + 9456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(97, ng0);
    t4 = (t0 + 4520U);
    t5 = *((char **)t4);
    t4 = (t0 + 5720);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB2;

}

static void Always_98_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 9672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 12352);
    *((int *)t2) = 1;
    t3 = (t0 + 9704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(98, ng0);
    t4 = (t0 + 4680U);
    t5 = *((char **)t4);
    t4 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB2;

}

static void Always_101_10(char *t0)
{
    char t18[8];
    char t19[8];
    char t43[8];
    char t44[8];
    char t51[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    int t65;
    char *t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;
    int t73;

LAB0:    t1 = (t0 + 9920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 12368);
    *((int *)t2) = 1;
    t3 = (t0 + 9952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(101, ng0);

LAB5:    xsi_set_current_line(102, ng0);
    t4 = (t0 + 2920U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(102, ng0);

LAB9:    xsi_set_current_line(103, ng0);
    t11 = (t0 + 3080U);
    t12 = *((char **)t11);
    t11 = (t12 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    memset(t19, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t2) != 0)
        goto LAB30;

LAB31:    t5 = (t19 + 4);
    t13 = *((unsigned int *)t19);
    t14 = *((unsigned int *)t5);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB32;

LAB33:    t16 = *((unsigned int *)t19);
    t17 = (~(t16));
    t22 = *((unsigned int *)t5);
    t23 = (t17 || t22);
    if (t23 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t5) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t19) > 0)
        goto LAB38;

LAB39:    memcpy(t18, t28, 8);

LAB40:    t32 = (t0 + 6520);
    t33 = (t0 + 6520);
    t34 = (t33 + 72U);
    t39 = *((char **)t34);
    t40 = (t0 + 6520);
    t41 = (t40 + 64U);
    t42 = *((char **)t41);
    t45 = (t0 + 6200);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t51, 0, 8);
    t48 = (t51 + 4);
    t49 = (t47 + 4);
    t24 = *((unsigned int *)t47);
    t25 = (t24 >> 16);
    *((unsigned int *)t51) = t25;
    t26 = *((unsigned int *)t49);
    t29 = (t26 >> 16);
    *((unsigned int *)t48) = t29;
    t30 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t30 & 31U);
    t31 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t31 & 31U);
    xsi_vlog_generic_convert_array_indices(t43, t44, t39, t42, 2, 1, t51, 5, 2);
    t50 = (t43 + 4);
    t35 = *((unsigned int *)t50);
    t65 = (!(t35));
    t52 = (t44 + 4);
    t36 = *((unsigned int *)t52);
    t68 = (!(t36));
    t69 = (t65 && t68);
    if (t69 == 1)
        goto LAB41;

LAB42:
LAB12:    goto LAB8;

LAB10:    xsi_set_current_line(104, ng0);
    t20 = (t0 + 2120U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t21 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t20) != 0)
        goto LAB15;

LAB16:    t28 = (t19 + 4);
    t29 = *((unsigned int *)t19);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB17;

LAB18:    t35 = *((unsigned int *)t19);
    t36 = (~(t35));
    t37 = *((unsigned int *)t28);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t28) > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t19) > 0)
        goto LAB23;

LAB24:    memcpy(t18, t41, 8);

LAB25:    t42 = (t0 + 6520);
    t45 = (t0 + 6520);
    t46 = (t45 + 72U);
    t47 = *((char **)t46);
    t48 = (t0 + 6520);
    t49 = (t48 + 64U);
    t50 = *((char **)t49);
    t52 = (t0 + 6200);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    memset(t51, 0, 8);
    t55 = (t51 + 4);
    t56 = (t54 + 4);
    t57 = *((unsigned int *)t54);
    t58 = (t57 >> 11);
    *((unsigned int *)t51) = t58;
    t59 = *((unsigned int *)t56);
    t60 = (t59 >> 11);
    *((unsigned int *)t55) = t60;
    t61 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t61 & 31U);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t62 & 31U);
    xsi_vlog_generic_convert_array_indices(t43, t44, t47, t50, 2, 1, t51, 5, 2);
    t63 = (t43 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (!(t64));
    t66 = (t44 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (!(t67));
    t69 = (t65 && t68);
    if (t69 == 1)
        goto LAB26;

LAB27:    goto LAB12;

LAB13:    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB15:    t27 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB16;

LAB17:    t32 = (t0 + 6360);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    goto LAB18;

LAB19:    t39 = (t0 + 5240);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    goto LAB20;

LAB21:    xsi_vlog_unsigned_bit_combine(t18, 32, t34, 32, t41, 32);
    goto LAB25;

LAB23:    memcpy(t18, t34, 8);
    goto LAB25;

LAB26:    t70 = *((unsigned int *)t43);
    t71 = *((unsigned int *)t44);
    t72 = (t70 - t71);
    t73 = (t72 + 1);
    xsi_vlogvar_wait_assign_value(t42, t18, 0, *((unsigned int *)t44), t73, 0LL);
    goto LAB27;

LAB28:    *((unsigned int *)t19) = 1;
    goto LAB31;

LAB30:    t4 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB31;

LAB32:    t11 = (t0 + 6360);
    t12 = (t11 + 56U);
    t20 = *((char **)t12);
    goto LAB33;

LAB34:    t21 = (t0 + 5240);
    t27 = (t21 + 56U);
    t28 = *((char **)t27);
    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t18, 32, t20, 32, t28, 32);
    goto LAB40;

LAB38:    memcpy(t18, t20, 8);
    goto LAB40;

LAB41:    t37 = *((unsigned int *)t43);
    t38 = *((unsigned int *)t44);
    t72 = (t37 - t38);
    t73 = (t72 + 1);
    xsi_vlogvar_wait_assign_value(t32, t18, 0, *((unsigned int *)t44), t73, 0LL);
    goto LAB42;

}

static void Always_114_11(char *t0)
{
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t17;

LAB0:    t1 = (t0 + 10168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 12384);
    *((int *)t2) = 1;
    t3 = (t0 + 10200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(114, ng0);

LAB5:    xsi_set_current_line(115, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3240U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(116, ng0);
    t11 = (t0 + 472);
    t12 = *((char **)t11);
    t11 = (t0 + 5080);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 8, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(118, ng0);

LAB12:    xsi_set_current_line(119, ng0);
    t4 = (t0 + 2440U);
    t5 = *((char **)t4);

LAB13:    t4 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 1, t4, 1);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 1, t2, 1);
    if (t13 == 1)
        goto LAB16;

LAB17:
LAB18:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 5080);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = (t0 + 608);
    t12 = *((char **)t11);
    memset(t16, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB20;

LAB19:    t14 = (t12 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB20;

LAB23:    if (*((unsigned int *)t4) > *((unsigned int *)t12))
        goto LAB21;

LAB22:    t17 = (t16 + 4);
    t6 = *((unsigned int *)t17);
    t7 = (~(t6));
    t8 = *((unsigned int *)t16);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB24;

LAB25:
LAB26:    goto LAB11;

LAB14:    xsi_set_current_line(120, ng0);
    t11 = (t0 + 5400);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t0 + 5080);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 8, 0LL);
    goto LAB18;

LAB16:    xsi_set_current_line(121, ng0);
    t3 = (t0 + 5240);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t0 + 5080);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    goto LAB18;

LAB20:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB22;

LAB21:    *((unsigned int *)t16) = 1;
    goto LAB22;

LAB24:    xsi_set_current_line(124, ng0);
    xsi_vlog_stop(1);
    goto LAB26;

}

static void Cont_132_12(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 10416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 6200);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 63U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 63U);
    t14 = (t0 + 12832);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 63U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 5);
    t27 = (t0 + 12400);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_133_13(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 10664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 6200);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 26);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 26);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 63U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 63U);
    t14 = (t0 + 12896);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 63U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 5);
    t27 = (t0 + 12416);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_134_14(char *t0)
{
    char t3[8];
    char t4[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 10912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2760U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t27 = (t0 + 12960);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t3, 8);
    xsi_driver_vfirst_trans(t27, 0, 31);
    t32 = (t0 + 12432);
    *((int *)t32) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 5720);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    goto LAB9;

LAB10:    t23 = (t0 + 5080);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t26, t25, 8);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t18, 32, t26, 32);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_135_15(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 11160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 5400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 13024);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 12448);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Always_138_16(char *t0)
{
    char t11[8];
    char t12[8];
    char t19[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;

LAB0:    t1 = (t0 + 11408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 12464);
    *((int *)t2) = 1;
    t3 = (t0 + 11440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(138, ng0);

LAB5:    xsi_set_current_line(139, ng0);
    t4 = (t0 + 2600U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_xcompare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_xcompare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_xcompare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(140, ng0);
    t7 = (t0 + 5880);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 5560);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    goto LAB13;

LAB9:    xsi_set_current_line(141, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 5560);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB13;

LAB11:    xsi_set_current_line(142, ng0);
    t3 = (t0 + 6200);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t12, 0, 8);
    t8 = (t12 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t9);
    t16 = (t15 >> 0);
    *((unsigned int *)t8) = t16;
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t17 & 65535U);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t18 & 65535U);
    t10 = ((char*)((ng9)));
    t20 = (t0 + 6200);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t24 = (t23 + 4);
    t25 = (t22 + 4);
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 15);
    t28 = (t27 & 1);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t25);
    t30 = (t29 >> 15);
    t31 = (t30 & 1);
    *((unsigned int *)t24) = t31;
    xsi_vlog_mul_concat(t19, 16, 1, t10, 1U, t23, 1);
    xsi_vlogtype_concat(t11, 32, 32, 2U, t19, 16, t12, 16);
    t32 = (t0 + 5560);
    xsi_vlogvar_assign_value(t32, t11, 0, 0, 32);
    goto LAB13;

}

static void Always_147_17(char *t0)
{
    char t11[8];
    char t44[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;

LAB0:    t1 = (t0 + 11656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 12480);
    *((int *)t2) = 1;
    t3 = (t0 + 11688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(147, ng0);

LAB5:    xsi_set_current_line(148, ng0);
    t4 = (t0 + 3400U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(149, ng0);
    t7 = (t0 + 4040U);
    t8 = *((char **)t7);
    t7 = (t0 + 5560);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t10);
    t14 = (t12 & t13);
    *((unsigned int *)t11) = t14;
    t15 = (t8 + 4);
    t16 = (t10 + 4);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t15);
    t19 = *((unsigned int *)t16);
    t20 = (t18 | t19);
    *((unsigned int *)t17) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB20;

LAB21:
LAB22:    t43 = (t0 + 5400);
    xsi_vlogvar_assign_value(t43, t11, 0, 0, 32);
    goto LAB19;

LAB9:    xsi_set_current_line(150, ng0);
    t3 = (t0 + 4040U);
    t4 = *((char **)t3);
    t3 = (t0 + 5560);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t9 = (t4 + 4);
    t10 = (t8 + 4);
    t15 = (t11 + 4);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t15);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB23;

LAB24:
LAB25:    t25 = (t0 + 5400);
    xsi_vlogvar_assign_value(t25, t11, 0, 0, 32);
    goto LAB19;

LAB11:    xsi_set_current_line(151, ng0);
    t3 = (t0 + 4040U);
    t4 = *((char **)t3);
    t3 = (t0 + 5560);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 32, t8, 32);
    t9 = (t0 + 5400);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 32);
    goto LAB19;

LAB13:    xsi_set_current_line(152, ng0);
    t3 = (t0 + 4040U);
    t4 = *((char **)t3);
    t3 = (t0 + 5560);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t4, 32, t8, 32);
    t9 = (t0 + 5400);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 32);
    goto LAB19;

LAB15:    xsi_set_current_line(153, ng0);
    t3 = (t0 + 4040U);
    t4 = *((char **)t3);
    t3 = (t0 + 5560);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    memset(t45, 0, 8);
    t9 = (t4 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB27;

LAB26:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t4) < *((unsigned int *)t8))
        goto LAB28;

LAB29:    memset(t44, 0, 8);
    t16 = (t45 + 4);
    t12 = *((unsigned int *)t16);
    t13 = (~(t12));
    t14 = *((unsigned int *)t45);
    t18 = (t14 & t13);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t16) != 0)
        goto LAB33;

LAB34:    t25 = (t44 + 4);
    t20 = *((unsigned int *)t44);
    t21 = *((unsigned int *)t25);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB35;

LAB36:    t23 = *((unsigned int *)t44);
    t24 = (~(t23));
    t27 = *((unsigned int *)t25);
    t28 = (t24 || t27);
    if (t28 > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t25) > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t44) > 0)
        goto LAB41;

LAB42:    memcpy(t11, t43, 8);

LAB43:    t46 = (t0 + 5400);
    xsi_vlogvar_assign_value(t46, t11, 0, 0, 32);
    goto LAB19;

LAB17:    xsi_set_current_line(154, ng0);
    t3 = (t0 + 4040U);
    t4 = *((char **)t3);
    t3 = (t0 + 5560);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 | t13);
    *((unsigned int *)t44) = t14;
    t9 = (t4 + 4);
    t10 = (t8 + 4);
    t15 = (t44 + 4);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t15);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB44;

LAB45:
LAB46:    memset(t11, 0, 8);
    t25 = (t11 + 4);
    t26 = (t44 + 4);
    t39 = *((unsigned int *)t44);
    t40 = (~(t39));
    *((unsigned int *)t11) = t40;
    *((unsigned int *)t25) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB48;

LAB47:    t49 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t49 & 4294967295U);
    t50 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t50 & 4294967295U);
    t43 = (t0 + 5400);
    xsi_vlogvar_assign_value(t43, t11, 0, 0, 32);
    goto LAB19;

LAB20:    t23 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t11) = (t23 | t24);
    t25 = (t8 + 4);
    t26 = (t10 + 4);
    t27 = *((unsigned int *)t8);
    t28 = (~(t27));
    t29 = *((unsigned int *)t25);
    t30 = (~(t29));
    t31 = *((unsigned int *)t10);
    t32 = (~(t31));
    t33 = *((unsigned int *)t26);
    t34 = (~(t33));
    t35 = (t28 & t30);
    t36 = (t32 & t34);
    t37 = (~(t35));
    t38 = (~(t36));
    t39 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t39 & t37);
    t40 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t40 & t38);
    t41 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t41 & t37);
    t42 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t42 & t38);
    goto LAB22;

LAB23:    t23 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t11) = (t23 | t24);
    t16 = (t4 + 4);
    t17 = (t8 + 4);
    t27 = *((unsigned int *)t16);
    t28 = (~(t27));
    t29 = *((unsigned int *)t4);
    t35 = (t29 & t28);
    t30 = *((unsigned int *)t17);
    t31 = (~(t30));
    t32 = *((unsigned int *)t8);
    t36 = (t32 & t31);
    t33 = (~(t35));
    t34 = (~(t36));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t33);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t34);
    goto LAB25;

LAB27:    t15 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB29;

LAB28:    *((unsigned int *)t45) = 1;
    goto LAB29;

LAB31:    *((unsigned int *)t44) = 1;
    goto LAB34;

LAB33:    t17 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB34;

LAB35:    t26 = ((char*)((ng7)));
    goto LAB36;

LAB37:    t43 = ((char*)((ng4)));
    goto LAB38;

LAB39:    xsi_vlog_unsigned_bit_combine(t11, 32, t26, 32, t43, 32);
    goto LAB43;

LAB41:    memcpy(t11, t26, 8);
    goto LAB43;

LAB44:    t23 = *((unsigned int *)t44);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t44) = (t23 | t24);
    t16 = (t4 + 4);
    t17 = (t8 + 4);
    t27 = *((unsigned int *)t16);
    t28 = (~(t27));
    t29 = *((unsigned int *)t4);
    t35 = (t29 & t28);
    t30 = *((unsigned int *)t17);
    t31 = (~(t30));
    t32 = *((unsigned int *)t8);
    t36 = (t32 & t31);
    t33 = (~(t35));
    t34 = (~(t36));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t33);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t34);
    goto LAB46;

LAB48:    t41 = *((unsigned int *)t11);
    t42 = *((unsigned int *)t26);
    *((unsigned int *)t11) = (t41 | t42);
    t47 = *((unsigned int *)t25);
    t48 = *((unsigned int *)t26);
    *((unsigned int *)t25) = (t47 | t48);
    goto LAB47;

}

static void Always_158_18(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 11904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 12496);
    *((int *)t2) = 1;
    t3 = (t0 + 11936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(158, ng0);

LAB5:    xsi_set_current_line(159, ng0);
    t4 = (t0 + 5400);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5240);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB2;

}


extern void work_m_00000000001472540035_1292031434_init()
{
	static char *pe[] = {(void *)Initial_61_0,(void *)Cont_62_1,(void *)Cont_63_2,(void *)Always_69_3,(void *)Always_81_4,(void *)Always_86_5,(void *)Cont_94_6,(void *)Cont_95_7,(void *)Always_97_8,(void *)Always_98_9,(void *)Always_101_10,(void *)Always_114_11,(void *)Cont_132_12,(void *)Cont_133_13,(void *)Cont_134_14,(void *)Cont_135_15,(void *)Always_138_16,(void *)Always_147_17,(void *)Always_158_18};
	xsi_register_didat("work_m_00000000001472540035_1292031434", "isim/tb_mips_isim_beh.exe.sim/work/m_00000000001472540035_1292031434.didat");
	xsi_register_executes(pe);
}
