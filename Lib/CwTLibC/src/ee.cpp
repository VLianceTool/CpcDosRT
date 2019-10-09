// hd.cpp

// hex-dump app

// 12/07/00 (mv)
// 05/18/02 (mv)  double-space option
// 07/04/02 (mv)  .NET-ize, general updating

#include <stdio.h>

int _nTest2 = 5;
	
extern "C" int entry2(int argc, char **argv)
{

   // int argc= system_dependent_argc();
 //  char** argv= system_dependent_argv();
 
	printf("\n--Entry2-- %s\n", argv);
		return 0;
}
	
	
extern "C" int cpc_main2(int argc, char **argv)
{
	printf("\n--aaTest%s \n", argv);
	printf("\n--aaTest%d \n", _nTest2);
	printf("\n--End-- \n");
	return 0;
}

/*
extern "C" int entry(int argc, char **argv)
{
	printf("\n--aaTest%d \n", _nTest);
	printf("\n--End-- \n");
	return 0;
}
*/
/*
extern "C" int __main(int argc, char **argv){
		printf("\n--__main--");
		return 0;
}

extern "C" int main(int argc, char **argv)
{
	printf("\n--Main \n");
	cpc_main(argc, argv);

	return 0;
}*/