/******************************************************************************/
/* Header Include                                                             */
/******************************************************************************/

#include <xc.h>
#include <plib/usart.h>

#include "Serial.h"


/******************************************************************************/
/* Functions                                                                  */
/******************************************************************************/
void putch(char val)
{
    char buf[2] = "x";
    buf[0] = val;
    putsUSART(buf);
}
