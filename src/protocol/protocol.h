#ifndef PROTODEF

#else
#ifdef PROTO_HAS_CYRF6936
PROTODEF(PROTOCOL_DEVO,   CYRF6936, EATRG, DEVO_Cmds, "DEVO")
PROTODEF(PROTOCOL_WK2801, CYRF6936, EATRG, WK2x01_Cmds, "WK2801")
#ifndef DEFINE_FUNCS
PROTODEF(PROTOCOL_WK2601, CYRF6936, EATRG, WK2x01_Cmds, "WK2601")
PROTODEF(PROTOCOL_WK2401, CYRF6936, EATRG, WK2x01_Cmds, "WK2401")
PROTODEF(PROTOCOL_DSM2,   CYRF6936, TAERG, DSM2_Cmds,   "DSM2")
#endif
PROTODEF(PROTOCOL_DSMX,   CYRF6936, TAERG, DSM2_Cmds,   "DSMX")
PROTODEF(PROTOCOL_J6PRO,  CYRF6936, AETRG, J6PRO_Cmds,  "J6Pro")
#endif //PROTO_HAS_CYRF6936
#ifdef PROTO_HAS_A7105
PROTODEF(PROTOCOL_FLYSKY, A7105, AETRG, FLYSKY_Cmds, "Flysky")
PROTODEF(PROTOCOL_HUBSAN, A7105, AETRG, HUBSAN_Cmds, "Hubsan4")
PROTODEF(PROTOCOL_JOYSWAY, A7105, AETRG, JOYSWAY_Cmds, "Joysway")
#endif //PROTO_HAS_A7105
#ifdef PROTO_HAS_CC2500
PROTODEF(PROTOCOL_FRSKY2WAY, CC2500, AETRG, FRSKY2WAY_Cmds, "Frsky")
PROTODEF(PROTOCOL_FRSKY1WAY, CC2500, AETRG, FRSKY1WAY_Cmds, "Frsky-V8")
PROTODEF(PROTOCOL_FRSKYX, CC2500, AETRG, FRSKYX_Cmds, "FrskyX")
PROTODEF(PROTOCOL_SKYARTEC, CC2500, AETRG, SKYARTEC_Cmds, "Skyartec")
PROTODEF(PROTOCOL_SFHSS, CC2500, AETRG, SFHSS_Cmds, "S-FHSS")
#endif //PROTO_HAS_CC2500
#ifdef PROTO_HAS_NRF24L01
PROTODEF(PROTOCOL_V202, NRF24L01, AETRG, V202_Cmds, "V202")
PROTODEF(PROTOCOL_SLT, NRF24L01, AETRG, SLT_Cmds, "SLT")
PROTODEF(PROTOCOL_HiSky, NRF24L01, AETRG, HiSky_Cmds, "HiSky")
PROTODEF(PROTOCOL_YD717, NRF24L01, AETRG, YD717_Cmds, "YD717")
PROTODEF(PROTOCOL_SymaX, NRF24L01, AETRG, SYMAX_Cmds, "SymaX")
PROTODEF(PROTOCOL_CFlie, NRF24L01, AETRG, CFlie_Cmds, "CFlie")
PROTODEF(PROTOCOL_H377, NRF24L01, AETRG, H377_Cmds, "H377")
PROTODEF(PROTOCOL_HM830, NRF24L01, TAERG, HM830_Cmds, "HM830")
PROTODEF(PROTOCOL_KN, NRF24L01, TAERG, KN_Cmds, "KN")
PROTODEF(PROTOCOL_ESKY150, NRF24L01, TAERG, ESKY150_Cmds, "ESky150")
PROTODEF(PROTOCOL_ESKY, NRF24L01, AETRG, ESKY_Cmds, "ESky")
PROTODEF(PROTOCOL_BLUEFLY, NRF24L01, AETRG, BlueFly_Cmds, "BlueFly")
//PROTODEF(PROTOCOL_NE260, NRF24L01, AETRG, NE260_Cmds, "NE260")
PROTODEF(PROTOCOL_CX10, NRF24L01, AETRG, CX10_Cmds, "CX10")
PROTODEF(PROTOCOL_CG023, NRF24L01, AETRG, CG023_Cmds, "CG023")
PROTODEF(PROTOCOL_HONTAI, NRF24L01, AETRG, HonTai_Cmds, "HonTai")
PROTODEF(PROTOCOL_FY326, NRF24L01, AETRG, FY326_Cmds, "FY326")
PROTODEF(PROTOCOL_BAYANG, NRF24L01, AETRG, Bayang_Cmds, "Bayang")
PROTODEF(PROTOCOL_H8_3D, NRF24L01, AETRG, H8_3D_Cmds, "H8-3D")
PROTODEF(PROTOCOL_MJXQ, NRF24L01, AETRG, MJXq_Cmds, "MJXq")
PROTODEF(PROTOCOL_MT99XX, NRF24L01, AETRG, MT99XX_Cmds, "MT99XX")
PROTODEF(PROTOCOL_FQ777, NRF24L01, AETRG, FQ777_Cmds, "FQ777")
PROTODEF(PROTOCOL_INAV, NRF24L01, AETRG, INAV_Cmds, "iNAV")
#endif //PROTO_HAS_NRF24L01

PROTODEF(PROTOCOL_PPM, TX_MODULE_LAST,  NULL, PPMOUT_Cmds, "PPM")

PROTODEF(PROTOCOL_USBHID, TX_MODULE_LAST,  NULL, USBHID_Cmds, "USBHID")
#ifdef BUILDTYPE_DEV
PROTODEF(PROTOCOL_TESTRF, TX_MODULE_LAST,  NULL, TESTRF_Cmds, "TESTRF")
#endif
#endif //PROTODEF
