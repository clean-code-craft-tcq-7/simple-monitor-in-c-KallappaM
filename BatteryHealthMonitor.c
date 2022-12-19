#include "BatteryManagmentSystem.h"

#define TOLERENCEVALUE 5

struct 
{
	int DrainRange;
	int PeakRange;
}descharge_range;

void CalculateDrianPeakThreshold(int MinThreshold , int MaxThreshold)
{
    int Value = (int)((TOLERENCEVALUE*MaxThreshold)/100);
    
     descharge_range.DrainRange = MinThreshold + Value;
     descharge_range.PeakRange  = MaxThreshold - Value;
}

WarningWithTolerance PreWarningIndicatorMessage(int input, int MinThreshold , int MaxThreshold )
{   

    CalculateDrianPeakThreshold(MinThreshold , MaxThreshold);
	
    if(input <= descharge_range.DrainRange)	    
    {
        return Approaching_Discharge;
    }
 
    if( input>= descharge_range.PeakRange)
    {
        return Approaching_Peak;
    }
}

/*WarningRanges BatteryHelathMonitor(int soc)
{  
    switch(soc)
    {
    case 0 ... 20:        
    return LOW_SOC_BREACH;
    break;
    case 21 ...24:
    return LOW_SOC_WARNING;
    break;
    case 25 ... 75:        
    return SOC_NORMAL; 
    break;
    case 76 ... 80:        
    return HIGH_SOC_WARNING;
    break;
    case 81 ... 100:
    return HIGH_SOC_BREACH;
    break;
    default:
    return SOC_UNDEFINED;
    break;
            
    }
}*/
