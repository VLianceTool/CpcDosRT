#include <stdio.h>
extern "C" int Main(char*);

//__attribute__ ((visibility ("visible"))) 
//extern "C" int _start_(int argc, char **argv)
extern "C" int _start_()
{
	return Main(0);
}
//Required!? (Normally this function will never be called)
extern "C" int __main(int argc, char **argv){
	printf("\n--?!--\n");
	return Main(0);
}
///