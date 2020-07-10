#include <stdio.h>

extern "C" int Main();

//__attribute__ ((visibility ("visible"))) 
//extern "C" int _start_(int argc, char **argv)
extern "C" int _start_()
{
	//printf("\n--_start_-- %s\n", argv);
	printf("\n--_start_-- \n");
	return Main();
}


