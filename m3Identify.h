

#pragma once
// This source file contains camera model enumerators generated by m3apil_device_enum.xslt

#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{
  MODEL_ID_UNKNOWN			=0,
  	MODEL_ID_MR274CU_BH                   =1,
	MODEL_ID_MR16000MU                    =2,
	MODEL_ID_MR282CC_BH                   =3,
	MODEL_ID_MR274MU_BH                   =4,
	MODEL_ID_MR456CU_BH                   =5,
	MODEL_ID_MR252CC_BH                   =6,
	MODEL_ID_MR4021MU_BH                  =7,
	MODEL_ID_MR4022MU_BH                  =116,
	MODEL_ID_MR655CU_BH                   =9,
	MODEL_ID_MR11002M                     =10,
	MODEL_ID_MR4021CU_BH                  =11,
	MODEL_ID_MR655MU_BH                   =12,
	MODEL_ID_MR282CU_BH                   =13,
	MODEL_ID_MR252CU_BH                   =14,
	MODEL_ID_MR285MU_BH                   =15,
	MODEL_ID_MR285CU_BH                   =16,
	MODEL_ID_MR285MC_BH                   =17,
	MODEL_ID_MR285CC_BH                   =18,
	MODEL_ID_MH160MC_KK_FA                =112,
	MODEL_ID_MU9PC_BH                     =20,
	MODEL_ID_MR11002C                     =21,
	MODEL_ID_MU9PM_MH                     =22,
	MODEL_ID_MU9PC_MH                     =23,
	MODEL_ID_MU9PM_BH                     =24,
	MODEL_ID_GENTLXIAPI_REFERENCE         =35,
	MODEL_ID_MQ013CG_E2                   =49,
	MODEL_ID_MQ013MG_E2                   =50,
	MODEL_ID_MQ003CG_CM                   =51,
	MODEL_ID_MQ003MG_CM                   =52,
	MODEL_ID_MQ022CG_CM                   =53,
	MODEL_ID_MQ022MG_CM                   =54,
	MODEL_ID_MQ042CG_CM                   =55,
	MODEL_ID_MQ042MG_CM                   =56,
	MODEL_ID_MM282CU_BH                   =158,
	MODEL_ID_MQ022MG_CM_SR2               =58,
	MODEL_ID_MQ042CG_CM_TG                =59,
	MODEL_ID_MQ042MG_CM_TG                =60,
	MODEL_ID_MQ_USB3LINK                  =61,
	MODEL_ID_MU9PC_SLC5                   =62,
	MODEL_ID_MQ022CG_CM_TS                =66,
	MODEL_ID_MQ022MG_CM_TS                =67,
	MODEL_ID_MQ042CG_CM_TS                =68,
	MODEL_ID_MQ042MG_CM_TS                =69,
	MODEL_ID_MQ013CG_ONV                  =70,
	MODEL_ID_MQ013MG_ONV                  =71,
	MODEL_ID_MQ013RG_E2                   =72,
	MODEL_ID_MQ042RG_CM                   =73,
	MODEL_ID_MR11002XC_ICW                =75,
	MODEL_ID_MQ020CG_E2                   =76,
	MODEL_ID_MQ020MG_E2                   =77,
	MODEL_ID_MQ022RG_CM                   =78,
	MODEL_ID_MR285CC_DP                   =79,
	MODEL_ID_MR285MC_DP                   =80,
	MODEL_ID_MR252CU_BRD                  =81,
	MODEL_ID_MH110MC_KK_FA                =82,
	MODEL_ID_MR282CU_BRD                  =83,
	MODEL_ID_MR282CC_DP                   =84,
	MODEL_ID_MR285MU_BH_IRE               =85,
	MODEL_ID_MR285MC_DP_IRE               =86,
	MODEL_ID_MH110XC_KK_FA                =87,
	MODEL_ID_MH160XC_KK_FA                =88,
	MODEL_ID_MR252CC_DP                   =90,
	MODEL_ID_MR285MC_BH_IRE               =91,
	MODEL_ID_MR456CC_BH                   =92,
	MODEL_ID_MR282CU_DP                   =93,
	MODEL_ID_MQ022HG_IM_ST32_NIR          =135,
	MODEL_ID_MR282CC_BRD                  =96,
	MODEL_ID_MR252CC_BRD                  =100,
	MODEL_ID_MQ022HG_IM_SM4X4_VIS         =136,
	MODEL_ID_MR252CU_DP                   =101,
	MODEL_ID_MR285MU_BRD                  =102,
	MODEL_ID_MR285CU_BRD                  =103,
	MODEL_ID_MR285MC_BRD                  =104,
	MODEL_ID_MR285CC_BRD                  =105,
	MODEL_ID_MR285CC_DP_IRE               =106,
	MODEL_ID_MR285CC_BH_IRE               =107,
	MODEL_ID_MR285CU_BH_IRE               =108,
	MODEL_ID_MX11002                      =109,
	MODEL_ID_MH110CC_KK_FA                =110,
	MODEL_ID_MR16000CU                    =111,
	MODEL_ID_MH160CC_KK_FA                =113,
	MODEL_ID_MR4022MC_VELETA              =114,
	MODEL_ID_MR4021MC_VELETA              =115,
	MODEL_ID_MU9JC_BH                     =117,
	MODEL_ID_MU9JM_BH                     =118,
	MODEL_ID_MQ022HG_IM_LS100_NIR         =134,
	MODEL_ID_CB120RG_CM_X8G3              =174,
	MODEL_ID_MD091CC_SY                   =122,
	MODEL_ID_CB120MG_CM_X8G3              =173,
	MODEL_ID_MD028CU_SY                   =126,
	MODEL_ID_MD061CU_SY                   =127,
	MODEL_ID_MD091CU_SY                   =128,
	MODEL_ID_MD028MU_SY                   =129,
	MODEL_ID_MD061MU_SY                   =130,
	MODEL_ID_MD091MU_SY                   =131,
	MODEL_ID_CB200CG_CM                   =132,
	MODEL_ID_CB200MG_CM                   =133,
	MODEL_ID_CB120CG_CM_X8G3              =172,
	MODEL_ID_CB120RG_CM                   =171,
	MODEL_ID_MD120CU_SY                   =139,
	MODEL_ID_MD120MU_SY                   =140,
	MODEL_ID_MQ022HG_IM_UN                =141,
	MODEL_ID_CAL_Simulator                =142,
	MODEL_ID_MT031CG_SY                   =164,
	MODEL_ID_MQ022HG_IM_LS150_VISNIR      =143,
	MODEL_ID_MQ022HG_IM_SM5X5_NIR         =144,
	MODEL_ID_MQ022HG_IM_SM4X4_NIR         =145,
	MODEL_ID_MQ022MG_CM_BARE_BRD          =146,
	MODEL_ID_MQ042MG_CM_BARE_BRD          =147,
	MODEL_ID_MT023CG_SY                   =148,
	MODEL_ID_MT023MG_SY                   =149,
	MODEL_ID_MT200CG_CM                   =150,
	MODEL_ID_MT200MG_CM                   =151,
	MODEL_ID_CB120CG_CM                   =152,
	MODEL_ID_CB120MG_CM                   =153,
	MODEL_ID_MT003CG_LX                   =154,
	MODEL_ID_MT003MG_LX                   =155,
	MODEL_ID_MQ013CG_ON                   =156,
	MODEL_ID_MQ013MG_ON                   =157,
	MODEL_ID_MT050CG_SY                   =159,
	MODEL_ID_MT050MG_SY                   =160,
	MODEL_ID_MT120CG_CM                   =161,
	MODEL_ID_MT031MG_SY                   =165,
	MODEL_ID_MT120MG_CM                   =163,
	MODEL_ID_MJ042IC_TS_UB                =166,
	MODEL_ID_MH110XC_KK_TP2_1             =168,
	MODEL_ID_MC023CG_SY                   =169,
	MODEL_ID_MC023MG_SY                   =170,
	MODEL_ID_MC023CG_SY_FLEX              =205,
	MODEL_ID_MX124CG_SY_X2G2              =175,
	MODEL_ID_MX124MG_SY_X2G2              =176,
	MODEL_ID_MX089CG_SY_X2G2              =177,
	MODEL_ID_MX089MG_SY_X2G2              =178,
	MODEL_ID_MC031CG_SY                   =179,
	MODEL_ID_MC031MG_SY                   =180,
	MODEL_ID_MC050CG_SY                   =181,
	MODEL_ID_MC050MG_SY                   =182,
	MODEL_ID_MC089CG_SY                   =183,
	MODEL_ID_MC124CG_SY                   =186,
	MODEL_ID_MC089MG_SY                   =185,
	MODEL_ID_MC124MG_SY                   =187,
	MODEL_ID_MX023CG_SY_X2G2              =188,
	MODEL_ID_MX023MG_SY_X2G2              =189,
	MODEL_ID_MX031CG_SY_X2G2              =190,
	MODEL_ID_MX031MG_SY_X2G2              =191,
	MODEL_ID_MX050CG_SY_X2G2              =192,
	MODEL_ID_MX050MG_SY_X2G2              =193,
	MODEL_ID_MX042CG_CM_X2G2              =194,
	MODEL_ID_MX042MG_CM_X2G2              =195,
	MODEL_ID_MX042RG_CM_X2G2              =196,
	MODEL_ID_CB500CG_CM                   =197,
	MODEL_ID_CB500MG_CM                   =198,
	MODEL_ID_CB042CG_GP                   =199,
	MODEL_ID_CB042MG_GP                   =200,
	MODEL_ID_CB013CG_LX_X8G3              =201,
	MODEL_ID_CB013MG_LX_X8G3              =202,
	MODEL_ID_MJ081MC_TS_TC                =203,
	MODEL_ID_MC023MG_SY_FLEX              =206,
	MODEL_ID_MC031CG_SY_FLEX              =207,
	MODEL_ID_MC031MG_SY_FLEX              =208,
	MODEL_ID_MC050CG_SY_FLEX              =209,
	MODEL_ID_MC050MG_SY_FLEX              =210,
	MODEL_ID_MC089CG_SY_FLEX              =211,
	MODEL_ID_MC089MG_SY_FLEX              =212,
	MODEL_ID_MC124CG_SY_FLEX              =213,
	MODEL_ID_MC124MG_SY_FLEX              =214,
	MODEL_ID_MQ013RG_ON                   =215,
	MODEL_ID_MJ042MC_TS_TC                =216,
	MODEL_ID_MJ081XC_TS_TC                =217,
	MODEL_ID_MJ081XC_TS_TP1_1_25          =218,
	MODEL_ID_MJ150MR_GP                   =219,
	MODEL_ID_MX200CG_CM_X4G2              =220,
	MODEL_ID_MX200MG_CM_X4G2              =221,
	MODEL_ID_MX120CG_CM_X4G2              =222,
	MODEL_ID_MX120MG_CM_X4G2              =223,
	MODEL_ID_MX120RG_CM_X4G2              =224,
	MODEL_ID_MJ160MU_TS_UB                =225,
	MODEL_ID_MJ160MC_TS_UB                =226,
	MODEL_ID_MQ022HG_IM_SM2X2_RGBNIR      =227,
	MODEL_ID_CB019CG_LX_X8G3              =228,
	MODEL_ID_CB019MG_LX_X8G3              =229,
	MODEL_ID_CB160CG_LX_X8G3              =230,
	MODEL_ID_CB160MG_LX_X8G3              =231,
	MODEL_ID_MJ160XC_TS_UB                =232,
	MODEL_ID_MX004MG_SY_X2G2              =233,
	MODEL_ID_MX004CG_SY_X2G2              =234,
	MODEL_ID_MX016MG_SY_X2G2              =235,
	MODEL_ID_MX016CG_SY_X2G2              =236,
	MODEL_ID_MJ290MC_TS_UB                =237,
	MODEL_ID_MJ150XR_GP_TP2_1_GO          =258,
	MODEL_ID_MJ042MU_TS_TC                =252,
	MODEL_ID_MX022CG_CM_X2G2              =248,
	MODEL_ID_MX022MG_CM_X2G2              =249,
	MODEL_ID_MX022RG_CM_X2G2              =250,
	MODEL_ID_MX019MM_PH_X2G2              =251,
	MODEL_ID_MX500CG_CM_X4G2              =253,
	MODEL_ID_MX500MG_CM_X4G2              =256,
	MODEL_ID_MU181CR_ON                   =257,
	MODEL_ID_MQ022MG_CM_BRD               =402,
	MODEL_ID_MJ042MR_GP_P11               =499,
	MODEL_ID_MJ042MR_GP_P11_BSI           =500,
	MODEL_ID_MQ022MG_CM_SL_BRD            =633,
	MODEL_ID_MQ022MG_CM_FL_BRD            =661,
	MODEL_ID_MQ022MG_CM_FL                =685,
	MODEL_ID_MX377MR_GP_Fx_X4G3_MTP_W     =701,
	MODEL_ID_MX377MR_GP_Bx_X4G3_MTP_W     =703,
	MODEL_ID_CB262MG_GP_X8G3              =706,
	MODEL_ID_CB262CG_GP_X8G3              =707,
	MODEL_ID_MR655MU_BRD                  =1230,
	MODEL_ID_MX610CR_SY_X4G3_FF           =1210,
	MODEL_ID_MQ022HG_IM_SM4X4_VIS3        =1201,
	MODEL_ID_MX1510MR_SY_X4G3_FF          =1205,
	MODEL_ID_MX1510CR_SY_X4G3_FF          =1206,
	MODEL_ID_MX1018MR_SY_X4G3_FF          =1207,
	MODEL_ID_MX1018CR_SY_X4G3_FF          =1208,
	MODEL_ID_MX610MR_SY_X4G3_FF           =1209,
	MODEL_ID_MX120CG_CM_X8G3_FF           =1238,
	MODEL_ID_CB042MG_GP_BSI               =843,
	MODEL_ID_CB042CG_GP_BSI               =844,
	MODEL_ID_CB500MG_CM_X8G3_ELD          =855,
	MODEL_ID_CB654CG_GP_X8G3              =858,
	MODEL_ID_CB654MG_GP_X8G3              =859,
	MODEL_ID_MC050YG_SY_UB                =882,
	MODEL_ID_MC050ZG_SY_UB                =883,
	MODEL_ID_MJ042MR_GP_P6                =887,
	MODEL_ID_MJ042MR_GP_P6_BSI            =888,
	MODEL_ID_MX377MR_GP_Fx_X4G3_MTP       =900,
	MODEL_ID_MX377MR_GP_Bx_X4G3_MTP       =901,
	MODEL_ID_MJ042MR_GP_P11_BSI_TVISB     =902,
	MODEL_ID_MJ042MR_GP_P11_BSI_UV        =903,
	MODEL_ID_MJ042MR_GP_P11_BSI_VIS       =904,
	MODEL_ID_CB120CG_CM_X8G3_R2           =905,
	MODEL_ID_CB120MG_CM_X8G3_R2           =906,
	MODEL_ID_CB120RG_CM_X8G3_R2           =907,
	MODEL_ID_CB013CG_LX_X8G3_R2           =908,
	MODEL_ID_CB013MG_LX_X8G3_R2           =909,
	MODEL_ID_CB019CG_LX_X8G3_R2           =910,
	MODEL_ID_CB019MG_LX_X8G3_R2           =911,
	MODEL_ID_CB160CG_LX_X8G3_R2           =912,
	MODEL_ID_CB160MG_LX_X8G3_R2           =913,
	MODEL_ID_MX1510MR_SY_X2G2_VXL         =914,
	MODEL_ID_MX1510CR_SY_X2G2_VXL         =915,
	MODEL_ID_MQ022HG_IM_SM4X4_REDNIR      =919,
	MODEL_ID_MX200MG_CM_X4G2_TG_FL_EMS    =920,
	MODEL_ID_MH160XC_KK_TP2_1             =922,
	MODEL_ID_MU181CR_ON_R3                =923,
	MODEL_ID_MX042MR_GP_X4G2_ARX          =928,
	MODEL_ID_MX161CG_SY_X2G2              =941,
	MODEL_ID_MX161MG_SY_X2G2              =944,
	MODEL_ID_MX203CG_SY_X2G2              =960,
	MODEL_ID_MX203MG_SY_X2G2              =963,
	MODEL_ID_MX245CG_SY_X2G2              =970,
	MODEL_ID_MX245MG_SY_X2G2              =973,
	MODEL_ID_MX019MM_PH_X2G2_FV_FR        =1004,
	MODEL_ID_MJ150CR_GP                   =993,
	MODEL_ID_MJ150XR_GP_FA_GO             =996,
	MODEL_ID_MQ022HG_IM_LS100_NIR2        =1005,
	MODEL_ID_MQ022HG_IM_LS150_VN2         =1006,
	MODEL_ID_MQ022HG_IM_SM4X4_VIS2        =1007,
	MODEL_ID_MQ022HG_IM_SM4X4_RN2         =1008,
	MODEL_ID_MQ022HG_IM_SM5X5_NIR2        =1009,
	MODEL_ID_MX022HG_IM_LS100_NIR2_FL     =1010,
	MODEL_ID_MX022HG_IM_LS150_VN2_FL      =1011,
	MODEL_ID_MX022HG_IM_SM4X4_VIS2_FL     =1012,
	MODEL_ID_MX022HG_IM_SM4X4_RN2_FL      =1013,
	MODEL_ID_MX022HG_IM_SM5X5_NIR2_FL     =1014,
	MODEL_ID_MX022HG_IM_LS100_NIR2_FV     =1015,
	MODEL_ID_MX022HG_IM_LS150_VN2_FV      =1016,
	MODEL_ID_MX022HG_IM_SM4X4_VIS2_FV     =1017,
	MODEL_ID_MX022HG_IM_SM4X4_RN2_FV      =1018,
	MODEL_ID_MX022HG_IM_SM5X5_NIR2_FV     =1019,
	MODEL_ID_MX022HG_IM_LS100_NIR2_FF     =1020,
	MODEL_ID_MX022HG_IM_LS150_VN2_FF      =1021,
	MODEL_ID_MX022HG_IM_SM4X4_VIS2_FF     =1022,
	MODEL_ID_MX022HG_IM_SM4X4_RN2_FF      =1023,
	MODEL_ID_MX022HG_IM_SM5X5_NIR2_FF     =1024,
	MODEL_ID_MX022MG_CM_BARE_FL_IM        =1025,
	MODEL_ID_MX022MG_CM_BARE_FL_BRD       =1026,
	MODEL_ID_MQ022HG_IM_LS100_NIR2_FL     =1027,
	MODEL_ID_MQ022HG_IM_LS150_VN2_FL      =1028,
	MODEL_ID_MQ022HG_IM_SM4X4_VIS2_FL     =1029,
	MODEL_ID_MQ022HG_IM_SM4X4_RN2_FL      =1030,
	MODEL_ID_MQ022HG_IM_SM5X5_NIR2_FL     =1031,
	MODEL_ID_MQ022MG_CM_BARE_IM           =1032,
	MODEL_ID_MQ022MG_CM_BARE_FL_IM        =1033,
	MODEL_ID_MQ022MG_CM_BARE_FL_BRD       =1034,
	MODEL_ID_MX262CG_GP_X4G2_FF           =1042,
	MODEL_ID_MX262MG_GP_X4G2_FF           =1041,
	MODEL_ID_MX262RG_GP_X4G2_FF           =1040,
	MODEL_ID_MX610CR_SY_X2G2_VXL          =1043,
	MODEL_ID_MX610MR_SY_X2G2_VXL          =1044,
	MODEL_ID_MX510XG_GP_FA_GO             =1050,
	MODEL_ID_MC161CG_SY_FLEX              =1081,
	MODEL_ID_MC161MG_SY_FLEX              =1082,
	MODEL_ID_MC161CG_SY                   =1083,
	MODEL_ID_MC161MG_SY                   =1084,
	MODEL_ID_MC203CG_SY                   =1095,
	MODEL_ID_MC203CG_SY_FLEX              =1097,
	MODEL_ID_MC203MG_SY                   =1100,
	MODEL_ID_MC203MG_SY_FLEX              =1102,
	MODEL_ID_MC245CG_SY                   =1105,
	MODEL_ID_MC245CG_SY_FLEX              =1107,
	MODEL_ID_MC245MG_SY                   =1110,
	MODEL_ID_MC245MG_SY_FLEX              =1112,
	MODEL_ID_MX510XG_GP_TP2_1_GO          =1119,
	MODEL_ID_MX161CG_SY_X2G2_HDR          =1133,
	MODEL_ID_MX161MG_SY_X2G2_HDR          =1137,
	MODEL_ID_MX203CG_SY_X2G2_HDR          =1141,
	MODEL_ID_MX203MG_SY_X2G2_HDR          =1145,
	MODEL_ID_MX245CG_SY_X2G2_HDR          =1149,
	MODEL_ID_MX245MG_SY_X2G2_HDR          =1153,
	MODEL_ID_MC161CG_SY_HDR               =1157,
	MODEL_ID_MC161CG_SY_FLEX_HDR          =1159,
	MODEL_ID_MC161MG_SY_HDR               =1162,
	MODEL_ID_MC161MG_SY_FLEX_HDR          =1164,
	MODEL_ID_MC203CG_SY_HDR               =1167,
	MODEL_ID_MC203CG_SY_FLEX_HDR          =1169,
	MODEL_ID_MC203MG_SY_HDR               =1172,
	MODEL_ID_MC203MG_SY_FLEX_HDR          =1174,
	MODEL_ID_MC245CG_SY_HDR               =1177,
	MODEL_ID_MC245CG_SY_FLEX_HDR          =1179,
	MODEL_ID_MC245MG_SY_HDR               =1182,
	MODEL_ID_MC245MG_SY_FLEX_HDR          =1184,
	MODEL_ID_MX120MG_CM_X8G3_FF           =1239,
	MODEL_ID_MJ150XR_GP_TP2_6_1_GO        =1251,
	MODEL_ID_MX245MG_SY_X4G3_FF           =1281,
	MODEL_ID_MX245CG_SY_X4G3_FF           =1282,
	MODEL_ID_MX203MG_SY_X4G3_FF           =1283,
	MODEL_ID_MX203CG_SY_X4G3_FF           =1284,
	MODEL_ID_MX161MG_SY_X4G3_FF           =1285,
	MODEL_ID_MX161CG_SY_X4G3_FF           =1286,
	MODEL_ID_MU181CR_ON_CZM               =1288,
	MODEL_ID_MU181CR_ON_CZM_R3            =1289,
	MODEL_ID_MX510XG_GP_FA_CSI            =1290,
	MODEL_ID_MX510MG_GP                   =1291,
	MODEL_ID_MX124CG_SY_LT_X2G2           =1320,
	MODEL_ID_MX124MG_SY_LT_X2G2           =1324,
	MODEL_ID_MC031MG_SY_FL_PHO            =1335,
	MODEL_ID_CB023MR_GP_X8G3              =1344,
	MODEL_ID_MX031MG_SY_X2G2_CS_PHO       =1351,
	MODEL_ID_MJ042MR_GP_P11_BSI_NEO       =1353,
	MODEL_ID_MX610XR_SY_X4G3_FA_CSI       =1362,
	MODEL_ID_MX610XR_SY_X4G3_FA_GO        =1363,
	MODEL_ID_MX610XR_SY_X4G3_TP2_1_CSI    =1364,
	MODEL_ID_MX610XR_SY_X4G3_TP2_1_GO     =1365,
	MODEL_ID_MX262RG_GP_X8G3_MTP_LA       =1366,
	MODEL_ID_MX081UG_SY_X2G2_HDR          =1373,
	MODEL_ID_MJ042MR_GP_P6_BSI_XPL        =1374,
	MODEL_ID_MX071CG_SY_X2G2              =1378,
	MODEL_ID_MX071MG_SY_X2G2              =1384,
	MODEL_ID_MX028CG_SY_X2G2              =1407,
	MODEL_ID_MX028MG_SY_X2G2              =1411,
	MODEL_ID_MX017CG_SY_X2G2              =1415,
	MODEL_ID_MX017MG_SY_X2G2              =1419,
	MODEL_ID_MX005CG_SY_X2G2              =1423,
	MODEL_ID_MX005MG_SY_X2G2              =1427,

}E_MODEL;

#ifdef __cplusplus
}
#endif

