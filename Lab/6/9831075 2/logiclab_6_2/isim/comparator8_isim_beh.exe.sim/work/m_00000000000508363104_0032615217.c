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
static int ng0[] = {2, 0};
static int ng1[] = {10, 0};
static int ng2[] = {11, 0};
static int ng3[] = {1, 0};
static int ng4[] = {13, 0};
static int ng5[] = {14, 0};
static int ng6[] = {3, 0};
static int ng7[] = {4, 0};
static int ng8[] = {5, 0};
static int ng9[] = {6, 0};
static int ng10[] = {7, 0};
static int ng11[] = {8, 0};
static int ng12[] = {0, 0};
static int ng13[] = {19, 0};
static int ng14[] = {15, 0};
static int ng15[] = {16, 0};
static int ng16[] = {9, 0};
static int ng17[] = {18, 0};
static int ng18[] = {17, 0};
static int ng19[] = {12, 0};
static int ng20[] = {20, 0};
static int ng21[] = {21, 0};
static int ng22[] = {22, 0};
static int ng23[] = {23, 0};



static void Gate_34_0(char *t0)
{
    char t4[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 1208U);
    t13 = *((char **)t12);
    memset(t14, 0, 8);
    t12 = (t14 + 4);
    t15 = (t13 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 0);
    t21 = (t20 & 1);
    *((unsigned int *)t12) = t21;
    t22 = (t0 + 10752);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_XnorGate(t26, 2, t4, t14);
    t27 = (t0 + 10752);
    xsi_driver_vfirst_trans(t27, 0, 0);
    t28 = (t0 + 10256);
    *((int *)t28) = 1;

LAB1:    return;
}

static void Gate_34_1(char *t0)
{
    char t4[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 1208U);
    t13 = *((char **)t12);
    memset(t14, 0, 8);
    t12 = (t14 + 4);
    t15 = (t13 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (t16 >> 1);
    t18 = (t17 & 1);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 1);
    t21 = (t20 & 1);
    *((unsigned int *)t12) = t21;
    t22 = (t0 + 10816);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_XnorGate(t26, 2, t4, t14);
    t27 = (t0 + 10816);
    xsi_driver_vfirst_trans(t27, 1, 1);
    t28 = (t0 + 10272);
    *((int *)t28) = 1;

LAB1:    return;
}

static void Gate_34_2(char *t0)
{
    char t4[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 3984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 1208U);
    t13 = *((char **)t12);
    memset(t14, 0, 8);
    t12 = (t14 + 4);
    t15 = (t13 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (t16 >> 2);
    t18 = (t17 & 1);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 2);
    t21 = (t20 & 1);
    *((unsigned int *)t12) = t21;
    t22 = (t0 + 10880);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_XnorGate(t26, 2, t4, t14);
    t27 = (t0 + 10880);
    xsi_driver_vfirst_trans(t27, 2, 2);
    t28 = (t0 + 10288);
    *((int *)t28) = 1;

LAB1:    return;
}

static void Gate_38_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 10944);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_notGate(t16, t4);
    t17 = (t0 + 10944);
    xsi_driver_vfirst_trans(t17, 3, 3);
    t18 = (t0 + 10304);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Gate_38_4(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 11008);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_notGate(t16, t4);
    t17 = (t0 + 11008);
    xsi_driver_vfirst_trans(t17, 4, 4);
    t18 = (t0 + 10320);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Gate_38_5(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 11072);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_notGate(t16, t4);
    t17 = (t0 + 11072);
    xsi_driver_vfirst_trans(t17, 5, 5);
    t18 = (t0 + 10336);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Gate_38_6(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 11136);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_notGate(t16, t4);
    t17 = (t0 + 11136);
    xsi_driver_vfirst_trans(t17, 6, 6);
    t18 = (t0 + 10352);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Gate_38_7(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 11200);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_notGate(t16, t4);
    t17 = (t0 + 11200);
    xsi_driver_vfirst_trans(t17, 7, 7);
    t18 = (t0 + 10368);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Gate_38_8(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 11264);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_notGate(t16, t4);
    t17 = (t0 + 11264);
    xsi_driver_vfirst_trans(t17, 8, 8);
    t18 = (t0 + 10384);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Gate_45_9(char *t0)
{
    char t4[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 5720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2288U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng0)));
    xsi_vlog_generic_get_array_select_value(t4, 1, t3, t6, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 2328U);
    t12 = *((char **)t11);
    t11 = (t0 + 2288U);
    t14 = (t11 + 72U);
    t15 = *((char **)t14);
    t16 = (t0 + 2288U);
    t17 = (t16 + 48U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t13, 1, t12, t15, t18, 2, 1, t19, 32, 1);
    t20 = (t0 + 11328);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_AndGate(t24, 2, t4, t13);
    t25 = (t0 + 11328);
    xsi_driver_vfirst_trans(t25, 15, 15);
    t26 = (t0 + 10400);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Gate_45_10(char *t0)
{
    char t4[8];
    char t13[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 5968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2288U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t4, 1, t3, t6, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 2328U);
    t12 = *((char **)t11);
    t11 = (t0 + 2288U);
    t14 = (t11 + 72U);
    t15 = *((char **)t14);
    t16 = (t0 + 2288U);
    t17 = (t16 + 48U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng0)));
    xsi_vlog_generic_get_array_select_value(t13, 1, t12, t15, t18, 2, 1, t19, 32, 1);
    t20 = (t0 + 2328U);
    t21 = *((char **)t20);
    t20 = (t0 + 2288U);
    t23 = (t20 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2288U);
    t26 = (t25 + 48U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t22, 1, t21, t24, t27, 2, 1, t28, 32, 1);
    t29 = (t0 + 11392);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    xsi_vlog_AndGate(t33, 3, t4, t13, t22);
    t34 = (t0 + 11392);
    xsi_driver_vfirst_trans(t34, 16, 16);
    t35 = (t0 + 10416);
    *((int *)t35) = 1;

