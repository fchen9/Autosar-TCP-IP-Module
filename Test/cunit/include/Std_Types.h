
#ifndef STD_TYPES_H_
#define STD_TYPES_H_

/****************************************************************************************
 * INCLUDES
 ***************************************************************************************/
#include "Compiler.h"
#include "Platform_Types.h"
/***************************************************************************************
 * Defines
 ***************************************************************************************/

/* BSW00348 */
#ifndef STATUSTYPEDEFINED
#define STATUSTYPEDEFINED
    typedef unsigned char StatusType;
    #define E_OK 0u
#endif

/* BSW00357 */
#define E_NOT_OK 1u
#define E_COM_ID 2

/* STD007*/
#define STD_HIGH    0x01u /* Physical state 5V or 3.3V */
#define STD_LOW     0x00u /* Physical state 0V */

/* STD013 */
#define STD_ACTIVE  0x01u /* Logical state active */
#define STD_IDLE    0x00u /* Logical state idle */

/* STD010 */
#define STD_ON      0x01u
#define STD_OFF     0x00u

/****************************************************************************************
 * MACROS
 ***************************************************************************************/

/****************************************************************************************
 * DATA TYPES
 ***************************************************************************************/
typedef uint16 Std_ReturnType;

/* BSW00407 */
typedef struct {
    uint16 VendorId;
    uint16 ModuleId;
    uint16 SwMajorVersion;
    uint16 SwMinorVersion;
    uint16 SwPatchVersion;
} Std_VersionInfoType;
/****************************************************************************************
 * GLOBAL FUNCTION PROTOTYPES
 ***************************************************************************************/


/****************************************************************************************
 * END FILE
 ***************************************************************************************/

#endif /*STD_TYPES_H_*/
