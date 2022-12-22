#include "BatteryManagmentSystem.h"


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
