/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
    CyGlobalIntEnable;
     Right_Eyeball_Start();
    for(;;)
    {
        LED_Write(1);
        CyDelay(10000);
        LED_Write(0);
        CyDelay(10000);
   Right_Eyeball_WriteCompare1(1500);
   Right_Eyeball_WriteCompare2(1500);
CyDelay(1000);
   Right_Eyeball_WriteCompare1(6500);
   Right_Eyeball_WriteCompare2(6500);
    }
}

/* [] END OF FILE */
