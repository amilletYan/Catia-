//===================================================================
// COPYRIGHT HUSTCAD 2018/12/01
//===================================================================
// CCatiaToIntevueAddin.cpp
// Header definition of class CCatiaToIntevueAddin
//===================================================================
//
// Usage notes:
//
//===================================================================
//  2018/12/01 Creation: Code generated by the 3DS wizard
//===================================================================

#ifndef CCatiaToIntevueAddin_H
#define CCatiaToIntevueAddin_H

#include "CATBaseUnknown.h"

//-----------------------------------------------------------------------
class CATCmdContainer;
class CCatiaToIntevueAddin: public CATBaseUnknown
{
	CATDeclareClass;
public:
// Standard constructors and destructors
// -------------------------------------
CCatiaToIntevueAddin ();
virtual ~CCatiaToIntevueAddin ();

//
// TODO: Add your methods for this class here.
//

void CreateCommands();
CATCmdContainer * CreateToolbars();
private:
// Copy constructor and equal operator
// -----------------------------------
CCatiaToIntevueAddin (CCatiaToIntevueAddin &);
CCatiaToIntevueAddin& operator=(CCatiaToIntevueAddin&);

};

//-----------------------------------------------------------------------

#endif
