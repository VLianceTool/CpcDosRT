
#include <stdio.h>

int _nTest = 5;

extern "C" int Main(char* _sParam)
{
	printf("\n--!Main!--%s : %d \n\n", _sParam, _nTest);
	return 0;
}

//Normal call (If compiled as standard way):
extern "C" int main(int argc, char **argv){
	printf("\n--Std Main--\n");
	Main(0);
	return 0;
}
