#include "BatteryManagmentSystem.h"


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

/*Function to store the requiested language*/
void SelectLanguageandWarnigMessage(Select_Language Language)
{   
   if(Language < MAX_LANG)
   {
      for(int i =0;i<MESSAGE_MAX;i++)
      {
      	Store_WarningMessage[i] = WarningMessageTable[Language][i];
      }
    } 
}