LAB1:    return;
}

static void Gate_45_11(char *t0)
{
    char t4[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 6216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2288U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t4, 1, t3, t6, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 2328U);
    t12 = *((char **)t11);
    t11 = (t0 + 2288U);
    t14 = (t11 + 72U);
    t15 = *((char **)t14);
    t16 = (t0 + 2288U);
    t17 = (t16 + 48U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng0)));
    xsi_vlog_generic_get_array_select_value(t13, 1, t12, t15, t18, 2, 1, t19, 32, 1);
    t20 = (t0 + 11456);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_AndGate(t24, 2, t4, t13);
    t25 = (t0 + 11456);
    xsi_driver_vfirst_trans(t25, 17, 17);
    t26 = (t0 + 10432);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Gate_45_12(char *t0)
{
    char t4[8];
    char t13[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 6464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2288U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t4, 1, t3, t6, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 2328U);
    t12 = *((char **)t11);
    t11 = (t0 + 2288U);
    t14 = (t11 + 72U);
    t15 = *((char **)t14);
    t16 = (t0 + 2288U);
    t17 = (t16 + 48U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng0)));
    xsi_vlog_generic_get_array_select_value(t13, 1, t12, t15, t18, 2, 1, t19, 32, 1);
    t20 = (t0 + 2328U);
    t21 = *((char **)t20);
    t20 = (t0 + 2288U);
    t23 = (t20 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2288U);
    t26 = (t25 + 48U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t22, 1, t21, t24, t27, 2, 1, t28, 32, 1);
    t29 = (t0 + 11520);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    xsi_vlog_AndGate(t33, 3, t4, t13, t22);
    t34 = (t0 + 11520);
    xsi_driver_vfirst_trans(t34, 18, 18);
    t35 = (t0 + 10448);
    *((int *)t35) = 1;

LAB1:    return;
}

