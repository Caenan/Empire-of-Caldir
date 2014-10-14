//------------------------------------------------------------------------------
//	Empire of Caldir
//	(c) Smokestack Games
//------------------------------------------------------------------------------
#include <Windows.h>

#include "kernel\assert.h"

//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, INT nCmdShow)
{
	peasoup::Assert::getInstance().reportError("test 1", 1, "test 2", "test %d", 3);

	return 0;
}
