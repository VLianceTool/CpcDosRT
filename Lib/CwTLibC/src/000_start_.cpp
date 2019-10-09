#include <stdio.h>
extern "C" int Main();

extern "C" int _start_()
{
	printf("\n--_start_-- \n");
	return Main();
}
	
/*
extern "C" int __main()
{
	printf("\n__main\n");
	return 0;
}*/