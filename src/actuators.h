#pragma once

// Send pulse  to servo every ... ms
#define PULSE_INTERVAL       (20)

/*****************************************************************************************************************************
*
*  
*
*   Returns: 
*     - 
*
*****************************************************************************************************************************/
int8_t servoTurn(const uint8_t, const uint16_t, const uint32_t, const uint32_t, const uint16_t);

