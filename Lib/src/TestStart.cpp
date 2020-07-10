// hd.cpp

// hex-dump app

// 12/07/00 (mv)
// 05/18/02 (mv)  double-space option
// 07/04/02 (mv)  .NET-ize, general updating

#include <stdio.h>

/*
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE

typedef unsigned char BYTE;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tchar.h>

#define UNPRINTABLE	_T('.')

FILE *fDump;
FILE *out;
int dblSpace;

// translates a character if it is unprintable
TCHAR GetChar(TCHAR _char)
{
	if (_char < 32)
		return UNPRINTABLE;

	return _char;
}

// opens the file to dump
void OpenFile(TCHAR *filename)
{
	fDump = _tfopen(filename, _T("rb"));
	if (!fDump)
	{
		_tprintf(_T("Error opening \"%s\"\n"), filename);
		exit(1);
	}
}

// dumps the file
void DumpFile(TCHAR *filename)
{
	// nSpaces solves the problem when a line is incomplete.
	// The number of spaces between the start of the hex data
	// and the ASCII text is stored here - if the file does
	// not end on a 16-bit boundary, the number here will be
	// the number of spaces to add so the ASCII column will
	// be aligned properly.

	BYTE fChar;
	int i=0;
	long bytesRead=0;
	TCHAR line[17];
	int nSpaces=3*16+2;			// spaces from beg. of data
	memset(&line, 0, sizeof(line));

	// print the filename
	_tprintf(_T("%s\n\n"), filename);

	if (dblSpace)
		_tprintf(_T("\n\n"));

	for (;;)
	{
		// print hex address
		_tprintf(_T("%08X  "), i);
		
		// print first 8 bytes
		for (int j = 0; j < 0x08; j++)
		{
			fChar = (BYTE)fgetc(fDump);
			if (feof(fDump))
				break;

			_tprintf(_T("%02X "), fChar);

			// add to the ASCII text
			line[bytesRead++] = GetChar(fChar);

			// this took three characters
			nSpaces -= 3;
		}

		// print last 8 bytes - change in the "xx " to " xx" provides
		// the double space in between the first 8 and the last 8 bytes.
		for (int j = 0x08; j < 0x10; j++)
		{
			fChar = (BYTE)fgetc(fDump);
			if (feof(fDump))
				break;

			_tprintf(_T(" %02X"), (unsigned char)fChar);

			// add to the ASCII text
			line[bytesRead++] = GetChar(fChar);

			// this took three characters
			nSpaces -= 3;
		}

		// fill in any leftover spaces.
		for (int j = 0; j <= nSpaces; j++)
		{
			_tprintf(_T(" "));
		}

		// print ASCII text
		_tprintf(_T("%s"), line);

		// quit if the file is done
		if (feof(fDump))
			break;

		// new line
		_tprintf(_T("\n"));

		if (dblSpace)
			_tprintf(_T("\n"));

		// reset everything
		bytesRead=0;
		memset(&line, 0, sizeof(line));
		i += 16;
		nSpaces = 3*16+2;
	}
}

// closes everything
void CloseFile()
{
	_tprintf(_T("\n"));
	fclose(fDump);
}
*/
/* Adust references to dllimported data that have non-zero offsets.  */
//extern void _pei386_runtime_relocator (void);

//extern "C"  void _pei386_runtime_relocator (void){};
/*
const class StaticClass
{
public:
    StaticClass() {printf("StaticClass constructor\n");};
    ~StaticClass() {printf("StaticClass destructor\n");};
};
StaticClass staticClass;
*/

/*
int fTest(){
	return 5;
}
int _nTest = fTest();

//int _nTest = 5;
 extern "C" int atexit(void (*function)(void)){
	 
 }


 
extern "C" int entry()  //entry is the entry point instead of main
{
	int _nIn = 5;
	
	float _nFlaot = 6.5;
	
	_nIn =(int) _nFlaot;
	
	printf("\n--entry--");
 // exit(0);
 return 0;
} 
*/
/*
 extern "C" int atexit(void (*function)(void)){
	 
 }
*/
/*
/*
 void exit(int exit_code) {
   system_dependent_exit(exit_code);
}*/

int _nTest = 5;
	
//__attribute__ ((visibility ("visible"))) 
extern "C" int test()
{
	printf("\n--!test!-- %s\n");
	return 0;
}
	

	
extern "C" int Main()
{
	printf("\n--!Main!--\n");
	return 0;
}
	

	
	
extern "C" int cpc_main(int argc, char **argv)
{
	printf("\n--aa cpc_main Test%s \n", argv);
	printf("\n--aaTest%d \n", _nTest);
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

extern "C" int __main(int argc, char **argv){
		printf("\n--__main--");
		return 0;
}

extern "C" int main(int argc, char **argv)
{
	printf("\n--Main \n");
	cpc_main(argc, argv);

	return 0;
}