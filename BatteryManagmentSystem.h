#include <stdio.h>


typedef enum {
    LOW_SOC_BREACH,
    LOW_SOC_WARNING,
    SOC_NORMAL,
    HIGH_SOC_WARNING,
    HIGH_SOC_BREACH,
    SOC_UNDEFINED,
    MESSAGE_MAX
} WarningRanges;


typedef enum {
    DEFAULT,
    ENGLISH,
    GERMAN,
    CHINA,
	MAX_LANG
}Select_Language;


typedef enum {
    Approaching_Discharge,
    Approaching_Peak,
    Warning_max
} WarningWithTolerance;

const char* Store_WarningMessage[MESSAGE_MAX];
/*Warning Message language table*/
const char* WarningMessageTable[MAX_LANG][MESSAGE_MAX] = {
		{/*Language : DEFAULT */
			"LOW_SOC_BREACH","LOW_SOC_WARNING","SOC_NORMAL","HIGH_SOC_WARNING","HIGH_SOC_BREACH","SOC_UNDEFINED"},
		{/*Language : ENGLISH */
			"LOW_SOC_BREACH","LOW_SOC_WARNING","SOC_NORMAL","HIGH_SOC_WARNING","HIGH_SOC_BREACH","SOC_UNDEFINED"},
		{/*Language : GERMAN */
			"LOW_SOC_BREACH","LOW_SOC_WARNUNG","SOC_NORMAL","HIGH_SOC_WARNUNG","HIGH_SOC_BREACH","SOC_UNDEFINED"},
		{ /*Language : CHINA */
			"L_S_BREACHEN","L_S_WARN!!","NORMAL","H_S_WARN!!","H_S_BREACHEN","UNDEFINED"}
		
	};

void SelectLanguageandWarnigMessage(Select_Language Language);
WarningRanges BatteryHelathMonitor(int soc);
