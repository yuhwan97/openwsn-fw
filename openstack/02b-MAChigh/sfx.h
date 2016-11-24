#ifndef __SFX_H
#define __SFX_H

/**
\addtogroup MAChigh
\{
\addtogroup sfx
\{
*/

#include "opendefs.h"

//=========================== define ==========================================

#define CELL_USAGE_CALCULATION_WINDOWS  10

//=========================== typedef =========================================

//=========================== module variables ================================

typedef struct {
  uint8_t backoff;   // in slotframe
}sfx_vars_t;

//=========================== prototypes ======================================

// admin
void      sfx_init(void);
// notification from sixtop
void      sfx_notif_addedCell(void);
void      sfx_notif_removedCell(void);
void      sfx_notifyNewSlotframe(void);

void      sfx_setBackoff(uint8_t value);

/**
\}
\}
*/

#endif