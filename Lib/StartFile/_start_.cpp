#include <stdio.h>
//__attribute__ ((visibility ("visible"))) 
extern "C" int _start_(int argc, char **argv)
{
	printf("\n--_start_-- %s\n", argv);
	return 0;
}
	
	