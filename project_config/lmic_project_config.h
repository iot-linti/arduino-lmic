// project-specific definitions for otaa sensor
//#define CFG_eu868 1
//#define CFG_us915 1
#define CFG_au921 1
//#define CFG_as923 1
//#define CFG_in866 1
#define CFG_sx1276_radio 1
//#define LMIC_USE_INTERRUPTS

#ifdef ESP8266
#define LMIC_DEBUG_LEVEL 1
#endif

#define LMIC_IGNORE_MCMD_LADR_REQ
