#include "opendefs.h"
#include "topology.h"
#include "idmanager.h"
#define FORCETOPOLOGY
//=========================== defines =========================================

//=========================== variables =======================================

//=========================== prototypes ======================================

//=========================== public ==========================================

/**
\brief Force a topology.

This function is used to force a certain topology, by hard-coding the list of
acceptable neighbors for a given mote. This function is invoked each time a
packet is received. If it returns FALSE, the packet is silently dropped, as if
it were never received. If it returns TRUE, the packet is accepted.

Typically, filtering packets is done by analyzing the IEEE802.15.4 header. An
example body for this function which forces a topology is:

   switch (idmanager_getMyID(ADDR_64B)->addr_64b[7]) {
      case TOPOLOGY_MOTE1:
         if (ieee802514_header->src.addr_64b[7]==TOPOLOGY_MOTE2) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
      case TOPOLOGY_MOTE2:
         if (ieee802514_header->src.addr_64b[7]==TOPOLOGY_MOTE1 ||
             ieee802514_header->src.addr_64b[7]==TOPOLOGY_MOTE3) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
      default:
         returnVal=TRUE;
   }
   return returnVal;

By default, however, the function should return TRUE to *not* force any
topology.

\param[in] ieee802514_header The parsed IEEE802.15.4 MAC header.

\return TRUE if the packet can be received.
\return FALSE if the packet should be silently dropped.
*/
bool topology_isAcceptablePacket(ieee802154_header_iht* ieee802514_header) {
#ifdef FORCETOPOLOGY
   bool returnVal;
  
   returnVal=FALSE;
   switch (idmanager_getMyID(ADDR_64B)->addr_64b[7]) {
      case 0x3a:
         if (ieee802514_header->src.addr_64b[7]==0xf5 || ieee802514_header->src.addr_64b[7]==0xe8 || ieee802514_header->src.addr_64b[7]==0xe1 || ieee802514_header->src.addr_64b[7]==0xa8 || ieee802514_header->src.addr_64b[7]==0x36 
		 || ieee802514_header->src.addr_64b[7]==0x9a || ieee802514_header->src.addr_64b[7]==0xd0 || ieee802514_header->src.addr_64b[7]==0x00 || ieee802514_header->src.addr_64b[7]==0x28 || ieee802514_header->src.addr_64b[7]==0xe6
		 || ieee802514_header->src.addr_64b[7]==0xe7 || ieee802514_header->src.addr_64b[7]==0xfc || ieee802514_header->src.addr_64b[7]==0x24 || ieee802514_header->src.addr_64b[7]==0xdf || ieee802514_header->src.addr_64b[7]==0x9d ||
		 ieee802514_header->src.addr_64b[7]==0x3b || ieee802514_header->src.addr_64b[7]==0x15 || ieee802514_header->src.addr_64b[7]==0x04 || ieee802514_header->src.addr_64b[7]==0xee || ieee802514_header->src.addr_64b[7]==0xab) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
      case 0xf5:
         if (ieee802514_header->src.addr_64b[7]==0x3a) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;	 
      case 0xe8:
         if (ieee802514_header->src.addr_64b[7]==0x3a) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
	   case 0xe1:
         if (ieee802514_header->src.addr_64b[7]==0x3a) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
	   case 0xa8:
         if (ieee802514_header->src.addr_64b[7]==0x3a) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
	   case 0x36:
         if (ieee802514_header->src.addr_64b[7]==0x3a) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
	   case 0x28:
         if (ieee802514_header->src.addr_64b[7]==0x3a) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
	   case 0x00:
         if (ieee802514_header->src.addr_64b[7]==0x3a) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
	   case 0xd0:
         if (ieee802514_header->src.addr_64b[7]==0x3a) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
	   case 0x9a:
         if (ieee802514_header->src.addr_64b[7]==0x3a) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
	   case 0xe6:
         if (ieee802514_header->src.addr_64b[7]==0x3a) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
	   case 0xe7:
         if (ieee802514_header->src.addr_64b[7]==0x3a) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
		case 0xfc:
         if (ieee802514_header->src.addr_64b[7]==0x3a) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
		 case 0x24:
         if (ieee802514_header->src.addr_64b[7]==0x3a) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
		 case 0xdf:
         if (ieee802514_header->src.addr_64b[7]==0x3a) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
		 case 0x9d:
         if (ieee802514_header->src.addr_64b[7]==0x3a) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
		 case 0xab:
         if (ieee802514_header->src.addr_64b[7]==0x3a) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
		 case 0xee:
         if (ieee802514_header->src.addr_64b[7]==0x3a) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
		 case 0x04:
         if (ieee802514_header->src.addr_64b[7]==0x3a) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
		 case 0x15:
         if (ieee802514_header->src.addr_64b[7]==0x3a) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;
		 case 0x3b:
         if (ieee802514_header->src.addr_64b[7]==0x3a) {
            returnVal=TRUE;
         } else {
            returnVal=FALSE;
         }
         break;  		 	 		 		 		 		 		 		  	 		 		     
   }
   return returnVal;
#else
   return TRUE;
#endif
}

//=========================== private =========================================
