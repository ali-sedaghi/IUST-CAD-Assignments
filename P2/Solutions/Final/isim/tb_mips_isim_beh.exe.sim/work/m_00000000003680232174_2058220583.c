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
static const char *ng0 = "D:/__Term6/CAD/Project/Final/Control.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {35U, 0U};
static unsigned int ng11[] = {43U, 0U};



static void Always_44_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 6472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 7536);
    *((int *)t2) = 1;
    t3 = (t0 + 6504);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3312);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(63, ng0);

LAB26:    xsi_set_current_line(64, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 3632);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB9:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 4752);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 2);
    goto LAB25;

LAB11:    xsi_set_current_line(72, ng0);

LAB27:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4592);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB25;

LAB13:    xsi_set_current_line(77, ng0);

LAB28:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3632);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB15:    xsi_set_current_line(82, ng0);

LAB29:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4432);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB17:    xsi_set_current_line(88, ng0);

LAB30:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3472);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB19:    xsi_set_current_line(93, ng0);

LAB31:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4592);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB25;

LAB21:    xsi_set_current_line(98, ng0);

LAB32:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4272);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

LAB23:    xsi_set_current_line(103, ng0);

LAB33:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4592);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB25;

}

static void Always_118_1(char *t0)
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

LAB0:    t1 = (t0 + 6720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 7552);
    *((int *)t2) = 1;
    t3 = (t0 + 6752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(119, ng0);
    t4 = (t0 + 2432U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 5552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(119, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB7;

}

static void Always_123_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;

LAB0:    t1 = (t0 + 6968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 7568);
    *((int *)t2) = 1;
    t3 = (t0 + 7000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(123, ng0);

LAB5:    xsi_set_current_line(124, ng0);
    t4 = (t0 + 5392);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(126, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 5552);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    goto LAB27;

LAB9:    xsi_set_current_line(128, ng0);
    t3 = (t0 + 2592U);
    t4 = *((char **)t3);

LAB28:    t3 = ((char*)((ng10)));
    t11 = xsi_vlog_unsigned_case_compare(t4, 6, t3, 6);
    if (t11 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t8 == 1)
        goto LAB35;

LAB36:
LAB38:
LAB37:    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB39:    goto LAB27;

LAB11:    xsi_set_current_line(142, ng0);
    t3 = (t0 + 2592U);
    t5 = *((char **)t3);

LAB40:    t3 = ((char*)((ng10)));
    t11 = xsi_vlog_unsigned_case_compare(t5, 6, t3, 6);
    if (t11 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t8 == 1)
        goto LAB43;

LAB44:
LAB46:
LAB45:    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB47:    goto LAB27;

LAB13:    xsi_set_current_line(152, ng0);
    t3 = ((char*)((ng5)));
    t7 = (t0 + 5552);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB27;

LAB15:    xsi_set_current_line(154, ng0);
    t3 = ((char*)((ng1)));
    t7 = (t0 + 5552);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB27;

LAB17:    xsi_set_current_line(156, ng0);
    t3 = ((char*)((ng1)));
    t7 = (t0 + 5552);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB27;

LAB19:    xsi_set_current_line(158, ng0);
    t3 = ((char*)((ng8)));
    t7 = (t0 + 5552);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB27;

LAB21:    xsi_set_current_line(160, ng0);
    t3 = ((char*)((ng1)));
    t7 = (t0 + 5552);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB27;

LAB23:    xsi_set_current_line(162, ng0);
    t3 = ((char*)((ng1)));
    t7 = (t0 + 5552);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB27;

LAB29:    xsi_set_current_line(131, ng0);
    t5 = ((char*)((ng4)));
    t7 = (t0 + 5552);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB39;

LAB31:    xsi_set_current_line(133, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 5552);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB39;

LAB33:    xsi_set_current_line(135, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 5552);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB39;

LAB35:    xsi_set_current_line(137, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 5552);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB39;

LAB41:    xsi_set_current_line(145, ng0);
    t7 = ((char*)((ng3)));
    t9 = (t0 + 5552);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 4);
    goto LAB47;

LAB43:    xsi_set_current_line(147, ng0);
    t3 = ((char*)((ng6)));
    t7 = (t0 + 5552);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB47;

}

static void Cont_180_3(char *t0)
{
    char t10[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;

LAB0:    t1 = (t0 + 7216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 5072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5232);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 2752U);
    t9 = *((char **)t8);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t9);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t8 = (t7 + 4);
    t14 = (t9 + 4);
    t15 = (t10 + 4);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB4;

LAB5:
LAB6:    t42 = *((unsigned int *)t4);
    t43 = *((unsigned int *)t10);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = (t4 + 4);
    t46 = (t10 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB7;

LAB8:
LAB9:    t69 = (t0 + 7664);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    memset(t73, 0, 8);
    t74 = 1U;
    t75 = t74;
    t76 = (t41 + 4);
    t77 = *((unsigned int *)t41);
    t74 = (t74 & t77);
    t78 = *((unsigned int *)t76);
    t75 = (t75 & t78);
    t79 = (t73 + 4);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t80 | t74);
    t81 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t81 | t75);
    xsi_driver_vfirst_trans(t69, 0, 0);
    t82 = (t0 + 7584);
    *((int *)t82) = 1;

LAB1:    return;
LAB4:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t10) = (t21 | t22);
    t23 = (t7 + 4);
    t24 = (t9 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    goto LAB6;

LAB7:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t4 + 4);
    t56 = (t10 + 4);
    t57 = *((unsigned int *)t55);
    t58 = (~(t57));
    t59 = *((unsigned int *)t4);
    t60 = (t59 & t58);
    t61 = *((unsigned int *)t56);
    t62 = (~(t61));
    t63 = *((unsigned int *)t10);
    t64 = (t63 & t62);
    t65 = (~(t60));
    t66 = (~(t64));
    t67 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t67 & t65);
    t68 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t68 & t66);
    goto LAB9;

}


extern void work_m_00000000003680232174_2058220583_init()
{
	static char *pe[] = {(void *)Always_44_0,(void *)Always_118_1,(void *)Always_123_2,(void *)Cont_180_3};
	xsi_register_didat("work_m_00000000003680232174_2058220583", "isim/tb_mips_isim_beh.exe.sim/work/m_00000000003680232174_2058220583.didat");
	xsi_register_executes(pe);
}