static void Gate_45_13(char *t0)
{
    char t4[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
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
    char *t27;

LAB0:    t1 = (t0 + 6712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2288U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t4, 1, t3, t6, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t14 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 2);
    t17 = (t16 & 1);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 2);
    t20 = (t19 & 1);
    *((unsigned int *)t11) = t20;
    t21 = (t0 + 11584);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_AndGate(t25, 2, t4, t13);
    t26 = (t0 + 11584);
    xsi_driver_vfirst_trans(t26, 9, 9);
    t27 = (t0 + 10464);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Gate_45_14(char *t0)
{
    char t4[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
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
    char *t27;

LAB0:    t1 = (t0 + 6960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2288U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t4, 1, t3, t6, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t14 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 2);
    t17 = (t16 & 1);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 2);
    t20 = (t19 & 1);
    *((unsigned int *)t11) = t20;
    t21 = (t0 + 11648);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_AndGate(t25, 2, t4, t13);
    t26 = (t0 + 11648);
    xsi_driver_vfirst_trans(t26, 10, 10);
    t27 = (t0 + 10480);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Gate_45_15(char *t0)
{
    char t4[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
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
    char *t27;

LAB0:    t1 = (t0 + 7208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2288U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t4, 1, t3, t6, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t14 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 0);
    t20 = (t19 & 1);
    *((unsigned int *)t11) = t20;
    t21 = (t0 + 11712);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_AndGate(t25, 2, t4, t13);
    t26 = (t0 + 11712);
    xsi_driver_vfirst_trans(t26, 11, 11);
    t27 = (t0 + 10496);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Gate_45_16(char *t0)
{
    char t4[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
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
    char *t27;

LAB0:    t1 = (t0 + 7456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2288U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t4, 1, t3, t6, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t14 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 2);
    t17 = (t16 & 1);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 2);
    t20 = (t19 & 1);
    *((unsigned int *)t11) = t20;
    t21 = (t0 + 11776);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_AndGate(t25, 2, t4, t13);
    t26 = (t0 + 11776);
    xsi_driver_vfirst_trans(t26, 12, 12);
    t27 = (t0 + 10512);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Gate_45_17(char *t0)
{
    char t4[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
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
    char *t27;

LAB0:    t1 = (t0 + 7704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2288U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t4, 1, t3, t6, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t14 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 1);
    t17 = (t16 & 1);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 1);
    t20 = (t19 & 1);
    *((unsigned int *)t11) = t20;
    t21 = (t0 + 11840);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_AndGate(t25, 2, t4, t13);
    t26 = (t0 + 11840);
    xsi_driver_vfirst_trans(t26, 13, 13);
    t27 = (t0 + 10528);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Gate_45_18(char *t0)
{
    char t4[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
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
    char *t27;

LAB0:    t1 = (t0 + 7952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2288U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng11)));
    xsi_vlog_generic_get_array_select_value(t4, 1, t3, t6, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t14 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 0);
    t20 = (t19 & 1);
    *((unsigned int *)t11) = t20;
    t21 = (t0 + 11904);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_AndGate(t25, 2, t4, t13);
    t26 = (t0 + 11904);
    xsi_driver_vfirst_trans(t26, 14, 14);
    t27 = (t0 + 10544);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Gate_45_19(char *t0)
{
    char t4[8];
    char t13[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 8200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2288U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng12)));
    xsi_vlog_generic_get_array_select_value(t4, 1, t3, t6, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 2328U);
    t12 = *((char **)t11);
    t11 = (t0 + 2288U);
    t14 = (t11 + 72U);
    t15 = *((char **)t14);
    t16 = (t0 + 2288U);
    t17 = (t16 + 48U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t13, 1, t12, t15, t18, 2, 1, t19, 32, 1);
    t20 = (t0 + 2328U);
    t21 = *((char **)t20);
    t20 = (t0 + 2288U);
    t23 = (t20 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2288U);
    t26 = (t25 + 48U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng0)));
    xsi_vlog_generic_get_array_select_value(t22, 1, t21, t24, t27, 2, 1, t28, 32, 1);
    t29 = (t0 + 11968);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    xsi_vlog_AndGate(t33, 3, t4, t13, t22);
    t34 = (t0 + 11968);
    xsi_driver_vfirst_trans(t34, 19, 19);
    t35 = (t0 + 10560);
    *((int *)t35) = 1;

LAB1:    return;
}

static void Gate_45_20(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 8448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2288U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng13)));
    xsi_vlog_generic_get_array_select_value(t4, 1, t3, t6, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 1688U);
    t12 = *((char **)t11);
    t11 = (t0 + 12032);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_AndGate(t16, 2, t4, t12);
    t17 = (t0 + 12032);
    xsi_driver_vfirst_trans(t17, 21, 21);
    t18 = (t0 + 10576);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Gate_45_21(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 8696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2288U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng13)));
    xsi_vlog_generic_get_array_select_value(t4, 1, t3, t6, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    t11 = (t0 + 12096);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_AndGate(t16, 2, t4, t12);
    t17 = (t0 + 12096);
    xsi_driver_vfirst_trans(t17, 23, 23);
    t18 = (t0 + 10592);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Gate_45_22(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 8944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2288U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng13)));
    xsi_vlog_generic_get_array_select_value(t4, 1, t3, t6, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    t11 = (t0 + 12160);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_AndGate(t16, 2, t4, t12);
    t17 = (t0 + 12160);
    xsi_driver_vfirst_trans(t17, 0, 0);
    t18 = (t0 + 10608);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Gate_61_23(char *t0)
{
    char t4[8];
    char t13[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 9192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2288U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng14)));
    xsi_vlog_generic_get_array_select_value(t4, 1, t3, t6, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 2328U);
    t12 = *((char **)t11);
    t11 = (t0 + 2288U);
    t14 = (t11 + 72U);
    t15 = *((char **)t14);
    t16 = (t0 + 2288U);
    t17 = (t16 + 48U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng15)));
    xsi_vlog_generic_get_array_select_value(t13, 1, t12, t15, t18, 2, 1, t19, 32, 1);
    t20 = (t0 + 2328U);
    t21 = *((char **)t20);
    t20 = (t0 + 2288U);
    t23 = (t20 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2288U);
    t26 = (t25 + 48U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng16)));
    xsi_vlog_generic_get_array_select_value(t22, 1, t21, t24, t27, 2, 1, t28, 32, 1);
    t29 = (t0 + 12224);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    xsi_vlog_OrGate(t33, 3, t4, t13, t22);
    t34 = (t0 + 12224);
    xsi_driver_vfirst_trans(t34, 20, 20);
    t35 = (t0 + 10624);
    *((int *)t35) = 1;

