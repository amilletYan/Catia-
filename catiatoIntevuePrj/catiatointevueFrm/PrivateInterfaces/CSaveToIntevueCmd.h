//===================================================================
// COPYRIGHT HUSTCAD 2018/12/01
//===================================================================
// CSaveToIntevueCmd.cpp
// Header definition of class CSaveToIntevueCmd
//===================================================================
//
// Usage notes:
//
//===================================================================
//  2018/12/01 Creation: Code generated by the 3DS wizard
//===================================================================
#ifndef CSaveToIntevueCmd_H
#define CSaveToIntevueCmd_H

#include "CATCommand.h"
class CATIPLMComponent;

//----------------------------------------------------------------------

/**
* Describe your command here.
* <p>
* Using this prefered syntax will enable mkdoc to document your class.
* <p>
* refer to programming resources of System framework.
* (consult base class description).
*/

class CATDlgFile;

class CSaveToIntevueCmd: public CATCommand
{
	
public:
	CATDlgFile *_dlgFile;
CSaveToIntevueCmd();
virtual ~CSaveToIntevueCmd();

/**
* Overload this method: when your command gains focus
* <p>
* Activates a command.
* @param iFromClient
*   The command that requests to activate the current one.
* @param iEvtDat
*   The notification sent.
*/
virtual CATStatusChangeRC Activate(
CATCommand * iFromClient,
CATNotification * iEvtDat);

/**
*  Overload this method: when your command loses focus
* <p>
* Deactivates a command.
* @param iFromClient
*   The command that takes the current active place.
* @param iEvtDat
*   The notification sent.
*/
virtual CATStatusChangeRC Desactivate(
CATCommand * iFromClient,
CATNotification * iEvtDat);

/**
*  Overload this method: when your command is canceled
* <p>
* Cancels a command.
* @param iFromClient
*   The command that takes the current active place.
* @param iEvtDat
*   The notification sent.
*/
virtual CATStatusChangeRC Cancel(
CATCommand * iFromClient,
CATNotification * iEvtDat);


HRESULT GetRootProduct (CATBaseUnknown ** opRootProduct);

CATIPLMComponent  *GetRootComponent();

void OpenOK(CATCommand           * iSendingCommand, 
	CATNotification      * iSentNotification, 
	CATCommandClientData   iUsefulData);
};

//----------------------------------------------------------------------

#endif
