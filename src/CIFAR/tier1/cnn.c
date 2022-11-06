#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include "mxc.h"
#include "gcfr_regs.h"
#include "cnn.h"
#include "weights.h"


static const uint32_t layer_0_kernel_0[] = LAYER_0_KERNEL_0;
static const uint32_t layer_0_kernel_1[] = LAYER_0_KERNEL_1;
static const uint32_t layer_0_kernel_2[] = LAYER_0_KERNEL_2;
static const uint32_t layer_1_kernel_0[] = LAYER_1_KERNEL_0;
static const uint32_t layer_1_kernel_1[] = LAYER_1_KERNEL_1;
static const uint32_t layer_1_kernel_2[] = LAYER_1_KERNEL_2;
static const uint32_t layer_1_kernel_3[] = LAYER_1_KERNEL_3;
static const uint32_t layer_1_kernel_4[] = LAYER_1_KERNEL_4;
static const uint32_t layer_1_kernel_5[] = LAYER_1_KERNEL_5;
static const uint32_t layer_1_kernel_6[] = LAYER_1_KERNEL_6;
static const uint32_t layer_1_kernel_7[] = LAYER_1_KERNEL_7;
static const uint32_t layer_1_kernel_8[] = LAYER_1_KERNEL_8;
static const uint32_t layer_1_kernel_9[] = LAYER_1_KERNEL_9;
static const uint32_t layer_1_kernel_10[] = LAYER_1_KERNEL_10;
static const uint32_t layer_1_kernel_11[] = LAYER_1_KERNEL_11;
static const uint32_t layer_1_kernel_12[] = LAYER_1_KERNEL_12;
static const uint32_t layer_1_kernel_13[] = LAYER_1_KERNEL_13;
static const uint32_t layer_1_kernel_14[] = LAYER_1_KERNEL_14;
static const uint32_t layer_1_kernel_15[] = LAYER_1_KERNEL_15;
static const uint32_t layer_1_kernel_16[] = LAYER_1_KERNEL_16;
static const uint32_t layer_1_kernel_17[] = LAYER_1_KERNEL_17;
static const uint32_t layer_1_kernel_18[] = LAYER_1_KERNEL_18;
static const uint32_t layer_1_kernel_19[] = LAYER_1_KERNEL_19;
static const uint32_t layer_1_kernel_20[] = LAYER_1_KERNEL_20;
static const uint32_t layer_1_kernel_21[] = LAYER_1_KERNEL_21;
static const uint32_t layer_1_kernel_22[] = LAYER_1_KERNEL_22;
static const uint32_t layer_1_kernel_23[] = LAYER_1_KERNEL_23;
static const uint32_t layer_1_kernel_24[] = LAYER_1_KERNEL_24;
static const uint32_t layer_1_kernel_25[] = LAYER_1_KERNEL_25;
static const uint32_t layer_1_kernel_26[] = LAYER_1_KERNEL_26;
static const uint32_t layer_1_kernel_27[] = LAYER_1_KERNEL_27;
static const uint32_t layer_1_kernel_28[] = LAYER_1_KERNEL_28;
static const uint32_t layer_1_kernel_29[] = LAYER_1_KERNEL_29;
static const uint32_t layer_1_kernel_30[] = LAYER_1_KERNEL_30;
static const uint32_t layer_1_kernel_31[] = LAYER_1_KERNEL_31;
static const uint32_t layer_1_kernel_32[] = LAYER_1_KERNEL_32;
static const uint32_t layer_1_kernel_33[] = LAYER_1_KERNEL_33;
static const uint32_t layer_1_kernel_34[] = LAYER_1_KERNEL_34;
static const uint32_t layer_1_kernel_35[] = LAYER_1_KERNEL_35;
static const uint32_t layer_1_kernel_36[] = LAYER_1_KERNEL_36;
static const uint32_t layer_1_kernel_37[] = LAYER_1_KERNEL_37;
static const uint32_t layer_1_kernel_38[] = LAYER_1_KERNEL_38;
static const uint32_t layer_1_kernel_39[] = LAYER_1_KERNEL_39;
static const uint32_t layer_1_kernel_40[] = LAYER_1_KERNEL_40;
static const uint32_t layer_1_kernel_41[] = LAYER_1_KERNEL_41;
static const uint32_t layer_1_kernel_42[] = LAYER_1_KERNEL_42;
static const uint32_t layer_1_kernel_43[] = LAYER_1_KERNEL_43;
static const uint32_t layer_1_kernel_44[] = LAYER_1_KERNEL_44;
static const uint32_t layer_1_kernel_45[] = LAYER_1_KERNEL_45;
static const uint32_t layer_1_kernel_46[] = LAYER_1_KERNEL_46;
static const uint32_t layer_1_kernel_47[] = LAYER_1_KERNEL_47;
static const uint32_t layer_1_kernel_48[] = LAYER_1_KERNEL_48;
static const uint32_t layer_1_kernel_49[] = LAYER_1_KERNEL_49;
static const uint32_t layer_1_kernel_50[] = LAYER_1_KERNEL_50;
static const uint32_t layer_1_kernel_51[] = LAYER_1_KERNEL_51;
static const uint32_t layer_1_kernel_52[] = LAYER_1_KERNEL_52;
static const uint32_t layer_1_kernel_53[] = LAYER_1_KERNEL_53;
static const uint32_t layer_1_kernel_54[] = LAYER_1_KERNEL_54;
static const uint32_t layer_1_kernel_55[] = LAYER_1_KERNEL_55;
static const uint32_t layer_1_kernel_56[] = LAYER_1_KERNEL_56;
static const uint32_t layer_1_kernel_57[] = LAYER_1_KERNEL_57;
static const uint32_t layer_1_kernel_58[] = LAYER_1_KERNEL_58;
static const uint32_t layer_1_kernel_59[] = LAYER_1_KERNEL_59;
static const uint32_t layer_1_kernel_60[] = LAYER_1_KERNEL_60;
static const uint32_t layer_1_kernel_61[] = LAYER_1_KERNEL_61;
static const uint32_t layer_1_kernel_62[] = LAYER_1_KERNEL_62;
static const uint32_t layer_1_kernel_63[] = LAYER_1_KERNEL_63;
static const uint32_t layer_2_kernel_0[] = LAYER_2_KERNEL_0;
static const uint32_t layer_2_kernel_1[] = LAYER_2_KERNEL_1;
static const uint32_t layer_2_kernel_2[] = LAYER_2_KERNEL_2;
static const uint32_t layer_2_kernel_3[] = LAYER_2_KERNEL_3;
static const uint32_t layer_2_kernel_4[] = LAYER_2_KERNEL_4;
static const uint32_t layer_2_kernel_5[] = LAYER_2_KERNEL_5;
static const uint32_t layer_2_kernel_6[] = LAYER_2_KERNEL_6;
static const uint32_t layer_2_kernel_7[] = LAYER_2_KERNEL_7;
static const uint32_t layer_2_kernel_8[] = LAYER_2_KERNEL_8;
static const uint32_t layer_2_kernel_9[] = LAYER_2_KERNEL_9;
static const uint32_t layer_2_kernel_10[] = LAYER_2_KERNEL_10;
static const uint32_t layer_2_kernel_11[] = LAYER_2_KERNEL_11;
static const uint32_t layer_2_kernel_12[] = LAYER_2_KERNEL_12;
static const uint32_t layer_2_kernel_13[] = LAYER_2_KERNEL_13;
static const uint32_t layer_2_kernel_14[] = LAYER_2_KERNEL_14;
static const uint32_t layer_2_kernel_15[] = LAYER_2_KERNEL_15;
static const uint32_t layer_2_kernel_16[] = LAYER_2_KERNEL_16;
static const uint32_t layer_2_kernel_17[] = LAYER_2_KERNEL_17;
static const uint32_t layer_2_kernel_18[] = LAYER_2_KERNEL_18;
static const uint32_t layer_2_kernel_19[] = LAYER_2_KERNEL_19;
static const uint32_t layer_2_kernel_20[] = LAYER_2_KERNEL_20;
static const uint32_t layer_2_kernel_21[] = LAYER_2_KERNEL_21;
static const uint32_t layer_2_kernel_22[] = LAYER_2_KERNEL_22;
static const uint32_t layer_2_kernel_23[] = LAYER_2_KERNEL_23;
static const uint32_t layer_2_kernel_24[] = LAYER_2_KERNEL_24;
static const uint32_t layer_2_kernel_25[] = LAYER_2_KERNEL_25;
static const uint32_t layer_2_kernel_26[] = LAYER_2_KERNEL_26;
static const uint32_t layer_2_kernel_27[] = LAYER_2_KERNEL_27;
static const uint32_t layer_2_kernel_28[] = LAYER_2_KERNEL_28;
static const uint32_t layer_2_kernel_29[] = LAYER_2_KERNEL_29;
static const uint32_t layer_2_kernel_30[] = LAYER_2_KERNEL_30;
static const uint32_t layer_2_kernel_31[] = LAYER_2_KERNEL_31;
static const uint32_t layer_3_kernel_0[] = LAYER_3_KERNEL_0;
static const uint32_t layer_3_kernel_1[] = LAYER_3_KERNEL_1;
static const uint32_t layer_3_kernel_2[] = LAYER_3_KERNEL_2;
static const uint32_t layer_3_kernel_3[] = LAYER_3_KERNEL_3;
static const uint32_t layer_3_kernel_4[] = LAYER_3_KERNEL_4;
static const uint32_t layer_3_kernel_5[] = LAYER_3_KERNEL_5;
static const uint32_t layer_3_kernel_6[] = LAYER_3_KERNEL_6;
static const uint32_t layer_3_kernel_7[] = LAYER_3_KERNEL_7;
static const uint32_t layer_3_kernel_8[] = LAYER_3_KERNEL_8;
static const uint32_t layer_3_kernel_9[] = LAYER_3_KERNEL_9;
static const uint32_t layer_3_kernel_10[] = LAYER_3_KERNEL_10;
static const uint32_t layer_3_kernel_11[] = LAYER_3_KERNEL_11;
static const uint32_t layer_3_kernel_12[] = LAYER_3_KERNEL_12;
static const uint32_t layer_3_kernel_13[] = LAYER_3_KERNEL_13;
static const uint32_t layer_3_kernel_14[] = LAYER_3_KERNEL_14;
static const uint32_t layer_3_kernel_15[] = LAYER_3_KERNEL_15;
static const uint32_t layer_3_kernel_16[] = LAYER_3_KERNEL_16;
static const uint32_t layer_3_kernel_17[] = LAYER_3_KERNEL_17;
static const uint32_t layer_3_kernel_18[] = LAYER_3_KERNEL_18;
static const uint32_t layer_3_kernel_19[] = LAYER_3_KERNEL_19;
static const uint32_t layer_3_kernel_20[] = LAYER_3_KERNEL_20;
static const uint32_t layer_3_kernel_21[] = LAYER_3_KERNEL_21;
static const uint32_t layer_3_kernel_22[] = LAYER_3_KERNEL_22;
static const uint32_t layer_3_kernel_23[] = LAYER_3_KERNEL_23;
static const uint32_t layer_3_kernel_24[] = LAYER_3_KERNEL_24;
static const uint32_t layer_3_kernel_25[] = LAYER_3_KERNEL_25;
static const uint32_t layer_3_kernel_26[] = LAYER_3_KERNEL_26;
static const uint32_t layer_3_kernel_27[] = LAYER_3_KERNEL_27;
static const uint32_t layer_3_kernel_28[] = LAYER_3_KERNEL_28;
static const uint32_t layer_3_kernel_29[] = LAYER_3_KERNEL_29;
static const uint32_t layer_3_kernel_30[] = LAYER_3_KERNEL_30;
static const uint32_t layer_3_kernel_31[] = LAYER_3_KERNEL_31;
static const uint32_t layer_3_kernel_32[] = LAYER_3_KERNEL_32;
static const uint32_t layer_3_kernel_33[] = LAYER_3_KERNEL_33;
static const uint32_t layer_3_kernel_34[] = LAYER_3_KERNEL_34;
static const uint32_t layer_3_kernel_35[] = LAYER_3_KERNEL_35;
static const uint32_t layer_3_kernel_36[] = LAYER_3_KERNEL_36;
static const uint32_t layer_3_kernel_37[] = LAYER_3_KERNEL_37;
static const uint32_t layer_3_kernel_38[] = LAYER_3_KERNEL_38;
static const uint32_t layer_3_kernel_39[] = LAYER_3_KERNEL_39;
static const uint32_t layer_3_kernel_40[] = LAYER_3_KERNEL_40;
static const uint32_t layer_3_kernel_41[] = LAYER_3_KERNEL_41;
static const uint32_t layer_3_kernel_42[] = LAYER_3_KERNEL_42;
static const uint32_t layer_3_kernel_43[] = LAYER_3_KERNEL_43;
static const uint32_t layer_3_kernel_44[] = LAYER_3_KERNEL_44;
static const uint32_t layer_3_kernel_45[] = LAYER_3_KERNEL_45;
static const uint32_t layer_3_kernel_46[] = LAYER_3_KERNEL_46;
static const uint32_t layer_3_kernel_47[] = LAYER_3_KERNEL_47;
static const uint32_t layer_3_kernel_48[] = LAYER_3_KERNEL_48;
static const uint32_t layer_3_kernel_49[] = LAYER_3_KERNEL_49;
static const uint32_t layer_3_kernel_50[] = LAYER_3_KERNEL_50;
static const uint32_t layer_3_kernel_51[] = LAYER_3_KERNEL_51;
static const uint32_t layer_3_kernel_52[] = LAYER_3_KERNEL_52;
static const uint32_t layer_3_kernel_53[] = LAYER_3_KERNEL_53;
static const uint32_t layer_3_kernel_54[] = LAYER_3_KERNEL_54;
static const uint32_t layer_3_kernel_55[] = LAYER_3_KERNEL_55;
static const uint32_t layer_3_kernel_56[] = LAYER_3_KERNEL_56;
static const uint32_t layer_3_kernel_57[] = LAYER_3_KERNEL_57;
static const uint32_t layer_3_kernel_58[] = LAYER_3_KERNEL_58;
static const uint32_t layer_3_kernel_59[] = LAYER_3_KERNEL_59;
static const uint32_t layer_3_kernel_60[] = LAYER_3_KERNEL_60;
static const uint32_t layer_3_kernel_61[] = LAYER_3_KERNEL_61;
static const uint32_t layer_3_kernel_62[] = LAYER_3_KERNEL_62;
static const uint32_t layer_3_kernel_63[] = LAYER_3_KERNEL_63;
static const uint32_t layer_4_kernel_32[] = LAYER_4_KERNEL_32;
static const uint32_t layer_4_kernel_33[] = LAYER_4_KERNEL_33;
static const uint32_t layer_4_kernel_34[] = LAYER_4_KERNEL_34;
static const uint32_t layer_4_kernel_35[] = LAYER_4_KERNEL_35;
static const uint32_t layer_4_kernel_36[] = LAYER_4_KERNEL_36;
static const uint32_t layer_4_kernel_37[] = LAYER_4_KERNEL_37;
static const uint32_t layer_4_kernel_38[] = LAYER_4_KERNEL_38;
static const uint32_t layer_4_kernel_39[] = LAYER_4_KERNEL_39;
static const uint32_t layer_4_kernel_40[] = LAYER_4_KERNEL_40;
static const uint32_t layer_4_kernel_41[] = LAYER_4_KERNEL_41;
static const uint32_t layer_4_kernel_42[] = LAYER_4_KERNEL_42;
static const uint32_t layer_4_kernel_43[] = LAYER_4_KERNEL_43;
static const uint32_t layer_4_kernel_44[] = LAYER_4_KERNEL_44;
static const uint32_t layer_4_kernel_45[] = LAYER_4_KERNEL_45;
static const uint32_t layer_4_kernel_46[] = LAYER_4_KERNEL_46;
static const uint32_t layer_4_kernel_47[] = LAYER_4_KERNEL_47;
static const uint32_t layer_4_kernel_48[] = LAYER_4_KERNEL_48;
static const uint32_t layer_4_kernel_49[] = LAYER_4_KERNEL_49;
static const uint32_t layer_4_kernel_50[] = LAYER_4_KERNEL_50;
static const uint32_t layer_4_kernel_51[] = LAYER_4_KERNEL_51;
static const uint32_t layer_4_kernel_52[] = LAYER_4_KERNEL_52;
static const uint32_t layer_4_kernel_53[] = LAYER_4_KERNEL_53;
static const uint32_t layer_4_kernel_54[] = LAYER_4_KERNEL_54;
static const uint32_t layer_4_kernel_55[] = LAYER_4_KERNEL_55;
static const uint32_t layer_4_kernel_56[] = LAYER_4_KERNEL_56;
static const uint32_t layer_4_kernel_57[] = LAYER_4_KERNEL_57;
static const uint32_t layer_4_kernel_58[] = LAYER_4_KERNEL_58;
static const uint32_t layer_4_kernel_59[] = LAYER_4_KERNEL_59;
static const uint32_t layer_4_kernel_60[] = LAYER_4_KERNEL_60;
static const uint32_t layer_4_kernel_61[] = LAYER_4_KERNEL_61;
static const uint32_t layer_4_kernel_62[] = LAYER_4_KERNEL_62;
static const uint32_t layer_4_kernel_63[] = LAYER_4_KERNEL_63;
static const uint32_t layer_5_kernel_0[] = LAYER_5_KERNEL_0;
static const uint32_t layer_5_kernel_1[] = LAYER_5_KERNEL_1;
static const uint32_t layer_5_kernel_2[] = LAYER_5_KERNEL_2;
static const uint32_t layer_5_kernel_3[] = LAYER_5_KERNEL_3;
static const uint32_t layer_5_kernel_4[] = LAYER_5_KERNEL_4;
static const uint32_t layer_5_kernel_5[] = LAYER_5_KERNEL_5;
static const uint32_t layer_5_kernel_6[] = LAYER_5_KERNEL_6;
static const uint32_t layer_5_kernel_7[] = LAYER_5_KERNEL_7;
static const uint32_t layer_5_kernel_8[] = LAYER_5_KERNEL_8;
static const uint32_t layer_5_kernel_9[] = LAYER_5_KERNEL_9;
static const uint32_t layer_5_kernel_10[] = LAYER_5_KERNEL_10;
static const uint32_t layer_5_kernel_11[] = LAYER_5_KERNEL_11;
static const uint32_t layer_5_kernel_12[] = LAYER_5_KERNEL_12;
static const uint32_t layer_5_kernel_13[] = LAYER_5_KERNEL_13;
static const uint32_t layer_5_kernel_14[] = LAYER_5_KERNEL_14;
static const uint32_t layer_5_kernel_15[] = LAYER_5_KERNEL_15;
static const uint32_t layer_5_kernel_16[] = LAYER_5_KERNEL_16;
static const uint32_t layer_5_kernel_17[] = LAYER_5_KERNEL_17;
static const uint32_t layer_5_kernel_18[] = LAYER_5_KERNEL_18;
static const uint32_t layer_5_kernel_19[] = LAYER_5_KERNEL_19;
static const uint32_t layer_5_kernel_20[] = LAYER_5_KERNEL_20;
static const uint32_t layer_5_kernel_21[] = LAYER_5_KERNEL_21;
static const uint32_t layer_5_kernel_22[] = LAYER_5_KERNEL_22;
static const uint32_t layer_5_kernel_23[] = LAYER_5_KERNEL_23;
static const uint32_t layer_5_kernel_24[] = LAYER_5_KERNEL_24;
static const uint32_t layer_5_kernel_25[] = LAYER_5_KERNEL_25;
static const uint32_t layer_5_kernel_26[] = LAYER_5_KERNEL_26;
static const uint32_t layer_5_kernel_27[] = LAYER_5_KERNEL_27;
static const uint32_t layer_5_kernel_28[] = LAYER_5_KERNEL_28;
static const uint32_t layer_5_kernel_29[] = LAYER_5_KERNEL_29;
static const uint32_t layer_5_kernel_30[] = LAYER_5_KERNEL_30;
static const uint32_t layer_5_kernel_31[] = LAYER_5_KERNEL_31;
static const uint32_t layer_5_kernel_32[] = LAYER_5_KERNEL_32;
static const uint32_t layer_5_kernel_33[] = LAYER_5_KERNEL_33;
static const uint32_t layer_5_kernel_34[] = LAYER_5_KERNEL_34;
static const uint32_t layer_5_kernel_35[] = LAYER_5_KERNEL_35;
static const uint32_t layer_5_kernel_36[] = LAYER_5_KERNEL_36;
static const uint32_t layer_5_kernel_37[] = LAYER_5_KERNEL_37;
static const uint32_t layer_5_kernel_38[] = LAYER_5_KERNEL_38;
static const uint32_t layer_5_kernel_39[] = LAYER_5_KERNEL_39;
static const uint32_t layer_5_kernel_40[] = LAYER_5_KERNEL_40;
static const uint32_t layer_5_kernel_41[] = LAYER_5_KERNEL_41;
static const uint32_t layer_5_kernel_42[] = LAYER_5_KERNEL_42;
static const uint32_t layer_5_kernel_43[] = LAYER_5_KERNEL_43;
static const uint32_t layer_5_kernel_44[] = LAYER_5_KERNEL_44;
static const uint32_t layer_5_kernel_45[] = LAYER_5_KERNEL_45;
static const uint32_t layer_5_kernel_46[] = LAYER_5_KERNEL_46;
static const uint32_t layer_5_kernel_47[] = LAYER_5_KERNEL_47;
static const uint32_t layer_5_kernel_48[] = LAYER_5_KERNEL_48;
static const uint32_t layer_5_kernel_49[] = LAYER_5_KERNEL_49;
static const uint32_t layer_5_kernel_50[] = LAYER_5_KERNEL_50;
static const uint32_t layer_5_kernel_51[] = LAYER_5_KERNEL_51;
static const uint32_t layer_5_kernel_52[] = LAYER_5_KERNEL_52;
static const uint32_t layer_5_kernel_53[] = LAYER_5_KERNEL_53;
static const uint32_t layer_5_kernel_54[] = LAYER_5_KERNEL_54;
static const uint32_t layer_5_kernel_55[] = LAYER_5_KERNEL_55;
static const uint32_t layer_5_kernel_56[] = LAYER_5_KERNEL_56;
static const uint32_t layer_5_kernel_57[] = LAYER_5_KERNEL_57;
static const uint32_t layer_5_kernel_58[] = LAYER_5_KERNEL_58;
static const uint32_t layer_5_kernel_59[] = LAYER_5_KERNEL_59;
static const uint32_t layer_5_kernel_60[] = LAYER_5_KERNEL_60;
static const uint32_t layer_5_kernel_61[] = LAYER_5_KERNEL_61;
static const uint32_t layer_5_kernel_62[] = LAYER_5_KERNEL_62;
static const uint32_t layer_5_kernel_63[] = LAYER_5_KERNEL_63;
static const uint32_t layer_6_kernel_0[] = LAYER_6_KERNEL_0;
static const uint32_t layer_6_kernel_1[] = LAYER_6_KERNEL_1;
static const uint32_t layer_6_kernel_2[] = LAYER_6_KERNEL_2;
static const uint32_t layer_6_kernel_3[] = LAYER_6_KERNEL_3;
static const uint32_t layer_6_kernel_4[] = LAYER_6_KERNEL_4;
static const uint32_t layer_6_kernel_5[] = LAYER_6_KERNEL_5;
static const uint32_t layer_6_kernel_6[] = LAYER_6_KERNEL_6;
static const uint32_t layer_6_kernel_7[] = LAYER_6_KERNEL_7;
static const uint32_t layer_6_kernel_8[] = LAYER_6_KERNEL_8;
static const uint32_t layer_6_kernel_9[] = LAYER_6_KERNEL_9;
static const uint32_t layer_6_kernel_10[] = LAYER_6_KERNEL_10;
static const uint32_t layer_6_kernel_11[] = LAYER_6_KERNEL_11;
static const uint32_t layer_6_kernel_12[] = LAYER_6_KERNEL_12;
static const uint32_t layer_6_kernel_13[] = LAYER_6_KERNEL_13;
static const uint32_t layer_6_kernel_14[] = LAYER_6_KERNEL_14;
static const uint32_t layer_6_kernel_15[] = LAYER_6_KERNEL_15;
static const uint32_t layer_6_kernel_16[] = LAYER_6_KERNEL_16;
static const uint32_t layer_6_kernel_17[] = LAYER_6_KERNEL_17;
static const uint32_t layer_6_kernel_18[] = LAYER_6_KERNEL_18;
static const uint32_t layer_6_kernel_19[] = LAYER_6_KERNEL_19;
static const uint32_t layer_6_kernel_20[] = LAYER_6_KERNEL_20;
static const uint32_t layer_6_kernel_21[] = LAYER_6_KERNEL_21;
static const uint32_t layer_6_kernel_22[] = LAYER_6_KERNEL_22;
static const uint32_t layer_6_kernel_23[] = LAYER_6_KERNEL_23;
static const uint32_t layer_6_kernel_24[] = LAYER_6_KERNEL_24;
static const uint32_t layer_6_kernel_25[] = LAYER_6_KERNEL_25;
static const uint32_t layer_6_kernel_26[] = LAYER_6_KERNEL_26;
static const uint32_t layer_6_kernel_27[] = LAYER_6_KERNEL_27;
static const uint32_t layer_6_kernel_28[] = LAYER_6_KERNEL_28;
static const uint32_t layer_6_kernel_29[] = LAYER_6_KERNEL_29;
static const uint32_t layer_6_kernel_30[] = LAYER_6_KERNEL_30;
static const uint32_t layer_6_kernel_31[] = LAYER_6_KERNEL_31;
static const uint32_t layer_6_kernel_32[] = LAYER_6_KERNEL_32;
static const uint32_t layer_6_kernel_33[] = LAYER_6_KERNEL_33;
static const uint32_t layer_6_kernel_34[] = LAYER_6_KERNEL_34;
static const uint32_t layer_6_kernel_35[] = LAYER_6_KERNEL_35;
static const uint32_t layer_6_kernel_36[] = LAYER_6_KERNEL_36;
static const uint32_t layer_6_kernel_37[] = LAYER_6_KERNEL_37;
static const uint32_t layer_6_kernel_38[] = LAYER_6_KERNEL_38;
static const uint32_t layer_6_kernel_39[] = LAYER_6_KERNEL_39;
static const uint32_t layer_6_kernel_40[] = LAYER_6_KERNEL_40;
static const uint32_t layer_6_kernel_41[] = LAYER_6_KERNEL_41;
static const uint32_t layer_6_kernel_42[] = LAYER_6_KERNEL_42;
static const uint32_t layer_6_kernel_43[] = LAYER_6_KERNEL_43;
static const uint32_t layer_6_kernel_44[] = LAYER_6_KERNEL_44;
static const uint32_t layer_6_kernel_45[] = LAYER_6_KERNEL_45;
static const uint32_t layer_6_kernel_46[] = LAYER_6_KERNEL_46;
static const uint32_t layer_6_kernel_47[] = LAYER_6_KERNEL_47;
static const uint32_t layer_6_kernel_48[] = LAYER_6_KERNEL_48;
static const uint32_t layer_6_kernel_49[] = LAYER_6_KERNEL_49;
static const uint32_t layer_6_kernel_50[] = LAYER_6_KERNEL_50;
static const uint32_t layer_6_kernel_51[] = LAYER_6_KERNEL_51;
static const uint32_t layer_6_kernel_52[] = LAYER_6_KERNEL_52;
static const uint32_t layer_6_kernel_53[] = LAYER_6_KERNEL_53;
static const uint32_t layer_6_kernel_54[] = LAYER_6_KERNEL_54;
static const uint32_t layer_6_kernel_55[] = LAYER_6_KERNEL_55;
static const uint32_t layer_6_kernel_56[] = LAYER_6_KERNEL_56;
static const uint32_t layer_6_kernel_57[] = LAYER_6_KERNEL_57;
static const uint32_t layer_6_kernel_58[] = LAYER_6_KERNEL_58;
static const uint32_t layer_6_kernel_59[] = LAYER_6_KERNEL_59;
static const uint32_t layer_6_kernel_60[] = LAYER_6_KERNEL_60;
static const uint32_t layer_6_kernel_61[] = LAYER_6_KERNEL_61;
static const uint32_t layer_6_kernel_62[] = LAYER_6_KERNEL_62;
static const uint32_t layer_6_kernel_63[] = LAYER_6_KERNEL_63;
static const uint32_t layer_7_kernel_0[] = LAYER_7_KERNEL_0;
static const uint32_t layer_7_kernel_1[] = LAYER_7_KERNEL_1;
static const uint32_t layer_7_kernel_2[] = LAYER_7_KERNEL_2;
static const uint32_t layer_7_kernel_3[] = LAYER_7_KERNEL_3;
static const uint32_t layer_7_kernel_4[] = LAYER_7_KERNEL_4;
static const uint32_t layer_7_kernel_5[] = LAYER_7_KERNEL_5;
static const uint32_t layer_7_kernel_6[] = LAYER_7_KERNEL_6;
static const uint32_t layer_7_kernel_7[] = LAYER_7_KERNEL_7;
static const uint32_t layer_7_kernel_8[] = LAYER_7_KERNEL_8;
static const uint32_t layer_7_kernel_9[] = LAYER_7_KERNEL_9;
static const uint32_t layer_7_kernel_10[] = LAYER_7_KERNEL_10;
static const uint32_t layer_7_kernel_11[] = LAYER_7_KERNEL_11;
static const uint32_t layer_7_kernel_12[] = LAYER_7_KERNEL_12;
static const uint32_t layer_7_kernel_13[] = LAYER_7_KERNEL_13;
static const uint32_t layer_7_kernel_14[] = LAYER_7_KERNEL_14;
static const uint32_t layer_7_kernel_15[] = LAYER_7_KERNEL_15;
static const uint32_t layer_7_kernel_16[] = LAYER_7_KERNEL_16;
static const uint32_t layer_7_kernel_17[] = LAYER_7_KERNEL_17;
static const uint32_t layer_7_kernel_18[] = LAYER_7_KERNEL_18;
static const uint32_t layer_7_kernel_19[] = LAYER_7_KERNEL_19;
static const uint32_t layer_7_kernel_20[] = LAYER_7_KERNEL_20;
static const uint32_t layer_7_kernel_21[] = LAYER_7_KERNEL_21;
static const uint32_t layer_7_kernel_22[] = LAYER_7_KERNEL_22;
static const uint32_t layer_7_kernel_23[] = LAYER_7_KERNEL_23;
static const uint32_t layer_7_kernel_24[] = LAYER_7_KERNEL_24;
static const uint32_t layer_7_kernel_25[] = LAYER_7_KERNEL_25;
static const uint32_t layer_7_kernel_26[] = LAYER_7_KERNEL_26;
static const uint32_t layer_7_kernel_27[] = LAYER_7_KERNEL_27;
static const uint32_t layer_7_kernel_28[] = LAYER_7_KERNEL_28;
static const uint32_t layer_7_kernel_29[] = LAYER_7_KERNEL_29;
static const uint32_t layer_7_kernel_30[] = LAYER_7_KERNEL_30;
static const uint32_t layer_7_kernel_31[] = LAYER_7_KERNEL_31;
static const uint32_t layer_7_kernel_32[] = LAYER_7_KERNEL_32;
static const uint32_t layer_7_kernel_33[] = LAYER_7_KERNEL_33;
static const uint32_t layer_7_kernel_34[] = LAYER_7_KERNEL_34;
static const uint32_t layer_7_kernel_35[] = LAYER_7_KERNEL_35;
static const uint32_t layer_7_kernel_36[] = LAYER_7_KERNEL_36;
static const uint32_t layer_7_kernel_37[] = LAYER_7_KERNEL_37;
static const uint32_t layer_7_kernel_38[] = LAYER_7_KERNEL_38;
static const uint32_t layer_7_kernel_39[] = LAYER_7_KERNEL_39;
static const uint32_t layer_7_kernel_40[] = LAYER_7_KERNEL_40;
static const uint32_t layer_7_kernel_41[] = LAYER_7_KERNEL_41;
static const uint32_t layer_7_kernel_42[] = LAYER_7_KERNEL_42;
static const uint32_t layer_7_kernel_43[] = LAYER_7_KERNEL_43;
static const uint32_t layer_7_kernel_44[] = LAYER_7_KERNEL_44;
static const uint32_t layer_7_kernel_45[] = LAYER_7_KERNEL_45;
static const uint32_t layer_7_kernel_46[] = LAYER_7_KERNEL_46;
static const uint32_t layer_7_kernel_47[] = LAYER_7_KERNEL_47;
static const uint32_t layer_7_kernel_48[] = LAYER_7_KERNEL_48;
static const uint32_t layer_7_kernel_49[] = LAYER_7_KERNEL_49;
static const uint32_t layer_7_kernel_50[] = LAYER_7_KERNEL_50;
static const uint32_t layer_7_kernel_51[] = LAYER_7_KERNEL_51;
static const uint32_t layer_7_kernel_52[] = LAYER_7_KERNEL_52;
static const uint32_t layer_7_kernel_53[] = LAYER_7_KERNEL_53;
static const uint32_t layer_7_kernel_54[] = LAYER_7_KERNEL_54;
static const uint32_t layer_7_kernel_55[] = LAYER_7_KERNEL_55;
static const uint32_t layer_7_kernel_56[] = LAYER_7_KERNEL_56;
static const uint32_t layer_7_kernel_57[] = LAYER_7_KERNEL_57;
static const uint32_t layer_7_kernel_58[] = LAYER_7_KERNEL_58;
static const uint32_t layer_7_kernel_59[] = LAYER_7_KERNEL_59;
static const uint32_t layer_7_kernel_60[] = LAYER_7_KERNEL_60;
static const uint32_t layer_7_kernel_61[] = LAYER_7_KERNEL_61;
static const uint32_t layer_7_kernel_62[] = LAYER_7_KERNEL_62;
static const uint32_t layer_7_kernel_63[] = LAYER_7_KERNEL_63;
static const uint32_t layer_8_kernel_0[] = LAYER_8_KERNEL_0;
static const uint32_t layer_8_kernel_1[] = LAYER_8_KERNEL_1;
static const uint32_t layer_8_kernel_2[] = LAYER_8_KERNEL_2;
static const uint32_t layer_8_kernel_3[] = LAYER_8_KERNEL_3;
static const uint32_t layer_8_kernel_4[] = LAYER_8_KERNEL_4;
static const uint32_t layer_8_kernel_5[] = LAYER_8_KERNEL_5;
static const uint32_t layer_8_kernel_6[] = LAYER_8_KERNEL_6;
static const uint32_t layer_8_kernel_7[] = LAYER_8_KERNEL_7;
static const uint32_t layer_8_kernel_8[] = LAYER_8_KERNEL_8;
static const uint32_t layer_8_kernel_9[] = LAYER_8_KERNEL_9;
static const uint32_t layer_8_kernel_10[] = LAYER_8_KERNEL_10;
static const uint32_t layer_8_kernel_11[] = LAYER_8_KERNEL_11;
static const uint32_t layer_8_kernel_12[] = LAYER_8_KERNEL_12;
static const uint32_t layer_8_kernel_13[] = LAYER_8_KERNEL_13;
static const uint32_t layer_8_kernel_14[] = LAYER_8_KERNEL_14;
static const uint32_t layer_8_kernel_15[] = LAYER_8_KERNEL_15;
static const uint32_t layer_8_kernel_16[] = LAYER_8_KERNEL_16;
static const uint32_t layer_8_kernel_17[] = LAYER_8_KERNEL_17;
static const uint32_t layer_8_kernel_18[] = LAYER_8_KERNEL_18;
static const uint32_t layer_8_kernel_19[] = LAYER_8_KERNEL_19;
static const uint32_t layer_8_kernel_20[] = LAYER_8_KERNEL_20;
static const uint32_t layer_8_kernel_21[] = LAYER_8_KERNEL_21;
static const uint32_t layer_8_kernel_22[] = LAYER_8_KERNEL_22;
static const uint32_t layer_8_kernel_23[] = LAYER_8_KERNEL_23;
static const uint32_t layer_8_kernel_24[] = LAYER_8_KERNEL_24;
static const uint32_t layer_8_kernel_25[] = LAYER_8_KERNEL_25;
static const uint32_t layer_8_kernel_26[] = LAYER_8_KERNEL_26;
static const uint32_t layer_8_kernel_27[] = LAYER_8_KERNEL_27;
static const uint32_t layer_8_kernel_28[] = LAYER_8_KERNEL_28;
static const uint32_t layer_8_kernel_29[] = LAYER_8_KERNEL_29;
static const uint32_t layer_8_kernel_30[] = LAYER_8_KERNEL_30;
static const uint32_t layer_8_kernel_31[] = LAYER_8_KERNEL_31;
static const uint32_t layer_8_kernel_32[] = LAYER_8_KERNEL_32;
static const uint32_t layer_8_kernel_33[] = LAYER_8_KERNEL_33;
static const uint32_t layer_8_kernel_34[] = LAYER_8_KERNEL_34;
static const uint32_t layer_8_kernel_35[] = LAYER_8_KERNEL_35;
static const uint32_t layer_8_kernel_36[] = LAYER_8_KERNEL_36;
static const uint32_t layer_8_kernel_37[] = LAYER_8_KERNEL_37;
static const uint32_t layer_8_kernel_38[] = LAYER_8_KERNEL_38;
static const uint32_t layer_8_kernel_39[] = LAYER_8_KERNEL_39;
static const uint32_t layer_8_kernel_40[] = LAYER_8_KERNEL_40;
static const uint32_t layer_8_kernel_41[] = LAYER_8_KERNEL_41;
static const uint32_t layer_8_kernel_42[] = LAYER_8_KERNEL_42;
static const uint32_t layer_8_kernel_43[] = LAYER_8_KERNEL_43;
static const uint32_t layer_8_kernel_44[] = LAYER_8_KERNEL_44;
static const uint32_t layer_8_kernel_45[] = LAYER_8_KERNEL_45;
static const uint32_t layer_8_kernel_46[] = LAYER_8_KERNEL_46;
static const uint32_t layer_8_kernel_47[] = LAYER_8_KERNEL_47;
static const uint32_t layer_8_kernel_48[] = LAYER_8_KERNEL_48;
static const uint32_t layer_8_kernel_49[] = LAYER_8_KERNEL_49;
static const uint32_t layer_8_kernel_50[] = LAYER_8_KERNEL_50;
static const uint32_t layer_8_kernel_51[] = LAYER_8_KERNEL_51;
static const uint32_t layer_8_kernel_52[] = LAYER_8_KERNEL_52;
static const uint32_t layer_8_kernel_53[] = LAYER_8_KERNEL_53;
static const uint32_t layer_8_kernel_54[] = LAYER_8_KERNEL_54;
static const uint32_t layer_8_kernel_55[] = LAYER_8_KERNEL_55;
static const uint32_t layer_8_kernel_56[] = LAYER_8_KERNEL_56;
static const uint32_t layer_8_kernel_57[] = LAYER_8_KERNEL_57;
static const uint32_t layer_8_kernel_58[] = LAYER_8_KERNEL_58;
static const uint32_t layer_8_kernel_59[] = LAYER_8_KERNEL_59;
static const uint32_t layer_8_kernel_60[] = LAYER_8_KERNEL_60;
static const uint32_t layer_8_kernel_61[] = LAYER_8_KERNEL_61;
static const uint32_t layer_8_kernel_62[] = LAYER_8_KERNEL_62;
static const uint32_t layer_8_kernel_63[] = LAYER_8_KERNEL_63;
static const uint32_t layer_9_kernel_0[] = LAYER_9_KERNEL_0;
static const uint32_t layer_9_kernel_1[] = LAYER_9_KERNEL_1;
static const uint32_t layer_9_kernel_2[] = LAYER_9_KERNEL_2;
static const uint32_t layer_9_kernel_3[] = LAYER_9_KERNEL_3;
static const uint32_t layer_9_kernel_4[] = LAYER_9_KERNEL_4;
static const uint32_t layer_9_kernel_5[] = LAYER_9_KERNEL_5;
static const uint32_t layer_9_kernel_6[] = LAYER_9_KERNEL_6;
static const uint32_t layer_9_kernel_7[] = LAYER_9_KERNEL_7;
static const uint32_t layer_9_kernel_8[] = LAYER_9_KERNEL_8;
static const uint32_t layer_9_kernel_9[] = LAYER_9_KERNEL_9;
static const uint32_t layer_9_kernel_10[] = LAYER_9_KERNEL_10;
static const uint32_t layer_9_kernel_11[] = LAYER_9_KERNEL_11;
static const uint32_t layer_9_kernel_12[] = LAYER_9_KERNEL_12;
static const uint32_t layer_9_kernel_13[] = LAYER_9_KERNEL_13;
static const uint32_t layer_9_kernel_14[] = LAYER_9_KERNEL_14;
static const uint32_t layer_9_kernel_15[] = LAYER_9_KERNEL_15;
static const uint32_t layer_9_kernel_16[] = LAYER_9_KERNEL_16;
static const uint32_t layer_9_kernel_17[] = LAYER_9_KERNEL_17;
static const uint32_t layer_9_kernel_18[] = LAYER_9_KERNEL_18;
static const uint32_t layer_9_kernel_19[] = LAYER_9_KERNEL_19;
static const uint32_t layer_9_kernel_20[] = LAYER_9_KERNEL_20;
static const uint32_t layer_9_kernel_21[] = LAYER_9_KERNEL_21;
static const uint32_t layer_9_kernel_22[] = LAYER_9_KERNEL_22;
static const uint32_t layer_9_kernel_23[] = LAYER_9_KERNEL_23;
static const uint32_t layer_9_kernel_24[] = LAYER_9_KERNEL_24;
static const uint32_t layer_9_kernel_25[] = LAYER_9_KERNEL_25;
static const uint32_t layer_9_kernel_26[] = LAYER_9_KERNEL_26;
static const uint32_t layer_9_kernel_27[] = LAYER_9_KERNEL_27;
static const uint32_t layer_9_kernel_28[] = LAYER_9_KERNEL_28;
static const uint32_t layer_9_kernel_29[] = LAYER_9_KERNEL_29;
static const uint32_t layer_9_kernel_30[] = LAYER_9_KERNEL_30;
static const uint32_t layer_9_kernel_31[] = LAYER_9_KERNEL_31;
static const uint32_t layer_9_kernel_32[] = LAYER_9_KERNEL_32;
static const uint32_t layer_9_kernel_33[] = LAYER_9_KERNEL_33;
static const uint32_t layer_9_kernel_34[] = LAYER_9_KERNEL_34;
static const uint32_t layer_9_kernel_35[] = LAYER_9_KERNEL_35;
static const uint32_t layer_9_kernel_36[] = LAYER_9_KERNEL_36;
static const uint32_t layer_9_kernel_37[] = LAYER_9_KERNEL_37;
static const uint32_t layer_9_kernel_38[] = LAYER_9_KERNEL_38;
static const uint32_t layer_9_kernel_39[] = LAYER_9_KERNEL_39;
static const uint32_t layer_9_kernel_40[] = LAYER_9_KERNEL_40;
static const uint32_t layer_9_kernel_41[] = LAYER_9_KERNEL_41;
static const uint32_t layer_9_kernel_42[] = LAYER_9_KERNEL_42;
static const uint32_t layer_9_kernel_43[] = LAYER_9_KERNEL_43;
static const uint32_t layer_9_kernel_44[] = LAYER_9_KERNEL_44;
static const uint32_t layer_9_kernel_45[] = LAYER_9_KERNEL_45;
static const uint32_t layer_9_kernel_46[] = LAYER_9_KERNEL_46;
static const uint32_t layer_9_kernel_47[] = LAYER_9_KERNEL_47;
static const uint32_t layer_9_kernel_48[] = LAYER_9_KERNEL_48;
static const uint32_t layer_9_kernel_49[] = LAYER_9_KERNEL_49;
static const uint32_t layer_9_kernel_50[] = LAYER_9_KERNEL_50;
static const uint32_t layer_9_kernel_51[] = LAYER_9_KERNEL_51;
static const uint32_t layer_9_kernel_52[] = LAYER_9_KERNEL_52;
static const uint32_t layer_9_kernel_53[] = LAYER_9_KERNEL_53;
static const uint32_t layer_9_kernel_54[] = LAYER_9_KERNEL_54;
static const uint32_t layer_9_kernel_55[] = LAYER_9_KERNEL_55;
static const uint32_t layer_9_kernel_56[] = LAYER_9_KERNEL_56;
static const uint32_t layer_9_kernel_57[] = LAYER_9_KERNEL_57;
static const uint32_t layer_9_kernel_58[] = LAYER_9_KERNEL_58;
static const uint32_t layer_9_kernel_59[] = LAYER_9_KERNEL_59;
static const uint32_t layer_9_kernel_60[] = LAYER_9_KERNEL_60;
static const uint32_t layer_9_kernel_61[] = LAYER_9_KERNEL_61;
static const uint32_t layer_9_kernel_62[] = LAYER_9_KERNEL_62;
static const uint32_t layer_9_kernel_63[] = LAYER_9_KERNEL_63;
static const uint32_t layer_10_kernel_0[] = LAYER_10_KERNEL_0;
static const uint32_t layer_10_kernel_1[] = LAYER_10_KERNEL_1;
static const uint32_t layer_10_kernel_2[] = LAYER_10_KERNEL_2;
static const uint32_t layer_10_kernel_3[] = LAYER_10_KERNEL_3;
static const uint32_t layer_10_kernel_4[] = LAYER_10_KERNEL_4;
static const uint32_t layer_10_kernel_5[] = LAYER_10_KERNEL_5;
static const uint32_t layer_10_kernel_6[] = LAYER_10_KERNEL_6;
static const uint32_t layer_10_kernel_7[] = LAYER_10_KERNEL_7;
static const uint32_t layer_10_kernel_8[] = LAYER_10_KERNEL_8;
static const uint32_t layer_10_kernel_9[] = LAYER_10_KERNEL_9;
static const uint32_t layer_10_kernel_10[] = LAYER_10_KERNEL_10;
static const uint32_t layer_10_kernel_11[] = LAYER_10_KERNEL_11;
static const uint32_t layer_10_kernel_12[] = LAYER_10_KERNEL_12;
static const uint32_t layer_10_kernel_13[] = LAYER_10_KERNEL_13;
static const uint32_t layer_10_kernel_14[] = LAYER_10_KERNEL_14;
static const uint32_t layer_10_kernel_15[] = LAYER_10_KERNEL_15;
static const uint32_t layer_10_kernel_16[] = LAYER_10_KERNEL_16;
static const uint32_t layer_10_kernel_17[] = LAYER_10_KERNEL_17;
static const uint32_t layer_10_kernel_18[] = LAYER_10_KERNEL_18;
static const uint32_t layer_10_kernel_19[] = LAYER_10_KERNEL_19;
static const uint32_t layer_10_kernel_20[] = LAYER_10_KERNEL_20;
static const uint32_t layer_10_kernel_21[] = LAYER_10_KERNEL_21;
static const uint32_t layer_10_kernel_22[] = LAYER_10_KERNEL_22;
static const uint32_t layer_10_kernel_23[] = LAYER_10_KERNEL_23;
static const uint32_t layer_10_kernel_24[] = LAYER_10_KERNEL_24;
static const uint32_t layer_10_kernel_25[] = LAYER_10_KERNEL_25;
static const uint32_t layer_10_kernel_26[] = LAYER_10_KERNEL_26;
static const uint32_t layer_10_kernel_27[] = LAYER_10_KERNEL_27;
static const uint32_t layer_10_kernel_28[] = LAYER_10_KERNEL_28;
static const uint32_t layer_10_kernel_29[] = LAYER_10_KERNEL_29;
static const uint32_t layer_10_kernel_30[] = LAYER_10_KERNEL_30;
static const uint32_t layer_10_kernel_31[] = LAYER_10_KERNEL_31;
static const uint32_t layer_10_kernel_32[] = LAYER_10_KERNEL_32;
static const uint32_t layer_10_kernel_33[] = LAYER_10_KERNEL_33;
static const uint32_t layer_10_kernel_34[] = LAYER_10_KERNEL_34;
static const uint32_t layer_10_kernel_35[] = LAYER_10_KERNEL_35;
static const uint32_t layer_10_kernel_36[] = LAYER_10_KERNEL_36;
static const uint32_t layer_10_kernel_37[] = LAYER_10_KERNEL_37;
static const uint32_t layer_10_kernel_38[] = LAYER_10_KERNEL_38;
static const uint32_t layer_10_kernel_39[] = LAYER_10_KERNEL_39;
static const uint32_t layer_10_kernel_40[] = LAYER_10_KERNEL_40;
static const uint32_t layer_10_kernel_41[] = LAYER_10_KERNEL_41;
static const uint32_t layer_10_kernel_42[] = LAYER_10_KERNEL_42;
static const uint32_t layer_10_kernel_43[] = LAYER_10_KERNEL_43;
static const uint32_t layer_10_kernel_44[] = LAYER_10_KERNEL_44;
static const uint32_t layer_10_kernel_45[] = LAYER_10_KERNEL_45;
static const uint32_t layer_10_kernel_46[] = LAYER_10_KERNEL_46;
static const uint32_t layer_10_kernel_47[] = LAYER_10_KERNEL_47;
static const uint32_t layer_10_kernel_48[] = LAYER_10_KERNEL_48;
static const uint32_t layer_10_kernel_49[] = LAYER_10_KERNEL_49;
static const uint32_t layer_10_kernel_50[] = LAYER_10_KERNEL_50;
static const uint32_t layer_10_kernel_51[] = LAYER_10_KERNEL_51;
static const uint32_t layer_10_kernel_52[] = LAYER_10_KERNEL_52;
static const uint32_t layer_10_kernel_53[] = LAYER_10_KERNEL_53;
static const uint32_t layer_10_kernel_54[] = LAYER_10_KERNEL_54;
static const uint32_t layer_10_kernel_55[] = LAYER_10_KERNEL_55;
static const uint32_t layer_10_kernel_56[] = LAYER_10_KERNEL_56;
static const uint32_t layer_10_kernel_57[] = LAYER_10_KERNEL_57;
static const uint32_t layer_10_kernel_58[] = LAYER_10_KERNEL_58;
static const uint32_t layer_10_kernel_59[] = LAYER_10_KERNEL_59;
static const uint32_t layer_10_kernel_60[] = LAYER_10_KERNEL_60;
static const uint32_t layer_10_kernel_61[] = LAYER_10_KERNEL_61;
static const uint32_t layer_10_kernel_62[] = LAYER_10_KERNEL_62;
static const uint32_t layer_10_kernel_63[] = LAYER_10_KERNEL_63;
static const uint8_t  layer_0_bias_0[] = LAYER_0_BIAS_0;
static const uint8_t  layer_1_bias_0[] = LAYER_1_BIAS_0;
static const uint8_t  layer_2_bias_0[] = LAYER_2_BIAS_0;
static const uint8_t  layer_3_bias_0[] = LAYER_3_BIAS_0;
static const uint8_t  layer_4_bias_0[] = LAYER_4_BIAS_0;
static const uint8_t  layer_5_bias_0[] = LAYER_5_BIAS_0;
static const uint8_t  layer_6_bias_0[] = LAYER_6_BIAS_0;
static const uint8_t  layer_7_bias_0[] = LAYER_7_BIAS_0;
static const uint8_t  layer_8_bias_0[] = LAYER_8_BIAS_0;
static const uint8_t  layer_9_bias_0[] = LAYER_9_BIAS_0;
static const uint8_t  layer_10_bias_0[] = LAYER_10_BIAS_0;
void CNN_ISR(void)
{
  // Acknowledge interrupt to all quadrants
  *((volatile uint32_t *) 0x50100000) &= ~((1<<12) | 1);
  *((volatile uint32_t *) 0x50500000) &= ~((1<<12) | 1);
  *((volatile uint32_t *) 0x50900000) &= ~((1<<12) | 1);
  *((volatile uint32_t *) 0x50d00000) &= ~((1<<12) | 1);

  // CNN_COMPLETE; // Signal that processing is complete
#ifdef CNN_INFERENCE_TIMER
  cnn_time = MXC_TMR_SW_Stop(CNN_INFERENCE_TIMER);
#else
  cnn_time = 1;
#endif
}
int cnn_start(void)
{
  cnn_time = 0;

  *((volatile uint32_t *) 0x50100000) = 0x00100808; // Enable quadrant 0
  *((volatile uint32_t *) 0x50500000) = 0x00100809; // Enable quadrant 1
  *((volatile uint32_t *) 0x50900000) = 0x00100809; // Enable quadrant 2
  *((volatile uint32_t *) 0x50d00000) = 0x00100809; // Enable quadrant 3

#ifdef CNN_INFERENCE_TIMER
  MXC_TMR_SW_Start(CNN_INFERENCE_TIMER);
#endif

  // CNN_START; // Allow capture of processing time
  *((volatile uint32_t *) 0x50100000) = 0x00100009; // Master enable quadrant 0

  return CNN_OK;
}
int cnn_stop(void)
{
  *((volatile uint32_t *) 0x50100000) &= ~1; // Disable quadrant 0

  return CNN_OK;
}
int cnn_enable(uint32_t clock_source, uint32_t clock_divider)
{
  // Reset all domains, restore power to CNN
  MXC_GCFR->reg3 = 0xf; // Reset
  MXC_GCFR->reg1 = 0xf; // Mask memory
  MXC_GCFR->reg0 = 0xf; // Power
  MXC_GCFR->reg2 = 0x0; // Iso
  MXC_GCFR->reg3 = 0x0; // Reset

  MXC_GCR->pclkdiv = (MXC_GCR->pclkdiv & ~(MXC_F_GCR_PCLKDIV_CNNCLKDIV | MXC_F_GCR_PCLKDIV_CNNCLKSEL))
                     | clock_divider | clock_source;
  MXC_SYS_ClockEnable(MXC_SYS_PERIPH_CLOCK_CNN); // Enable CNN clock

  NVIC_SetVector(CNN_IRQn, CNN_ISR); // Set CNN complete vector

  return CNN_OK;
}
int cnn_disable(void)
{
  // Disable CNN clock
  MXC_SYS_ClockDisable(MXC_SYS_PERIPH_CLOCK_CNN);

  // Disable power to CNN
  MXC_GCFR->reg3 = 0xf; // Reset
  MXC_GCFR->reg2 = 0xf; // Iso
  MXC_GCFR->reg0 = 0x0; // Power
  MXC_GCFR->reg1 = 0x0; // Mask memory
  MXC_GCFR->reg3 = 0x0; // Reset

  return CNN_OK;
}
void memcpy32(uint32_t *dst, const uint32_t *src, int n)
{
  while (n-- > 0) {
    *dst++ = *src++;
  }
}
static void memcpy_8to32(uint32_t *dst, const uint8_t *src, int n)
{
  while (n-- > 0) {
    *dst++ = *src++;
  }
}
int cnn_unload(uint32_t *out_buf)
{
  volatile uint32_t *addr;

  // Custom unload for this network, layer 0: 32-bit data, shape: (10, 1, 1)
  addr = (volatile uint32_t *) 0x50404000;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  addr = (volatile uint32_t *) 0x5040c000;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;
  addr = (volatile uint32_t *) 0x50414000;
  *out_buf++ = *addr++;
  *out_buf++ = *addr++;

  return CNN_OK;
}
int cnn_configure_0(void)
{
  // Layer 0 quadrant 0
  *((volatile uint32_t *) 0x50100010) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50100090) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50100310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100690) = 0x0000001f; // TRAM ptr max
  *((volatile uint32_t *) 0x50100790) = 0x00001000; // Post processing register
  *((volatile uint32_t *) 0x50100710) = 0x00070007; // Mask and processor enables

  // Layer 0 quadrant 1
  *((volatile uint32_t *) 0x50500010) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50500090) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50500310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50500410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50500610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500690) = 0x0000001f; // TRAM ptr max

  // Layer 0 quadrant 2
  *((volatile uint32_t *) 0x50900010) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50900090) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50900310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50900410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50900610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900690) = 0x0000001f; // TRAM ptr max

  // Layer 0 quadrant 3
  *((volatile uint32_t *) 0x50d00010) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50d00090) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50d00310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50d00610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00690) = 0x0000001f; // TRAM ptr max


  return CNN_OK;
}
int cnn_configure_1(void)
{
  // Layer 0 quadrant 0
  *((volatile uint32_t *) 0x50100010) = 0x0000001f; // Rows
  *((volatile uint32_t *) 0x50100090) = 0x0000001f; // Columns
  *((volatile uint32_t *) 0x50100390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100510) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50100590) = 0x0000eb20; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x000000f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50100790) = 0x00023000; // Post processing register
  *((volatile uint32_t *) 0x50100710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 1
  *((volatile uint32_t *) 0x50500010) = 0x0000001f; // Rows
  *((volatile uint32_t *) 0x50500090) = 0x0000001f; // Columns
  *((volatile uint32_t *) 0x50500390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50500410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500510) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50500590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a10) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50500610) = 0x000000f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50500790) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50500710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 2
  *((volatile uint32_t *) 0x50900010) = 0x0000001f; // Rows
  *((volatile uint32_t *) 0x50900090) = 0x0000001f; // Columns
  *((volatile uint32_t *) 0x50900390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50900410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900510) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50900590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a10) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50900610) = 0x000000f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50900790) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50900710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 3
  *((volatile uint32_t *) 0x50d00010) = 0x0000001f; // Rows
  *((volatile uint32_t *) 0x50d00090) = 0x0000001f; // Columns
  *((volatile uint32_t *) 0x50d00390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50d00410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00510) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50d00590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a10) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50d00610) = 0x000000f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50d00790) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50d00710) = 0xffffffff; // Mask and processor enables


  return CNN_OK;
}
int cnn_configure_2(void)
{
  // Layer 0 quadrant 0
  *((volatile uint32_t *) 0x50100010) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50100090) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50100310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100590) = 0x00002b20; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100690) = 0x0000001f; // TRAM ptr max
  *((volatile uint32_t *) 0x50100790) = 0x00023000; // Post processing register
  *((volatile uint32_t *) 0x50100710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 1
  *((volatile uint32_t *) 0x50500010) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50500090) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50500310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50500410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50500610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500690) = 0x0000001f; // TRAM ptr max
  *((volatile uint32_t *) 0x50500790) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50500710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 2
  *((volatile uint32_t *) 0x50900010) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50900090) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50900310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50900410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50900610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900690) = 0x0000001f; // TRAM ptr max
  *((volatile uint32_t *) 0x50900790) = 0x00022000; // Post processing register

  // Layer 0 quadrant 3
  *((volatile uint32_t *) 0x50d00010) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50d00090) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50d00310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50d00610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00690) = 0x0000001f; // TRAM ptr max
  *((volatile uint32_t *) 0x50d00790) = 0x00022000; // Post processing register


  return CNN_OK;
}
int cnn_configure_3(void)
{
  // Layer 0 quadrant 0
  *((volatile uint32_t *) 0x50100010) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50100090) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50100190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50100210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50100290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50100310) = 0x00010000; // SRAM write ptr
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100510) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50100590) = 0x0000eba0; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x000000f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100690) = 0x0000000f; // TRAM ptr max
  *((volatile uint32_t *) 0x50100790) = 0x00027000; // Post processing register
  *((volatile uint32_t *) 0x50100710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 1
  *((volatile uint32_t *) 0x50500010) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50500090) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50500190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50500210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50500290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50500310) = 0x00010000; // SRAM write ptr
  *((volatile uint32_t *) 0x50500410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500510) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50500590) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50500a10) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50500610) = 0x000000f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500690) = 0x0000000f; // TRAM ptr max
  *((volatile uint32_t *) 0x50500790) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x50500710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 2
  *((volatile uint32_t *) 0x50900010) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50900090) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50900190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50900210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50900290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50900310) = 0x00010000; // SRAM write ptr
  *((volatile uint32_t *) 0x50900410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900510) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50900590) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50900a10) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50900610) = 0x000000f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900690) = 0x0000000f; // TRAM ptr max
  *((volatile uint32_t *) 0x50900790) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x50900710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 3
  *((volatile uint32_t *) 0x50d00010) = 0x00010021; // Rows
  *((volatile uint32_t *) 0x50d00090) = 0x00010021; // Columns
  *((volatile uint32_t *) 0x50d00190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50d00210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50d00290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50d00310) = 0x00010000; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00510) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50d00590) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50d00a10) = 0x0000f800; // Layer control 2
  *((volatile uint32_t *) 0x50d00610) = 0x000000f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00690) = 0x0000000f; // TRAM ptr max
  *((volatile uint32_t *) 0x50d00790) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x50d00710) = 0xffffffff; // Mask and processor enables


  return CNN_OK;
}
int cnn_configure_4(void)
{
  // Layer 0 quadrant 0
  *((volatile uint32_t *) 0x50100010) = 0x0000000f; // Rows
  *((volatile uint32_t *) 0x50100090) = 0x0000000f; // Columns
  *((volatile uint32_t *) 0x50100310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50100390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100590) = 0x0000cb20; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50100790) = 0x00001000; // Post processing register

  // Layer 0 quadrant 1
  *((volatile uint32_t *) 0x50500010) = 0x0000000f; // Rows
  *((volatile uint32_t *) 0x50500090) = 0x0000000f; // Columns
  *((volatile uint32_t *) 0x50500310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50500390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50500410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50500610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500110) = 0x00000100; // 1D

  // Layer 0 quadrant 2
  *((volatile uint32_t *) 0x50900010) = 0x0000000f; // Rows
  *((volatile uint32_t *) 0x50900090) = 0x0000000f; // Columns
  *((volatile uint32_t *) 0x50900310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50900390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50900410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50900610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50900710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 3
  *((volatile uint32_t *) 0x50d00010) = 0x0000000f; // Rows
  *((volatile uint32_t *) 0x50d00090) = 0x0000000f; // Columns
  *((volatile uint32_t *) 0x50d00310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50d00410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a10) = 0x0001f800; // Layer control 2
  *((volatile uint32_t *) 0x50d00610) = 0x000001f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50d00710) = 0xffffffff; // Mask and processor enables


  return CNN_OK;
}
int cnn_configure_5(void)
{
  // Layer 0 quadrant 0
  *((volatile uint32_t *) 0x50100010) = 0x00010011; // Rows
  *((volatile uint32_t *) 0x50100090) = 0x00010011; // Columns
  *((volatile uint32_t *) 0x50100190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50100210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50100290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50100510) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50100590) = 0x0000eba0; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x000003f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100690) = 0x00000007; // TRAM ptr max
  *((volatile uint32_t *) 0x50100790) = 0x00027000; // Post processing register
  *((volatile uint32_t *) 0x50100710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 1
  *((volatile uint32_t *) 0x50500010) = 0x00010011; // Rows
  *((volatile uint32_t *) 0x50500090) = 0x00010011; // Columns
  *((volatile uint32_t *) 0x50500190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50500210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50500290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50500410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50500510) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50500590) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50500a10) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50500610) = 0x000003f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500690) = 0x00000007; // TRAM ptr max
  *((volatile uint32_t *) 0x50500790) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x50500710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 2
  *((volatile uint32_t *) 0x50900010) = 0x00010011; // Rows
  *((volatile uint32_t *) 0x50900090) = 0x00010011; // Columns
  *((volatile uint32_t *) 0x50900190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50900210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50900290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50900410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50900510) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50900590) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50900a10) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50900610) = 0x000003f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900690) = 0x00000007; // TRAM ptr max
  *((volatile uint32_t *) 0x50900790) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x50900710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 3
  *((volatile uint32_t *) 0x50d00010) = 0x00010011; // Rows
  *((volatile uint32_t *) 0x50d00090) = 0x00010011; // Columns
  *((volatile uint32_t *) 0x50d00190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50d00210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50d00290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50d00410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50d00510) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50d00590) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50d00a10) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50d00610) = 0x000003f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00690) = 0x00000007; // TRAM ptr max
  *((volatile uint32_t *) 0x50d00790) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x50d00710) = 0xffffffff; // Mask and processor enables


  return CNN_OK;
}
int cnn_configure_6(void)
{
  // Layer 0 quadrant 0
  *((volatile uint32_t *) 0x50100010) = 0x00000007; // Rows
  *((volatile uint32_t *) 0x50100090) = 0x00000007; // Columns
  *((volatile uint32_t *) 0x50100310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50100390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50100590) = 0x0000eb20; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x000007f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50100790) = 0x00023000; // Post processing register
  *((volatile uint32_t *) 0x50100710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 1
  *((volatile uint32_t *) 0x50500010) = 0x00000007; // Rows
  *((volatile uint32_t *) 0x50500090) = 0x00000007; // Columns
  *((volatile uint32_t *) 0x50500310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50500390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50500410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50500590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a10) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50500610) = 0x000007f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50500790) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50500710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 2
  *((volatile uint32_t *) 0x50900010) = 0x00000007; // Rows
  *((volatile uint32_t *) 0x50900090) = 0x00000007; // Columns
  *((volatile uint32_t *) 0x50900310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50900390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50900410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50900590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a10) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50900610) = 0x000007f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50900790) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50900710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 3
  *((volatile uint32_t *) 0x50d00010) = 0x00000007; // Rows
  *((volatile uint32_t *) 0x50d00090) = 0x00000007; // Columns
  *((volatile uint32_t *) 0x50d00310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50d00410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50d00590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a10) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50d00610) = 0x000007f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50d00790) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50d00710) = 0xffffffff; // Mask and processor enables


  return CNN_OK;
}
int cnn_configure_7(void)
{
  // Layer 0 quadrant 0
  *((volatile uint32_t *) 0x50100010) = 0x00010009; // Rows
  *((volatile uint32_t *) 0x50100090) = 0x00010009; // Columns
  *((volatile uint32_t *) 0x50100190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50100210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50100290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100510) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50100590) = 0x0000eba0; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x0001f801; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x000003f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100690) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x50100790) = 0x00027000; // Post processing register
  *((volatile uint32_t *) 0x50100710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 1
  *((volatile uint32_t *) 0x50500010) = 0x00010009; // Rows
  *((volatile uint32_t *) 0x50500090) = 0x00010009; // Columns
  *((volatile uint32_t *) 0x50500190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50500210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50500290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50500410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500510) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50500590) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50500a10) = 0x0001f801; // Layer control 2
  *((volatile uint32_t *) 0x50500610) = 0x000003f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500690) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x50500790) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x50500710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 2
  *((volatile uint32_t *) 0x50900010) = 0x00010009; // Rows
  *((volatile uint32_t *) 0x50900090) = 0x00010009; // Columns
  *((volatile uint32_t *) 0x50900190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50900210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50900290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50900410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900510) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50900590) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50900a10) = 0x0001f801; // Layer control 2
  *((volatile uint32_t *) 0x50900610) = 0x000003f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900690) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x50900790) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x50900710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 3
  *((volatile uint32_t *) 0x50d00010) = 0x00010009; // Rows
  *((volatile uint32_t *) 0x50d00090) = 0x00010009; // Columns
  *((volatile uint32_t *) 0x50d00190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50d00210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50d00290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50d00410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00510) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50d00590) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50d00a10) = 0x0001f801; // Layer control 2
  *((volatile uint32_t *) 0x50d00610) = 0x000003f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00690) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x50d00790) = 0x00026000; // Post processing register
  *((volatile uint32_t *) 0x50d00710) = 0xffffffff; // Mask and processor enables


  return CNN_OK;
}
int cnn_configure_8(void)
{
  // Layer 0 quadrant 0
  *((volatile uint32_t *) 0x50100010) = 0x00010005; // Rows
  *((volatile uint32_t *) 0x50100090) = 0x00010005; // Columns
  *((volatile uint32_t *) 0x50100310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50100590) = 0x0000eb20; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x000003f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100690) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x50100790) = 0x00025000; // Post processing register
  *((volatile uint32_t *) 0x50100710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 1
  *((volatile uint32_t *) 0x50500010) = 0x00010005; // Rows
  *((volatile uint32_t *) 0x50500090) = 0x00010005; // Columns
  *((volatile uint32_t *) 0x50500310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50500410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50500590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50500a10) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50500610) = 0x000003f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500690) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x50500790) = 0x00024000; // Post processing register
  *((volatile uint32_t *) 0x50500710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 2
  *((volatile uint32_t *) 0x50900010) = 0x00010005; // Rows
  *((volatile uint32_t *) 0x50900090) = 0x00010005; // Columns
  *((volatile uint32_t *) 0x50900310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50900410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50900590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50900a10) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50900610) = 0x000003f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900690) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x50900790) = 0x00024000; // Post processing register
  *((volatile uint32_t *) 0x50900710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 3
  *((volatile uint32_t *) 0x50d00010) = 0x00010005; // Rows
  *((volatile uint32_t *) 0x50d00090) = 0x00010005; // Columns
  *((volatile uint32_t *) 0x50d00310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50d00590) = 0x00000b20; // Layer control
  *((volatile uint32_t *) 0x50d00a10) = 0x0001f810; // Layer control 2
  *((volatile uint32_t *) 0x50d00610) = 0x000003f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00690) = 0x00000003; // TRAM ptr max
  *((volatile uint32_t *) 0x50d00790) = 0x00024000; // Post processing register
  *((volatile uint32_t *) 0x50d00710) = 0xffffffff; // Mask and processor enables


  return CNN_OK;
}
int cnn_configure_9(void)
{
  // Layer 0 quadrant 0
  *((volatile uint32_t *) 0x50100010) = 0x00000003; // Rows
  *((volatile uint32_t *) 0x50100090) = 0x00000003; // Columns
  *((volatile uint32_t *) 0x50100190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50100210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50100290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50100390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50100510) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50100590) = 0x0000eba0; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x000007f8; // Mask offset and count
  *((volatile uint32_t *) 0x50100110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50100790) = 0x00023000; // Post processing register
  *((volatile uint32_t *) 0x50100710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 1
  *((volatile uint32_t *) 0x50500010) = 0x00000003; // Rows
  *((volatile uint32_t *) 0x50500090) = 0x00000003; // Columns
  *((volatile uint32_t *) 0x50500190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50500210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50500290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50500390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50500410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50500510) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50500590) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50500a10) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50500610) = 0x000007f8; // Mask offset and count
  *((volatile uint32_t *) 0x50500110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50500790) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50500710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 2
  *((volatile uint32_t *) 0x50900010) = 0x00000003; // Rows
  *((volatile uint32_t *) 0x50900090) = 0x00000003; // Columns
  *((volatile uint32_t *) 0x50900190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50900210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50900290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50900390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50900410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50900510) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50900590) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50900a10) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50900610) = 0x000007f8; // Mask offset and count
  *((volatile uint32_t *) 0x50900110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50900790) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50900710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 3
  *((volatile uint32_t *) 0x50d00010) = 0x00000003; // Rows
  *((volatile uint32_t *) 0x50d00090) = 0x00000003; // Columns
  *((volatile uint32_t *) 0x50d00190) = 0x00000001; // Pooling rows
  *((volatile uint32_t *) 0x50d00210) = 0x00000001; // Pooling columns
  *((volatile uint32_t *) 0x50d00290) = 0x00000001; // Stride
  *((volatile uint32_t *) 0x50d00390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50d00410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00490) = 0x00000001; // Write ptr multi-pass channel offs
  *((volatile uint32_t *) 0x50d00510) = 0x00001000; // SRAM read ptr
  *((volatile uint32_t *) 0x50d00590) = 0x00000ba0; // Layer control
  *((volatile uint32_t *) 0x50d00a10) = 0x0001f811; // Layer control 2
  *((volatile uint32_t *) 0x50d00610) = 0x000007f8; // Mask offset and count
  *((volatile uint32_t *) 0x50d00110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50d00790) = 0x00022000; // Post processing register
  *((volatile uint32_t *) 0x50d00710) = 0xffffffff; // Mask and processor enables


  return CNN_OK;
}
int cnn_configure_10(void)
{
  // Layer 0 quadrant 0
  *((volatile uint32_t *) 0x50100310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50100390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50100410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50100590) = 0x0001e920; // Layer control
  *((volatile uint32_t *) 0x50100a10) = 0x00004807; // Layer control 2
  *((volatile uint32_t *) 0x50100610) = 0x00000278; // Mask offset and count
  *((volatile uint32_t *) 0x50100110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50100790) = 0x00003000; // Post processing register
  *((volatile uint32_t *) 0x50100710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 1
  *((volatile uint32_t *) 0x50500310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50500390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50500410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50500590) = 0x00010920; // Layer control
  *((volatile uint32_t *) 0x50500a10) = 0x00004807; // Layer control 2
  *((volatile uint32_t *) 0x50500610) = 0x00000278; // Mask offset and count
  *((volatile uint32_t *) 0x50500110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50500790) = 0x00002000; // Post processing register
  *((volatile uint32_t *) 0x50500710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 2
  *((volatile uint32_t *) 0x50900310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50900390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50900410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50900590) = 0x00010920; // Layer control
  *((volatile uint32_t *) 0x50900a10) = 0x00004807; // Layer control 2
  *((volatile uint32_t *) 0x50900610) = 0x00000278; // Mask offset and count
  *((volatile uint32_t *) 0x50900110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50900790) = 0x00002000; // Post processing register
  *((volatile uint32_t *) 0x50900710) = 0xffffffff; // Mask and processor enables

  // Layer 0 quadrant 3
  *((volatile uint32_t *) 0x50d00310) = 0x00001000; // SRAM write ptr
  *((volatile uint32_t *) 0x50d00390) = 0x00000001; // Write ptr time slot offs
  *((volatile uint32_t *) 0x50d00410) = 0x00002000; // Write ptr mask offs
  *((volatile uint32_t *) 0x50d00590) = 0x00010920; // Layer control
  *((volatile uint32_t *) 0x50d00a10) = 0x00004807; // Layer control 2
  *((volatile uint32_t *) 0x50d00610) = 0x00000278; // Mask offset and count
  *((volatile uint32_t *) 0x50d00110) = 0x00000100; // 1D
  *((volatile uint32_t *) 0x50d00790) = 0x00002000; // Post processing register
  *((volatile uint32_t *) 0x50d00710) = 0xffffffff; // Mask and processor enables


  return CNN_OK;
}
int cnn_load_bias_0(void)
{
  memcpy_8to32((uint32_t *) 0x50108000,layer_0_bias_0, sizeof(uint8_t) * 64);

  return CNN_OK;
}
int cnn_load_bias_1(void)
{
  memcpy_8to32((uint32_t *) 0x50108000,layer_1_bias_0, sizeof(uint8_t) * 32);

  return CNN_OK;
}
int cnn_load_bias_2(void)
{
  memcpy_8to32((uint32_t *) 0x50108000,layer_2_bias_0, sizeof(uint8_t) * 64);

  return CNN_OK;
}
int cnn_load_bias_3(void)
{
  memcpy_8to32((uint32_t *) 0x50108000,layer_3_bias_0, sizeof(uint8_t) * 32);

  return CNN_OK;
}
int cnn_load_bias_4(void)
{
  memcpy_8to32((uint32_t *) 0x50108000,layer_4_bias_0, sizeof(uint8_t) * 64);

  return CNN_OK;
}
int cnn_load_bias_5(void)
{
  memcpy_8to32((uint32_t *) 0x50108000,layer_5_bias_0, sizeof(uint8_t) * 128);

  return CNN_OK;
}
int cnn_load_bias_6(void)
{
  memcpy_8to32((uint32_t *) 0x50108000,layer_6_bias_0, sizeof(uint8_t) * 128);

  return CNN_OK;
}
int cnn_load_bias_7(void)
{
  memcpy_8to32((uint32_t *) 0x50108000,layer_7_bias_0, sizeof(uint8_t) * 64);

  return CNN_OK;
}
int cnn_load_bias_8(void)
{
  memcpy_8to32((uint32_t *) 0x50108000,layer_8_bias_0, sizeof(uint8_t) * 128);

  return CNN_OK;
}
int cnn_load_bias_9(void)
{
  memcpy_8to32((uint32_t *) 0x50108000,layer_9_bias_0, sizeof(uint8_t) * 128);

  return CNN_OK;
}
int cnn_load_bias_10(void)
{
  memcpy_8to32((uint32_t *) 0x50108000,layer_10_bias_0, sizeof(uint8_t) * 10);

  return CNN_OK;
}
int cnn_load_weights_0(void)
{
  *((volatile uint8_t *) 0x50180001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50180000, layer_0_kernel_0, 144);
  *((volatile uint8_t *) 0x50184001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50184000, layer_0_kernel_1, 144);
  *((volatile uint8_t *) 0x50188001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50188000, layer_0_kernel_2, 144);

  return CNN_OK;
}
int cnn_load_weights_1(void)
{
  *((volatile uint8_t *) 0x50180001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50180000, layer_1_kernel_0, 9);
  *((volatile uint8_t *) 0x50184001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50184000, layer_1_kernel_1, 9);
  *((volatile uint8_t *) 0x50188001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50188000, layer_1_kernel_2, 9);
  *((volatile uint8_t *) 0x5018c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5018c000, layer_1_kernel_3, 9);
  *((volatile uint8_t *) 0x50190001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50190000, layer_1_kernel_4, 9);
  *((volatile uint8_t *) 0x50194001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50194000, layer_1_kernel_5, 9);
  *((volatile uint8_t *) 0x50198001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50198000, layer_1_kernel_6, 9);
  *((volatile uint8_t *) 0x5019c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5019c000, layer_1_kernel_7, 9);
  *((volatile uint8_t *) 0x501a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a0000, layer_1_kernel_8, 9);
  *((volatile uint8_t *) 0x501a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a4000, layer_1_kernel_9, 9);
  *((volatile uint8_t *) 0x501a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a8000, layer_1_kernel_10, 9);
  *((volatile uint8_t *) 0x501ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501ac000, layer_1_kernel_11, 9);
  *((volatile uint8_t *) 0x501b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b0000, layer_1_kernel_12, 9);
  *((volatile uint8_t *) 0x501b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b4000, layer_1_kernel_13, 9);
  *((volatile uint8_t *) 0x501b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b8000, layer_1_kernel_14, 9);
  *((volatile uint8_t *) 0x501bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501bc000, layer_1_kernel_15, 9);
  *((volatile uint8_t *) 0x50580001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50580000, layer_1_kernel_16, 9);
  *((volatile uint8_t *) 0x50584001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50584000, layer_1_kernel_17, 9);
  *((volatile uint8_t *) 0x50588001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50588000, layer_1_kernel_18, 9);
  *((volatile uint8_t *) 0x5058c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5058c000, layer_1_kernel_19, 9);
  *((volatile uint8_t *) 0x50590001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50590000, layer_1_kernel_20, 9);
  *((volatile uint8_t *) 0x50594001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50594000, layer_1_kernel_21, 9);
  *((volatile uint8_t *) 0x50598001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50598000, layer_1_kernel_22, 9);
  *((volatile uint8_t *) 0x5059c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5059c000, layer_1_kernel_23, 9);
  *((volatile uint8_t *) 0x505a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a0000, layer_1_kernel_24, 9);
  *((volatile uint8_t *) 0x505a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a4000, layer_1_kernel_25, 9);
  *((volatile uint8_t *) 0x505a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a8000, layer_1_kernel_26, 9);
  *((volatile uint8_t *) 0x505ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505ac000, layer_1_kernel_27, 9);
  *((volatile uint8_t *) 0x505b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b0000, layer_1_kernel_28, 9);
  *((volatile uint8_t *) 0x505b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b4000, layer_1_kernel_29, 9);
  *((volatile uint8_t *) 0x505b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b8000, layer_1_kernel_30, 9);
  *((volatile uint8_t *) 0x505bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505bc000, layer_1_kernel_31, 9);
  *((volatile uint8_t *) 0x50980001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50980000, layer_1_kernel_32, 9);
  *((volatile uint8_t *) 0x50984001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50984000, layer_1_kernel_33, 9);
  *((volatile uint8_t *) 0x50988001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50988000, layer_1_kernel_34, 9);
  *((volatile uint8_t *) 0x5098c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5098c000, layer_1_kernel_35, 9);
  *((volatile uint8_t *) 0x50990001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50990000, layer_1_kernel_36, 9);
  *((volatile uint8_t *) 0x50994001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50994000, layer_1_kernel_37, 9);
  *((volatile uint8_t *) 0x50998001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50998000, layer_1_kernel_38, 9);
  *((volatile uint8_t *) 0x5099c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5099c000, layer_1_kernel_39, 9);
  *((volatile uint8_t *) 0x509a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a0000, layer_1_kernel_40, 9);
  *((volatile uint8_t *) 0x509a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a4000, layer_1_kernel_41, 9);
  *((volatile uint8_t *) 0x509a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a8000, layer_1_kernel_42, 9);
  *((volatile uint8_t *) 0x509ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509ac000, layer_1_kernel_43, 9);
  *((volatile uint8_t *) 0x509b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b0000, layer_1_kernel_44, 9);
  *((volatile uint8_t *) 0x509b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b4000, layer_1_kernel_45, 9);
  *((volatile uint8_t *) 0x509b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b8000, layer_1_kernel_46, 9);
  *((volatile uint8_t *) 0x509bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509bc000, layer_1_kernel_47, 9);
  *((volatile uint8_t *) 0x50d80001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d80000, layer_1_kernel_48, 9);
  *((volatile uint8_t *) 0x50d84001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d84000, layer_1_kernel_49, 9);
  *((volatile uint8_t *) 0x50d88001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d88000, layer_1_kernel_50, 9);
  *((volatile uint8_t *) 0x50d8c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d8c000, layer_1_kernel_51, 9);
  *((volatile uint8_t *) 0x50d90001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d90000, layer_1_kernel_52, 9);
  *((volatile uint8_t *) 0x50d94001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d94000, layer_1_kernel_53, 9);
  *((volatile uint8_t *) 0x50d98001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d98000, layer_1_kernel_54, 9);
  *((volatile uint8_t *) 0x50d9c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d9c000, layer_1_kernel_55, 9);
  *((volatile uint8_t *) 0x50da0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da0000, layer_1_kernel_56, 9);
  *((volatile uint8_t *) 0x50da4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da4000, layer_1_kernel_57, 9);
  *((volatile uint8_t *) 0x50da8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da8000, layer_1_kernel_58, 9);
  *((volatile uint8_t *) 0x50dac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dac000, layer_1_kernel_59, 9);
  *((volatile uint8_t *) 0x50db0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db0000, layer_1_kernel_60, 9);
  *((volatile uint8_t *) 0x50db4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db4000, layer_1_kernel_61, 9);
  *((volatile uint8_t *) 0x50db8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db8000, layer_1_kernel_62, 9);
  *((volatile uint8_t *) 0x50dbc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dbc000, layer_1_kernel_63, 9);

  return CNN_OK;
}
int cnn_load_weights_2(void)
{
  *((volatile uint8_t *) 0x50180001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50180000, layer_2_kernel_0, 144);
  *((volatile uint8_t *) 0x50184001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50184000, layer_2_kernel_1, 144);
  *((volatile uint8_t *) 0x50188001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50188000, layer_2_kernel_2, 144);
  *((volatile uint8_t *) 0x5018c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5018c000, layer_2_kernel_3, 144);
  *((volatile uint8_t *) 0x50190001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50190000, layer_2_kernel_4, 144);
  *((volatile uint8_t *) 0x50194001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50194000, layer_2_kernel_5, 144);
  *((volatile uint8_t *) 0x50198001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50198000, layer_2_kernel_6, 144);
  *((volatile uint8_t *) 0x5019c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5019c000, layer_2_kernel_7, 144);
  *((volatile uint8_t *) 0x501a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a0000, layer_2_kernel_8, 144);
  *((volatile uint8_t *) 0x501a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a4000, layer_2_kernel_9, 144);
  *((volatile uint8_t *) 0x501a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a8000, layer_2_kernel_10, 144);
  *((volatile uint8_t *) 0x501ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501ac000, layer_2_kernel_11, 144);
  *((volatile uint8_t *) 0x501b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b0000, layer_2_kernel_12, 144);
  *((volatile uint8_t *) 0x501b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b4000, layer_2_kernel_13, 144);
  *((volatile uint8_t *) 0x501b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b8000, layer_2_kernel_14, 144);
  *((volatile uint8_t *) 0x501bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501bc000, layer_2_kernel_15, 144);
  *((volatile uint8_t *) 0x50580001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50580000, layer_2_kernel_16, 144);
  *((volatile uint8_t *) 0x50584001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50584000, layer_2_kernel_17, 144);
  *((volatile uint8_t *) 0x50588001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50588000, layer_2_kernel_18, 144);
  *((volatile uint8_t *) 0x5058c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5058c000, layer_2_kernel_19, 144);
  *((volatile uint8_t *) 0x50590001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50590000, layer_2_kernel_20, 144);
  *((volatile uint8_t *) 0x50594001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50594000, layer_2_kernel_21, 144);
  *((volatile uint8_t *) 0x50598001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50598000, layer_2_kernel_22, 144);
  *((volatile uint8_t *) 0x5059c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5059c000, layer_2_kernel_23, 144);
  *((volatile uint8_t *) 0x505a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a0000, layer_2_kernel_24, 144);
  *((volatile uint8_t *) 0x505a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a4000, layer_2_kernel_25, 144);
  *((volatile uint8_t *) 0x505a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a8000, layer_2_kernel_26, 144);
  *((volatile uint8_t *) 0x505ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505ac000, layer_2_kernel_27, 144);
  *((volatile uint8_t *) 0x505b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b0000, layer_2_kernel_28, 144);
  *((volatile uint8_t *) 0x505b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b4000, layer_2_kernel_29, 144);
  *((volatile uint8_t *) 0x505b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b8000, layer_2_kernel_30, 144);
  *((volatile uint8_t *) 0x505bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505bc000, layer_2_kernel_31, 144);

  return CNN_OK;
}
int cnn_load_weights_3(void)
{
  *((volatile uint8_t *) 0x50180001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50180000, layer_3_kernel_0, 72);
  *((volatile uint8_t *) 0x50184001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50184000, layer_3_kernel_1, 72);
  *((volatile uint8_t *) 0x50188001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50188000, layer_3_kernel_2, 72);
  *((volatile uint8_t *) 0x5018c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5018c000, layer_3_kernel_3, 72);
  *((volatile uint8_t *) 0x50190001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50190000, layer_3_kernel_4, 72);
  *((volatile uint8_t *) 0x50194001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50194000, layer_3_kernel_5, 72);
  *((volatile uint8_t *) 0x50198001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50198000, layer_3_kernel_6, 72);
  *((volatile uint8_t *) 0x5019c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5019c000, layer_3_kernel_7, 72);
  *((volatile uint8_t *) 0x501a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a0000, layer_3_kernel_8, 72);
  *((volatile uint8_t *) 0x501a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a4000, layer_3_kernel_9, 72);
  *((volatile uint8_t *) 0x501a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a8000, layer_3_kernel_10, 72);
  *((volatile uint8_t *) 0x501ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501ac000, layer_3_kernel_11, 72);
  *((volatile uint8_t *) 0x501b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b0000, layer_3_kernel_12, 72);
  *((volatile uint8_t *) 0x501b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b4000, layer_3_kernel_13, 72);
  *((volatile uint8_t *) 0x501b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b8000, layer_3_kernel_14, 72);
  *((volatile uint8_t *) 0x501bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501bc000, layer_3_kernel_15, 72);
  *((volatile uint8_t *) 0x50580001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50580000, layer_3_kernel_16, 72);
  *((volatile uint8_t *) 0x50584001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50584000, layer_3_kernel_17, 72);
  *((volatile uint8_t *) 0x50588001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50588000, layer_3_kernel_18, 72);
  *((volatile uint8_t *) 0x5058c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5058c000, layer_3_kernel_19, 72);
  *((volatile uint8_t *) 0x50590001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50590000, layer_3_kernel_20, 72);
  *((volatile uint8_t *) 0x50594001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50594000, layer_3_kernel_21, 72);
  *((volatile uint8_t *) 0x50598001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50598000, layer_3_kernel_22, 72);
  *((volatile uint8_t *) 0x5059c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5059c000, layer_3_kernel_23, 72);
  *((volatile uint8_t *) 0x505a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a0000, layer_3_kernel_24, 72);
  *((volatile uint8_t *) 0x505a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a4000, layer_3_kernel_25, 72);
  *((volatile uint8_t *) 0x505a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a8000, layer_3_kernel_26, 72);
  *((volatile uint8_t *) 0x505ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505ac000, layer_3_kernel_27, 72);
  *((volatile uint8_t *) 0x505b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b0000, layer_3_kernel_28, 72);
  *((volatile uint8_t *) 0x505b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b4000, layer_3_kernel_29, 72);
  *((volatile uint8_t *) 0x505b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b8000, layer_3_kernel_30, 72);
  *((volatile uint8_t *) 0x505bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505bc000, layer_3_kernel_31, 72);
  *((volatile uint8_t *) 0x50980001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50980000, layer_3_kernel_32, 72);
  *((volatile uint8_t *) 0x50984001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50984000, layer_3_kernel_33, 72);
  *((volatile uint8_t *) 0x50988001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50988000, layer_3_kernel_34, 72);
  *((volatile uint8_t *) 0x5098c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5098c000, layer_3_kernel_35, 72);
  *((volatile uint8_t *) 0x50990001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50990000, layer_3_kernel_36, 72);
  *((volatile uint8_t *) 0x50994001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50994000, layer_3_kernel_37, 72);
  *((volatile uint8_t *) 0x50998001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50998000, layer_3_kernel_38, 72);
  *((volatile uint8_t *) 0x5099c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5099c000, layer_3_kernel_39, 72);
  *((volatile uint8_t *) 0x509a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a0000, layer_3_kernel_40, 72);
  *((volatile uint8_t *) 0x509a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a4000, layer_3_kernel_41, 72);
  *((volatile uint8_t *) 0x509a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a8000, layer_3_kernel_42, 72);
  *((volatile uint8_t *) 0x509ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509ac000, layer_3_kernel_43, 72);
  *((volatile uint8_t *) 0x509b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b0000, layer_3_kernel_44, 72);
  *((volatile uint8_t *) 0x509b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b4000, layer_3_kernel_45, 72);
  *((volatile uint8_t *) 0x509b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b8000, layer_3_kernel_46, 72);
  *((volatile uint8_t *) 0x509bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509bc000, layer_3_kernel_47, 72);
  *((volatile uint8_t *) 0x50d80001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d80000, layer_3_kernel_48, 72);
  *((volatile uint8_t *) 0x50d84001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d84000, layer_3_kernel_49, 72);
  *((volatile uint8_t *) 0x50d88001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d88000, layer_3_kernel_50, 72);
  *((volatile uint8_t *) 0x50d8c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d8c000, layer_3_kernel_51, 72);
  *((volatile uint8_t *) 0x50d90001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d90000, layer_3_kernel_52, 72);
  *((volatile uint8_t *) 0x50d94001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d94000, layer_3_kernel_53, 72);
  *((volatile uint8_t *) 0x50d98001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d98000, layer_3_kernel_54, 72);
  *((volatile uint8_t *) 0x50d9c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d9c000, layer_3_kernel_55, 72);
  *((volatile uint8_t *) 0x50da0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da0000, layer_3_kernel_56, 72);
  *((volatile uint8_t *) 0x50da4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da4000, layer_3_kernel_57, 72);
  *((volatile uint8_t *) 0x50da8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da8000, layer_3_kernel_58, 72);
  *((volatile uint8_t *) 0x50dac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dac000, layer_3_kernel_59, 72);
  *((volatile uint8_t *) 0x50db0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db0000, layer_3_kernel_60, 72);
  *((volatile uint8_t *) 0x50db4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db4000, layer_3_kernel_61, 72);
  *((volatile uint8_t *) 0x50db8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db8000, layer_3_kernel_62, 72);
  *((volatile uint8_t *) 0x50dbc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dbc000, layer_3_kernel_63, 72);

  return CNN_OK;
}
int cnn_load_weights_4(void)
{
  *((volatile uint8_t *) 0x50980001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50980000, layer_4_kernel_32, 18);
  *((volatile uint8_t *) 0x50984001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50984000, layer_4_kernel_33, 18);
  *((volatile uint8_t *) 0x50988001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50988000, layer_4_kernel_34, 18);
  *((volatile uint8_t *) 0x5098c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5098c000, layer_4_kernel_35, 18);
  *((volatile uint8_t *) 0x50990001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50990000, layer_4_kernel_36, 18);
  *((volatile uint8_t *) 0x50994001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50994000, layer_4_kernel_37, 18);
  *((volatile uint8_t *) 0x50998001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50998000, layer_4_kernel_38, 18);
  *((volatile uint8_t *) 0x5099c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5099c000, layer_4_kernel_39, 18);
  *((volatile uint8_t *) 0x509a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a0000, layer_4_kernel_40, 18);
  *((volatile uint8_t *) 0x509a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a4000, layer_4_kernel_41, 18);
  *((volatile uint8_t *) 0x509a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a8000, layer_4_kernel_42, 18);
  *((volatile uint8_t *) 0x509ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509ac000, layer_4_kernel_43, 18);
  *((volatile uint8_t *) 0x509b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b0000, layer_4_kernel_44, 18);
  *((volatile uint8_t *) 0x509b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b4000, layer_4_kernel_45, 18);
  *((volatile uint8_t *) 0x509b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b8000, layer_4_kernel_46, 18);
  *((volatile uint8_t *) 0x509bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509bc000, layer_4_kernel_47, 18);
  *((volatile uint8_t *) 0x50d80001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d80000, layer_4_kernel_48, 18);
  *((volatile uint8_t *) 0x50d84001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d84000, layer_4_kernel_49, 18);
  *((volatile uint8_t *) 0x50d88001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d88000, layer_4_kernel_50, 18);
  *((volatile uint8_t *) 0x50d8c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d8c000, layer_4_kernel_51, 18);
  *((volatile uint8_t *) 0x50d90001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d90000, layer_4_kernel_52, 18);
  *((volatile uint8_t *) 0x50d94001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d94000, layer_4_kernel_53, 18);
  *((volatile uint8_t *) 0x50d98001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d98000, layer_4_kernel_54, 18);
  *((volatile uint8_t *) 0x50d9c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d9c000, layer_4_kernel_55, 18);
  *((volatile uint8_t *) 0x50da0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da0000, layer_4_kernel_56, 18);
  *((volatile uint8_t *) 0x50da4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da4000, layer_4_kernel_57, 18);
  *((volatile uint8_t *) 0x50da8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da8000, layer_4_kernel_58, 18);
  *((volatile uint8_t *) 0x50dac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dac000, layer_4_kernel_59, 18);
  *((volatile uint8_t *) 0x50db0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db0000, layer_4_kernel_60, 18);
  *((volatile uint8_t *) 0x50db4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db4000, layer_4_kernel_61, 18);
  *((volatile uint8_t *) 0x50db8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db8000, layer_4_kernel_62, 18);
  *((volatile uint8_t *) 0x50dbc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dbc000, layer_4_kernel_63, 18);

  return CNN_OK;
}
int cnn_load_weights_5(void)
{
  *((volatile uint8_t *) 0x50180001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50180000, layer_5_kernel_0, 288);
  *((volatile uint8_t *) 0x50184001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50184000, layer_5_kernel_1, 288);
  *((volatile uint8_t *) 0x50188001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50188000, layer_5_kernel_2, 288);
  *((volatile uint8_t *) 0x5018c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5018c000, layer_5_kernel_3, 288);
  *((volatile uint8_t *) 0x50190001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50190000, layer_5_kernel_4, 288);
  *((volatile uint8_t *) 0x50194001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50194000, layer_5_kernel_5, 288);
  *((volatile uint8_t *) 0x50198001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50198000, layer_5_kernel_6, 288);
  *((volatile uint8_t *) 0x5019c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5019c000, layer_5_kernel_7, 288);
  *((volatile uint8_t *) 0x501a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a0000, layer_5_kernel_8, 288);
  *((volatile uint8_t *) 0x501a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a4000, layer_5_kernel_9, 288);
  *((volatile uint8_t *) 0x501a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a8000, layer_5_kernel_10, 288);
  *((volatile uint8_t *) 0x501ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501ac000, layer_5_kernel_11, 288);
  *((volatile uint8_t *) 0x501b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b0000, layer_5_kernel_12, 288);
  *((volatile uint8_t *) 0x501b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b4000, layer_5_kernel_13, 288);
  *((volatile uint8_t *) 0x501b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b8000, layer_5_kernel_14, 288);
  *((volatile uint8_t *) 0x501bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501bc000, layer_5_kernel_15, 288);
  *((volatile uint8_t *) 0x50580001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50580000, layer_5_kernel_16, 288);
  *((volatile uint8_t *) 0x50584001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50584000, layer_5_kernel_17, 288);
  *((volatile uint8_t *) 0x50588001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50588000, layer_5_kernel_18, 288);
  *((volatile uint8_t *) 0x5058c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5058c000, layer_5_kernel_19, 288);
  *((volatile uint8_t *) 0x50590001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50590000, layer_5_kernel_20, 288);
  *((volatile uint8_t *) 0x50594001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50594000, layer_5_kernel_21, 288);
  *((volatile uint8_t *) 0x50598001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50598000, layer_5_kernel_22, 288);
  *((volatile uint8_t *) 0x5059c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5059c000, layer_5_kernel_23, 288);
  *((volatile uint8_t *) 0x505a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a0000, layer_5_kernel_24, 288);
  *((volatile uint8_t *) 0x505a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a4000, layer_5_kernel_25, 288);
  *((volatile uint8_t *) 0x505a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a8000, layer_5_kernel_26, 288);
  *((volatile uint8_t *) 0x505ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505ac000, layer_5_kernel_27, 288);
  *((volatile uint8_t *) 0x505b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b0000, layer_5_kernel_28, 288);
  *((volatile uint8_t *) 0x505b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b4000, layer_5_kernel_29, 288);
  *((volatile uint8_t *) 0x505b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b8000, layer_5_kernel_30, 288);
  *((volatile uint8_t *) 0x505bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505bc000, layer_5_kernel_31, 288);
  *((volatile uint8_t *) 0x50980001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50980000, layer_5_kernel_32, 288);
  *((volatile uint8_t *) 0x50984001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50984000, layer_5_kernel_33, 288);
  *((volatile uint8_t *) 0x50988001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50988000, layer_5_kernel_34, 288);
  *((volatile uint8_t *) 0x5098c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5098c000, layer_5_kernel_35, 288);
  *((volatile uint8_t *) 0x50990001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50990000, layer_5_kernel_36, 288);
  *((volatile uint8_t *) 0x50994001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50994000, layer_5_kernel_37, 288);
  *((volatile uint8_t *) 0x50998001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50998000, layer_5_kernel_38, 288);
  *((volatile uint8_t *) 0x5099c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5099c000, layer_5_kernel_39, 288);
  *((volatile uint8_t *) 0x509a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a0000, layer_5_kernel_40, 288);
  *((volatile uint8_t *) 0x509a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a4000, layer_5_kernel_41, 288);
  *((volatile uint8_t *) 0x509a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a8000, layer_5_kernel_42, 288);
  *((volatile uint8_t *) 0x509ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509ac000, layer_5_kernel_43, 288);
  *((volatile uint8_t *) 0x509b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b0000, layer_5_kernel_44, 288);
  *((volatile uint8_t *) 0x509b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b4000, layer_5_kernel_45, 288);
  *((volatile uint8_t *) 0x509b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b8000, layer_5_kernel_46, 288);
  *((volatile uint8_t *) 0x509bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509bc000, layer_5_kernel_47, 288);
  *((volatile uint8_t *) 0x50d80001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d80000, layer_5_kernel_48, 288);
  *((volatile uint8_t *) 0x50d84001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d84000, layer_5_kernel_49, 288);
  *((volatile uint8_t *) 0x50d88001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d88000, layer_5_kernel_50, 288);
  *((volatile uint8_t *) 0x50d8c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d8c000, layer_5_kernel_51, 288);
  *((volatile uint8_t *) 0x50d90001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d90000, layer_5_kernel_52, 288);
  *((volatile uint8_t *) 0x50d94001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d94000, layer_5_kernel_53, 288);
  *((volatile uint8_t *) 0x50d98001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d98000, layer_5_kernel_54, 288);
  *((volatile uint8_t *) 0x50d9c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d9c000, layer_5_kernel_55, 288);
  *((volatile uint8_t *) 0x50da0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da0000, layer_5_kernel_56, 288);
  *((volatile uint8_t *) 0x50da4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da4000, layer_5_kernel_57, 288);
  *((volatile uint8_t *) 0x50da8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da8000, layer_5_kernel_58, 288);
  *((volatile uint8_t *) 0x50dac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dac000, layer_5_kernel_59, 288);
  *((volatile uint8_t *) 0x50db0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db0000, layer_5_kernel_60, 288);
  *((volatile uint8_t *) 0x50db4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db4000, layer_5_kernel_61, 288);
  *((volatile uint8_t *) 0x50db8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db8000, layer_5_kernel_62, 288);
  *((volatile uint8_t *) 0x50dbc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dbc000, layer_5_kernel_63, 288);

  return CNN_OK;
}
int cnn_load_weights_6(void)
{
  *((volatile uint8_t *) 0x50180001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50180000, layer_6_kernel_0, 66);
  *((volatile uint8_t *) 0x50184001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50184000, layer_6_kernel_1, 66);
  *((volatile uint8_t *) 0x50188001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50188000, layer_6_kernel_2, 66);
  *((volatile uint8_t *) 0x5018c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5018c000, layer_6_kernel_3, 66);
  *((volatile uint8_t *) 0x50190001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50190000, layer_6_kernel_4, 66);
  *((volatile uint8_t *) 0x50194001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50194000, layer_6_kernel_5, 66);
  *((volatile uint8_t *) 0x50198001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50198000, layer_6_kernel_6, 66);
  *((volatile uint8_t *) 0x5019c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5019c000, layer_6_kernel_7, 66);
  *((volatile uint8_t *) 0x501a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a0000, layer_6_kernel_8, 66);
  *((volatile uint8_t *) 0x501a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a4000, layer_6_kernel_9, 66);
  *((volatile uint8_t *) 0x501a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a8000, layer_6_kernel_10, 66);
  *((volatile uint8_t *) 0x501ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501ac000, layer_6_kernel_11, 66);
  *((volatile uint8_t *) 0x501b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b0000, layer_6_kernel_12, 66);
  *((volatile uint8_t *) 0x501b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b4000, layer_6_kernel_13, 66);
  *((volatile uint8_t *) 0x501b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b8000, layer_6_kernel_14, 66);
  *((volatile uint8_t *) 0x501bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501bc000, layer_6_kernel_15, 66);
  *((volatile uint8_t *) 0x50580001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50580000, layer_6_kernel_16, 66);
  *((volatile uint8_t *) 0x50584001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50584000, layer_6_kernel_17, 66);
  *((volatile uint8_t *) 0x50588001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50588000, layer_6_kernel_18, 66);
  *((volatile uint8_t *) 0x5058c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5058c000, layer_6_kernel_19, 66);
  *((volatile uint8_t *) 0x50590001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50590000, layer_6_kernel_20, 66);
  *((volatile uint8_t *) 0x50594001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50594000, layer_6_kernel_21, 66);
  *((volatile uint8_t *) 0x50598001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50598000, layer_6_kernel_22, 66);
  *((volatile uint8_t *) 0x5059c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5059c000, layer_6_kernel_23, 66);
  *((volatile uint8_t *) 0x505a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a0000, layer_6_kernel_24, 66);
  *((volatile uint8_t *) 0x505a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a4000, layer_6_kernel_25, 66);
  *((volatile uint8_t *) 0x505a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a8000, layer_6_kernel_26, 66);
  *((volatile uint8_t *) 0x505ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505ac000, layer_6_kernel_27, 66);
  *((volatile uint8_t *) 0x505b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b0000, layer_6_kernel_28, 66);
  *((volatile uint8_t *) 0x505b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b4000, layer_6_kernel_29, 66);
  *((volatile uint8_t *) 0x505b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b8000, layer_6_kernel_30, 66);
  *((volatile uint8_t *) 0x505bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505bc000, layer_6_kernel_31, 66);
  *((volatile uint8_t *) 0x50980001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50980000, layer_6_kernel_32, 66);
  *((volatile uint8_t *) 0x50984001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50984000, layer_6_kernel_33, 66);
  *((volatile uint8_t *) 0x50988001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50988000, layer_6_kernel_34, 66);
  *((volatile uint8_t *) 0x5098c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5098c000, layer_6_kernel_35, 66);
  *((volatile uint8_t *) 0x50990001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50990000, layer_6_kernel_36, 66);
  *((volatile uint8_t *) 0x50994001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50994000, layer_6_kernel_37, 66);
  *((volatile uint8_t *) 0x50998001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50998000, layer_6_kernel_38, 66);
  *((volatile uint8_t *) 0x5099c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5099c000, layer_6_kernel_39, 66);
  *((volatile uint8_t *) 0x509a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a0000, layer_6_kernel_40, 66);
  *((volatile uint8_t *) 0x509a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a4000, layer_6_kernel_41, 66);
  *((volatile uint8_t *) 0x509a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a8000, layer_6_kernel_42, 66);
  *((volatile uint8_t *) 0x509ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509ac000, layer_6_kernel_43, 66);
  *((volatile uint8_t *) 0x509b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b0000, layer_6_kernel_44, 66);
  *((volatile uint8_t *) 0x509b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b4000, layer_6_kernel_45, 66);
  *((volatile uint8_t *) 0x509b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b8000, layer_6_kernel_46, 66);
  *((volatile uint8_t *) 0x509bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509bc000, layer_6_kernel_47, 66);
  *((volatile uint8_t *) 0x50d80001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d80000, layer_6_kernel_48, 66);
  *((volatile uint8_t *) 0x50d84001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d84000, layer_6_kernel_49, 66);
  *((volatile uint8_t *) 0x50d88001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d88000, layer_6_kernel_50, 66);
  *((volatile uint8_t *) 0x50d8c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d8c000, layer_6_kernel_51, 66);
  *((volatile uint8_t *) 0x50d90001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d90000, layer_6_kernel_52, 66);
  *((volatile uint8_t *) 0x50d94001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d94000, layer_6_kernel_53, 66);
  *((volatile uint8_t *) 0x50d98001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d98000, layer_6_kernel_54, 66);
  *((volatile uint8_t *) 0x50d9c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d9c000, layer_6_kernel_55, 66);
  *((volatile uint8_t *) 0x50da0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da0000, layer_6_kernel_56, 66);
  *((volatile uint8_t *) 0x50da4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da4000, layer_6_kernel_57, 66);
  *((volatile uint8_t *) 0x50da8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da8000, layer_6_kernel_58, 66);
  *((volatile uint8_t *) 0x50dac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dac000, layer_6_kernel_59, 66);
  *((volatile uint8_t *) 0x50db0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db0000, layer_6_kernel_60, 66);
  *((volatile uint8_t *) 0x50db4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db4000, layer_6_kernel_61, 66);
  *((volatile uint8_t *) 0x50db8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db8000, layer_6_kernel_62, 66);
  *((volatile uint8_t *) 0x50dbc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dbc000, layer_6_kernel_63, 66);

  return CNN_OK;
}
int cnn_load_weights_7(void)
{
  *((volatile uint8_t *) 0x50180001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50180000, layer_7_kernel_0, 288);
  *((volatile uint8_t *) 0x50184001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50184000, layer_7_kernel_1, 288);
  *((volatile uint8_t *) 0x50188001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50188000, layer_7_kernel_2, 288);
  *((volatile uint8_t *) 0x5018c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5018c000, layer_7_kernel_3, 288);
  *((volatile uint8_t *) 0x50190001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50190000, layer_7_kernel_4, 288);
  *((volatile uint8_t *) 0x50194001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50194000, layer_7_kernel_5, 288);
  *((volatile uint8_t *) 0x50198001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50198000, layer_7_kernel_6, 288);
  *((volatile uint8_t *) 0x5019c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5019c000, layer_7_kernel_7, 288);
  *((volatile uint8_t *) 0x501a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a0000, layer_7_kernel_8, 288);
  *((volatile uint8_t *) 0x501a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a4000, layer_7_kernel_9, 288);
  *((volatile uint8_t *) 0x501a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a8000, layer_7_kernel_10, 288);
  *((volatile uint8_t *) 0x501ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501ac000, layer_7_kernel_11, 288);
  *((volatile uint8_t *) 0x501b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b0000, layer_7_kernel_12, 288);
  *((volatile uint8_t *) 0x501b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b4000, layer_7_kernel_13, 288);
  *((volatile uint8_t *) 0x501b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b8000, layer_7_kernel_14, 288);
  *((volatile uint8_t *) 0x501bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501bc000, layer_7_kernel_15, 288);
  *((volatile uint8_t *) 0x50580001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50580000, layer_7_kernel_16, 288);
  *((volatile uint8_t *) 0x50584001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50584000, layer_7_kernel_17, 288);
  *((volatile uint8_t *) 0x50588001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50588000, layer_7_kernel_18, 288);
  *((volatile uint8_t *) 0x5058c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5058c000, layer_7_kernel_19, 288);
  *((volatile uint8_t *) 0x50590001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50590000, layer_7_kernel_20, 288);
  *((volatile uint8_t *) 0x50594001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50594000, layer_7_kernel_21, 288);
  *((volatile uint8_t *) 0x50598001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50598000, layer_7_kernel_22, 288);
  *((volatile uint8_t *) 0x5059c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5059c000, layer_7_kernel_23, 288);
  *((volatile uint8_t *) 0x505a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a0000, layer_7_kernel_24, 288);
  *((volatile uint8_t *) 0x505a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a4000, layer_7_kernel_25, 288);
  *((volatile uint8_t *) 0x505a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a8000, layer_7_kernel_26, 288);
  *((volatile uint8_t *) 0x505ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505ac000, layer_7_kernel_27, 288);
  *((volatile uint8_t *) 0x505b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b0000, layer_7_kernel_28, 288);
  *((volatile uint8_t *) 0x505b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b4000, layer_7_kernel_29, 288);
  *((volatile uint8_t *) 0x505b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b8000, layer_7_kernel_30, 288);
  *((volatile uint8_t *) 0x505bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505bc000, layer_7_kernel_31, 288);
  *((volatile uint8_t *) 0x50980001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50980000, layer_7_kernel_32, 288);
  *((volatile uint8_t *) 0x50984001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50984000, layer_7_kernel_33, 288);
  *((volatile uint8_t *) 0x50988001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50988000, layer_7_kernel_34, 288);
  *((volatile uint8_t *) 0x5098c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5098c000, layer_7_kernel_35, 288);
  *((volatile uint8_t *) 0x50990001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50990000, layer_7_kernel_36, 288);
  *((volatile uint8_t *) 0x50994001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50994000, layer_7_kernel_37, 288);
  *((volatile uint8_t *) 0x50998001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50998000, layer_7_kernel_38, 288);
  *((volatile uint8_t *) 0x5099c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5099c000, layer_7_kernel_39, 288);
  *((volatile uint8_t *) 0x509a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a0000, layer_7_kernel_40, 288);
  *((volatile uint8_t *) 0x509a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a4000, layer_7_kernel_41, 288);
  *((volatile uint8_t *) 0x509a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a8000, layer_7_kernel_42, 288);
  *((volatile uint8_t *) 0x509ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509ac000, layer_7_kernel_43, 288);
  *((volatile uint8_t *) 0x509b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b0000, layer_7_kernel_44, 288);
  *((volatile uint8_t *) 0x509b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b4000, layer_7_kernel_45, 288);
  *((volatile uint8_t *) 0x509b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b8000, layer_7_kernel_46, 288);
  *((volatile uint8_t *) 0x509bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509bc000, layer_7_kernel_47, 288);
  *((volatile uint8_t *) 0x50d80001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d80000, layer_7_kernel_48, 288);
  *((volatile uint8_t *) 0x50d84001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d84000, layer_7_kernel_49, 288);
  *((volatile uint8_t *) 0x50d88001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d88000, layer_7_kernel_50, 288);
  *((volatile uint8_t *) 0x50d8c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d8c000, layer_7_kernel_51, 288);
  *((volatile uint8_t *) 0x50d90001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d90000, layer_7_kernel_52, 288);
  *((volatile uint8_t *) 0x50d94001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d94000, layer_7_kernel_53, 288);
  *((volatile uint8_t *) 0x50d98001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d98000, layer_7_kernel_54, 288);
  *((volatile uint8_t *) 0x50d9c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d9c000, layer_7_kernel_55, 288);
  *((volatile uint8_t *) 0x50da0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da0000, layer_7_kernel_56, 288);
  *((volatile uint8_t *) 0x50da4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da4000, layer_7_kernel_57, 288);
  *((volatile uint8_t *) 0x50da8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da8000, layer_7_kernel_58, 288);
  *((volatile uint8_t *) 0x50dac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dac000, layer_7_kernel_59, 288);
  *((volatile uint8_t *) 0x50db0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db0000, layer_7_kernel_60, 288);
  *((volatile uint8_t *) 0x50db4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db4000, layer_7_kernel_61, 288);
  *((volatile uint8_t *) 0x50db8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db8000, layer_7_kernel_62, 288);
  *((volatile uint8_t *) 0x50dbc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dbc000, layer_7_kernel_63, 288);

  return CNN_OK;
}
int cnn_load_weights_8(void)
{
  *((volatile uint8_t *) 0x50180001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50180000, layer_8_kernel_0, 288);
  *((volatile uint8_t *) 0x50184001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50184000, layer_8_kernel_1, 288);
  *((volatile uint8_t *) 0x50188001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50188000, layer_8_kernel_2, 288);
  *((volatile uint8_t *) 0x5018c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5018c000, layer_8_kernel_3, 288);
  *((volatile uint8_t *) 0x50190001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50190000, layer_8_kernel_4, 288);
  *((volatile uint8_t *) 0x50194001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50194000, layer_8_kernel_5, 288);
  *((volatile uint8_t *) 0x50198001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50198000, layer_8_kernel_6, 288);
  *((volatile uint8_t *) 0x5019c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5019c000, layer_8_kernel_7, 288);
  *((volatile uint8_t *) 0x501a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a0000, layer_8_kernel_8, 288);
  *((volatile uint8_t *) 0x501a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a4000, layer_8_kernel_9, 288);
  *((volatile uint8_t *) 0x501a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a8000, layer_8_kernel_10, 288);
  *((volatile uint8_t *) 0x501ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501ac000, layer_8_kernel_11, 288);
  *((volatile uint8_t *) 0x501b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b0000, layer_8_kernel_12, 288);
  *((volatile uint8_t *) 0x501b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b4000, layer_8_kernel_13, 288);
  *((volatile uint8_t *) 0x501b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b8000, layer_8_kernel_14, 288);
  *((volatile uint8_t *) 0x501bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501bc000, layer_8_kernel_15, 288);
  *((volatile uint8_t *) 0x50580001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50580000, layer_8_kernel_16, 288);
  *((volatile uint8_t *) 0x50584001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50584000, layer_8_kernel_17, 288);
  *((volatile uint8_t *) 0x50588001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50588000, layer_8_kernel_18, 288);
  *((volatile uint8_t *) 0x5058c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5058c000, layer_8_kernel_19, 288);
  *((volatile uint8_t *) 0x50590001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50590000, layer_8_kernel_20, 288);
  *((volatile uint8_t *) 0x50594001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50594000, layer_8_kernel_21, 288);
  *((volatile uint8_t *) 0x50598001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50598000, layer_8_kernel_22, 288);
  *((volatile uint8_t *) 0x5059c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5059c000, layer_8_kernel_23, 288);
  *((volatile uint8_t *) 0x505a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a0000, layer_8_kernel_24, 288);
  *((volatile uint8_t *) 0x505a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a4000, layer_8_kernel_25, 288);
  *((volatile uint8_t *) 0x505a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a8000, layer_8_kernel_26, 288);
  *((volatile uint8_t *) 0x505ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505ac000, layer_8_kernel_27, 288);
  *((volatile uint8_t *) 0x505b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b0000, layer_8_kernel_28, 288);
  *((volatile uint8_t *) 0x505b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b4000, layer_8_kernel_29, 288);
  *((volatile uint8_t *) 0x505b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b8000, layer_8_kernel_30, 288);
  *((volatile uint8_t *) 0x505bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505bc000, layer_8_kernel_31, 288);
  *((volatile uint8_t *) 0x50980001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50980000, layer_8_kernel_32, 288);
  *((volatile uint8_t *) 0x50984001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50984000, layer_8_kernel_33, 288);
  *((volatile uint8_t *) 0x50988001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50988000, layer_8_kernel_34, 288);
  *((volatile uint8_t *) 0x5098c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5098c000, layer_8_kernel_35, 288);
  *((volatile uint8_t *) 0x50990001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50990000, layer_8_kernel_36, 288);
  *((volatile uint8_t *) 0x50994001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50994000, layer_8_kernel_37, 288);
  *((volatile uint8_t *) 0x50998001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50998000, layer_8_kernel_38, 288);
  *((volatile uint8_t *) 0x5099c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5099c000, layer_8_kernel_39, 288);
  *((volatile uint8_t *) 0x509a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a0000, layer_8_kernel_40, 288);
  *((volatile uint8_t *) 0x509a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a4000, layer_8_kernel_41, 288);
  *((volatile uint8_t *) 0x509a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a8000, layer_8_kernel_42, 288);
  *((volatile uint8_t *) 0x509ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509ac000, layer_8_kernel_43, 288);
  *((volatile uint8_t *) 0x509b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b0000, layer_8_kernel_44, 288);
  *((volatile uint8_t *) 0x509b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b4000, layer_8_kernel_45, 288);
  *((volatile uint8_t *) 0x509b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b8000, layer_8_kernel_46, 288);
  *((volatile uint8_t *) 0x509bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509bc000, layer_8_kernel_47, 288);
  *((volatile uint8_t *) 0x50d80001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d80000, layer_8_kernel_48, 288);
  *((volatile uint8_t *) 0x50d84001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d84000, layer_8_kernel_49, 288);
  *((volatile uint8_t *) 0x50d88001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d88000, layer_8_kernel_50, 288);
  *((volatile uint8_t *) 0x50d8c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d8c000, layer_8_kernel_51, 288);
  *((volatile uint8_t *) 0x50d90001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d90000, layer_8_kernel_52, 288);
  *((volatile uint8_t *) 0x50d94001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d94000, layer_8_kernel_53, 288);
  *((volatile uint8_t *) 0x50d98001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d98000, layer_8_kernel_54, 288);
  *((volatile uint8_t *) 0x50d9c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d9c000, layer_8_kernel_55, 288);
  *((volatile uint8_t *) 0x50da0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da0000, layer_8_kernel_56, 288);
  *((volatile uint8_t *) 0x50da4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da4000, layer_8_kernel_57, 288);
  *((volatile uint8_t *) 0x50da8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da8000, layer_8_kernel_58, 288);
  *((volatile uint8_t *) 0x50dac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dac000, layer_8_kernel_59, 288);
  *((volatile uint8_t *) 0x50db0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db0000, layer_8_kernel_60, 288);
  *((volatile uint8_t *) 0x50db4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db4000, layer_8_kernel_61, 288);
  *((volatile uint8_t *) 0x50db8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db8000, layer_8_kernel_62, 288);
  *((volatile uint8_t *) 0x50dbc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dbc000, layer_8_kernel_63, 288);

  return CNN_OK;
}
int cnn_load_weights_9(void)
{
  *((volatile uint8_t *) 0x50180001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50180000, layer_9_kernel_0, 66);
  *((volatile uint8_t *) 0x50184001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50184000, layer_9_kernel_1, 66);
  *((volatile uint8_t *) 0x50188001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50188000, layer_9_kernel_2, 66);
  *((volatile uint8_t *) 0x5018c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5018c000, layer_9_kernel_3, 66);
  *((volatile uint8_t *) 0x50190001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50190000, layer_9_kernel_4, 66);
  *((volatile uint8_t *) 0x50194001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50194000, layer_9_kernel_5, 66);
  *((volatile uint8_t *) 0x50198001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50198000, layer_9_kernel_6, 66);
  *((volatile uint8_t *) 0x5019c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5019c000, layer_9_kernel_7, 66);
  *((volatile uint8_t *) 0x501a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a0000, layer_9_kernel_8, 66);
  *((volatile uint8_t *) 0x501a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a4000, layer_9_kernel_9, 66);
  *((volatile uint8_t *) 0x501a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a8000, layer_9_kernel_10, 66);
  *((volatile uint8_t *) 0x501ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501ac000, layer_9_kernel_11, 66);
  *((volatile uint8_t *) 0x501b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b0000, layer_9_kernel_12, 66);
  *((volatile uint8_t *) 0x501b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b4000, layer_9_kernel_13, 66);
  *((volatile uint8_t *) 0x501b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b8000, layer_9_kernel_14, 66);
  *((volatile uint8_t *) 0x501bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501bc000, layer_9_kernel_15, 66);
  *((volatile uint8_t *) 0x50580001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50580000, layer_9_kernel_16, 66);
  *((volatile uint8_t *) 0x50584001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50584000, layer_9_kernel_17, 66);
  *((volatile uint8_t *) 0x50588001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50588000, layer_9_kernel_18, 66);
  *((volatile uint8_t *) 0x5058c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5058c000, layer_9_kernel_19, 66);
  *((volatile uint8_t *) 0x50590001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50590000, layer_9_kernel_20, 66);
  *((volatile uint8_t *) 0x50594001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50594000, layer_9_kernel_21, 66);
  *((volatile uint8_t *) 0x50598001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50598000, layer_9_kernel_22, 66);
  *((volatile uint8_t *) 0x5059c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5059c000, layer_9_kernel_23, 66);
  *((volatile uint8_t *) 0x505a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a0000, layer_9_kernel_24, 66);
  *((volatile uint8_t *) 0x505a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a4000, layer_9_kernel_25, 66);
  *((volatile uint8_t *) 0x505a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a8000, layer_9_kernel_26, 66);
  *((volatile uint8_t *) 0x505ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505ac000, layer_9_kernel_27, 66);
  *((volatile uint8_t *) 0x505b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b0000, layer_9_kernel_28, 66);
  *((volatile uint8_t *) 0x505b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b4000, layer_9_kernel_29, 66);
  *((volatile uint8_t *) 0x505b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b8000, layer_9_kernel_30, 66);
  *((volatile uint8_t *) 0x505bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505bc000, layer_9_kernel_31, 66);
  *((volatile uint8_t *) 0x50980001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50980000, layer_9_kernel_32, 66);
  *((volatile uint8_t *) 0x50984001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50984000, layer_9_kernel_33, 66);
  *((volatile uint8_t *) 0x50988001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50988000, layer_9_kernel_34, 66);
  *((volatile uint8_t *) 0x5098c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5098c000, layer_9_kernel_35, 66);
  *((volatile uint8_t *) 0x50990001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50990000, layer_9_kernel_36, 66);
  *((volatile uint8_t *) 0x50994001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50994000, layer_9_kernel_37, 66);
  *((volatile uint8_t *) 0x50998001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50998000, layer_9_kernel_38, 66);
  *((volatile uint8_t *) 0x5099c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5099c000, layer_9_kernel_39, 66);
  *((volatile uint8_t *) 0x509a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a0000, layer_9_kernel_40, 66);
  *((volatile uint8_t *) 0x509a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a4000, layer_9_kernel_41, 66);
  *((volatile uint8_t *) 0x509a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a8000, layer_9_kernel_42, 66);
  *((volatile uint8_t *) 0x509ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509ac000, layer_9_kernel_43, 66);
  *((volatile uint8_t *) 0x509b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b0000, layer_9_kernel_44, 66);
  *((volatile uint8_t *) 0x509b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b4000, layer_9_kernel_45, 66);
  *((volatile uint8_t *) 0x509b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b8000, layer_9_kernel_46, 66);
  *((volatile uint8_t *) 0x509bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509bc000, layer_9_kernel_47, 66);
  *((volatile uint8_t *) 0x50d80001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d80000, layer_9_kernel_48, 66);
  *((volatile uint8_t *) 0x50d84001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d84000, layer_9_kernel_49, 66);
  *((volatile uint8_t *) 0x50d88001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d88000, layer_9_kernel_50, 66);
  *((volatile uint8_t *) 0x50d8c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d8c000, layer_9_kernel_51, 66);
  *((volatile uint8_t *) 0x50d90001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d90000, layer_9_kernel_52, 66);
  *((volatile uint8_t *) 0x50d94001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d94000, layer_9_kernel_53, 66);
  *((volatile uint8_t *) 0x50d98001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d98000, layer_9_kernel_54, 66);
  *((volatile uint8_t *) 0x50d9c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d9c000, layer_9_kernel_55, 66);
  *((volatile uint8_t *) 0x50da0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da0000, layer_9_kernel_56, 66);
  *((volatile uint8_t *) 0x50da4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da4000, layer_9_kernel_57, 66);
  *((volatile uint8_t *) 0x50da8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da8000, layer_9_kernel_58, 66);
  *((volatile uint8_t *) 0x50dac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dac000, layer_9_kernel_59, 66);
  *((volatile uint8_t *) 0x50db0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db0000, layer_9_kernel_60, 66);
  *((volatile uint8_t *) 0x50db4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db4000, layer_9_kernel_61, 66);
  *((volatile uint8_t *) 0x50db8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db8000, layer_9_kernel_62, 66);
  *((volatile uint8_t *) 0x50dbc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dbc000, layer_9_kernel_63, 66);

  return CNN_OK;
}
int cnn_load_weights_10(void)
{
  *((volatile uint8_t *) 0x50180001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50180000, layer_10_kernel_0, 21);
  *((volatile uint8_t *) 0x50184001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50184000, layer_10_kernel_1, 21);
  *((volatile uint8_t *) 0x50188001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50188000, layer_10_kernel_2, 21);
  *((volatile uint8_t *) 0x5018c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5018c000, layer_10_kernel_3, 21);
  *((volatile uint8_t *) 0x50190001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50190000, layer_10_kernel_4, 21);
  *((volatile uint8_t *) 0x50194001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50194000, layer_10_kernel_5, 21);
  *((volatile uint8_t *) 0x50198001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50198000, layer_10_kernel_6, 21);
  *((volatile uint8_t *) 0x5019c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5019c000, layer_10_kernel_7, 21);
  *((volatile uint8_t *) 0x501a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a0000, layer_10_kernel_8, 21);
  *((volatile uint8_t *) 0x501a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a4000, layer_10_kernel_9, 21);
  *((volatile uint8_t *) 0x501a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501a8000, layer_10_kernel_10, 21);
  *((volatile uint8_t *) 0x501ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501ac000, layer_10_kernel_11, 21);
  *((volatile uint8_t *) 0x501b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b0000, layer_10_kernel_12, 21);
  *((volatile uint8_t *) 0x501b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b4000, layer_10_kernel_13, 21);
  *((volatile uint8_t *) 0x501b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501b8000, layer_10_kernel_14, 21);
  *((volatile uint8_t *) 0x501bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x501bc000, layer_10_kernel_15, 21);
  *((volatile uint8_t *) 0x50580001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50580000, layer_10_kernel_16, 21);
  *((volatile uint8_t *) 0x50584001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50584000, layer_10_kernel_17, 21);
  *((volatile uint8_t *) 0x50588001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50588000, layer_10_kernel_18, 21);
  *((volatile uint8_t *) 0x5058c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5058c000, layer_10_kernel_19, 21);
  *((volatile uint8_t *) 0x50590001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50590000, layer_10_kernel_20, 21);
  *((volatile uint8_t *) 0x50594001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50594000, layer_10_kernel_21, 21);
  *((volatile uint8_t *) 0x50598001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50598000, layer_10_kernel_22, 21);
  *((volatile uint8_t *) 0x5059c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5059c000, layer_10_kernel_23, 21);
  *((volatile uint8_t *) 0x505a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a0000, layer_10_kernel_24, 21);
  *((volatile uint8_t *) 0x505a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a4000, layer_10_kernel_25, 21);
  *((volatile uint8_t *) 0x505a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505a8000, layer_10_kernel_26, 21);
  *((volatile uint8_t *) 0x505ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505ac000, layer_10_kernel_27, 21);
  *((volatile uint8_t *) 0x505b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b0000, layer_10_kernel_28, 21);
  *((volatile uint8_t *) 0x505b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b4000, layer_10_kernel_29, 21);
  *((volatile uint8_t *) 0x505b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505b8000, layer_10_kernel_30, 21);
  *((volatile uint8_t *) 0x505bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x505bc000, layer_10_kernel_31, 21);
  *((volatile uint8_t *) 0x50980001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50980000, layer_10_kernel_32, 21);
  *((volatile uint8_t *) 0x50984001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50984000, layer_10_kernel_33, 21);
  *((volatile uint8_t *) 0x50988001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50988000, layer_10_kernel_34, 21);
  *((volatile uint8_t *) 0x5098c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5098c000, layer_10_kernel_35, 21);
  *((volatile uint8_t *) 0x50990001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50990000, layer_10_kernel_36, 21);
  *((volatile uint8_t *) 0x50994001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50994000, layer_10_kernel_37, 21);
  *((volatile uint8_t *) 0x50998001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50998000, layer_10_kernel_38, 21);
  *((volatile uint8_t *) 0x5099c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x5099c000, layer_10_kernel_39, 21);
  *((volatile uint8_t *) 0x509a0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a0000, layer_10_kernel_40, 21);
  *((volatile uint8_t *) 0x509a4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a4000, layer_10_kernel_41, 21);
  *((volatile uint8_t *) 0x509a8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509a8000, layer_10_kernel_42, 21);
  *((volatile uint8_t *) 0x509ac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509ac000, layer_10_kernel_43, 21);
  *((volatile uint8_t *) 0x509b0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b0000, layer_10_kernel_44, 21);
  *((volatile uint8_t *) 0x509b4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b4000, layer_10_kernel_45, 21);
  *((volatile uint8_t *) 0x509b8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509b8000, layer_10_kernel_46, 21);
  *((volatile uint8_t *) 0x509bc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x509bc000, layer_10_kernel_47, 21);
  *((volatile uint8_t *) 0x50d80001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d80000, layer_10_kernel_48, 21);
  *((volatile uint8_t *) 0x50d84001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d84000, layer_10_kernel_49, 21);
  *((volatile uint8_t *) 0x50d88001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d88000, layer_10_kernel_50, 21);
  *((volatile uint8_t *) 0x50d8c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d8c000, layer_10_kernel_51, 21);
  *((volatile uint8_t *) 0x50d90001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d90000, layer_10_kernel_52, 21);
  *((volatile uint8_t *) 0x50d94001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d94000, layer_10_kernel_53, 21);
  *((volatile uint8_t *) 0x50d98001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d98000, layer_10_kernel_54, 21);
  *((volatile uint8_t *) 0x50d9c001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50d9c000, layer_10_kernel_55, 21);
  *((volatile uint8_t *) 0x50da0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da0000, layer_10_kernel_56, 21);
  *((volatile uint8_t *) 0x50da4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da4000, layer_10_kernel_57, 21);
  *((volatile uint8_t *) 0x50da8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50da8000, layer_10_kernel_58, 21);
  *((volatile uint8_t *) 0x50dac001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dac000, layer_10_kernel_59, 21);
  *((volatile uint8_t *) 0x50db0001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db0000, layer_10_kernel_60, 21);
  *((volatile uint8_t *) 0x50db4001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db4000, layer_10_kernel_61, 21);
  *((volatile uint8_t *) 0x50db8001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50db8000, layer_10_kernel_62, 21);
  *((volatile uint8_t *) 0x50dbc001) = 0x01; // Set address
  memcpy32((uint32_t *) 0x50dbc000, layer_10_kernel_63, 21);

  return CNN_OK;
}
int cnn_init_0(void)
{
  *((volatile uint32_t *) 0x50001000) = 0x00000000; // AON control
  *((volatile uint32_t *) 0x50100000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50100004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50500000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50500004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50900000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50900004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50d00000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50d00004) = 0x0000040e; // SRAM control

  return CNN_OK;
}
int cnn_init_1(void)
{
  *((volatile uint32_t *) 0x50001000) = 0x00000000; // AON control
  *((volatile uint32_t *) 0x50100000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50100004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50500000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50500004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50900000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50900004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50d00000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50d00004) = 0x0000040e; // SRAM control

  return CNN_OK;
}
int cnn_init_2(void)
{
  *((volatile uint32_t *) 0x50001000) = 0x00000000; // AON control
  *((volatile uint32_t *) 0x50100000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50100004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50500000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50500004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50900000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50900004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50d00000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50d00004) = 0x0000040e; // SRAM control

  return CNN_OK;
}
int cnn_init_3(void)
{
  *((volatile uint32_t *) 0x50001000) = 0x00000000; // AON control
  *((volatile uint32_t *) 0x50100000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50100004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50500000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50500004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50900000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50900004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50d00000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50d00004) = 0x0000040e; // SRAM control

  return CNN_OK;
}
int cnn_init_4(void)
{
  *((volatile uint32_t *) 0x50001000) = 0x00000000; // AON control
  *((volatile uint32_t *) 0x50100000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50100004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50500000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50500004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50900000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50900004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50d00000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50d00004) = 0x0000040e; // SRAM control

  return CNN_OK;
}
int cnn_init_5(void)
{
  *((volatile uint32_t *) 0x50001000) = 0x00000000; // AON control
  *((volatile uint32_t *) 0x50100000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50100004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50500000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50500004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50900000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50900004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50d00000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50d00004) = 0x0000040e; // SRAM control

  return CNN_OK;
}
int cnn_init_6(void)
{
  *((volatile uint32_t *) 0x50001000) = 0x00000000; // AON control
  *((volatile uint32_t *) 0x50100000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50100004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50500000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50500004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50900000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50900004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50d00000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50d00004) = 0x0000040e; // SRAM control

  return CNN_OK;
}
int cnn_init_7(void)
{
  *((volatile uint32_t *) 0x50001000) = 0x00000000; // AON control
  *((volatile uint32_t *) 0x50100000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50100004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50500000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50500004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50900000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50900004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50d00000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50d00004) = 0x0000040e; // SRAM control

  return CNN_OK;
}
int cnn_init_8(void)
{
  *((volatile uint32_t *) 0x50001000) = 0x00000000; // AON control
  *((volatile uint32_t *) 0x50100000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50100004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50500000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50500004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50900000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50900004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50d00000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50d00004) = 0x0000040e; // SRAM control

  return CNN_OK;
}
int cnn_init_9(void)
{
  *((volatile uint32_t *) 0x50001000) = 0x00000000; // AON control
  *((volatile uint32_t *) 0x50100000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50100004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50500000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50500004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50900000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50900004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50d00000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50d00004) = 0x0000040e; // SRAM control

  return CNN_OK;
}
int cnn_init_10(void)
{
  *((volatile uint32_t *) 0x50001000) = 0x00000000; // AON control
  *((volatile uint32_t *) 0x50100000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50100004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50500000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50500004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50900000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50900004) = 0x0000040e; // SRAM control
  *((volatile uint32_t *) 0x50d00000) = 0x00100008; // Stop SM
  *((volatile uint32_t *) 0x50d00004) = 0x0000040e; // SRAM control

  return CNN_OK;
}