LAB1:    return;
}

static void Gate_61_24(char *t0)
{
    char t4[8];
    char t13[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 9440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2288U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng17)));
    xsi_vlog_generic_get_array_select_value(t4, 1, t3, t6, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 2328U);
    t12 = *((char **)t11);
    t11 = (t0 + 2288U);
    t14 = (t11 + 72U);
    t15 = *((char **)t14);
    t16 = (t0 + 2288U);
    t17 = (t16 + 48U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng18)));
    xsi_vlog_generic_get_array_select_value(t13, 1, t12, t15, t18, 2, 1, t19, 32, 1);
    t20 = (t0 + 2328U);
    t21 = *((char **)t20);
    t20 = (t0 + 2288U);
    t23 = (t20 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2288U);
    t26 = (t25 + 48U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng19)));
    xsi_vlog_generic_get_array_select_value(t22, 1, t21, t24, t27, 2, 1, t28, 32, 1);
    t29 = (t0 + 12288);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    xsi_vlog_OrGate(t33, 3, t4, t13, t22);
    t34 = (t0 + 12288);
    xsi_driver_vfirst_trans(t34, 22, 22);
    t35 = (t0 + 10640);
    *((int *)t35) = 1;

LAB1:    return;
}

static void Gate_61_25(char *t0)
{
    char t4[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 9688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2288U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng20)));
    xsi_vlog_generic_get_array_select_value(t4, 1, t3, t6, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 2328U);
    t12 = *((char **)t11);
    t11 = (t0 + 2288U);
    t14 = (t11 + 72U);
    t15 = *((char **)t14);
    t16 = (t0 + 2288U);
    t17 = (t16 + 48U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng21)));
    xsi_vlog_generic_get_array_select_value(t13, 1, t12, t15, t18, 2, 1, t19, 32, 1);
    t20 = (t0 + 12352);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_OrGate(t24, 2, t4, t13);
    t25 = (t0 + 12352);
    xsi_driver_vfirst_trans(t25, 0, 0);
    t26 = (t0 + 10656);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Gate_61_26(char *t0)
{
    char t4[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 9936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2288U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng22)));
    xsi_vlog_generic_get_array_select_value(t4, 1, t3, t6, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 2328U);
    t12 = *((char **)t11);
    t11 = (t0 + 2288U);
    t14 = (t11 + 72U);
    t15 = *((char **)t14);
    t16 = (t0 + 2288U);
    t17 = (t16 + 48U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng23)));
    xsi_vlog_generic_get_array_select_value(t13, 1, t12, t15, t18, 2, 1, t19, 32, 1);
    t20 = (t0 + 12416);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_OrGate(t24, 2, t4, t13);
    t25 = (t0 + 12416);
    xsi_driver_vfirst_trans(t25, 0, 0);
    t26 = (t0 + 10672);
    *((int *)t26) = 1;

LAB1:    return;
}


extern void work_m_00000000000508363104_0032615217_init()
{
	static char *pe[] = {(void *)Gate_34_0,(void *)Gate_34_1,(void *)Gate_34_2,(void *)Gate_38_3,(void *)Gate_38_4,(void *)Gate_38_5,(void *)Gate_38_6,(void *)Gate_38_7,(void *)Gate_38_8,(void *)Gate_45_9,(void *)Gate_45_10,(void *)Gate_45_11,(void *)Gate_45_12,(void *)Gate_45_13,(void *)Gate_45_14,(void *)Gate_45_15,(void *)Gate_45_16,(void *)Gate_45_17,(void *)Gate_45_18,(void *)Gate_45_19,(void *)Gate_45_20,(void *)Gate_45_21,(void *)Gate_45_22,(void *)Gate_61_23,(void *)Gate_61_24,(void *)Gate_61_25,(void *)Gate_61_26};
	xsi_register_didat("work_m_00000000000508363104_0032615217", "isim/comparator8_isim_beh.exe.sim/work/m_00000000000508363104_0032615217.didat");
	xsi_register_executes(pe);
}
