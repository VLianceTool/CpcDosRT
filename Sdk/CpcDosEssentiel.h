
#ifndef GZ_tLib_GZ
	#define GZ_tLib_GZ
	#include "Lib_GZ/GZ_inc.h" 
#endif



#ifdef tPlatform_CpcDos
	#include "Lib_GZ/SysUtils/CpcDosHeader.h"
#endif

extern "C" {
	extern gzInt nMainIsAlive; //Default 1 (Alive)
	//extern gzInt nMainUpdateMs; //Default 16 (~60 fps if available)
}



///Cpp