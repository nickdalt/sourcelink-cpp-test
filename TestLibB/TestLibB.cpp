// TestLibB.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include <stdio.h>

extern "C"
{
	// TODO: This is an example of a library function
	void fnTestLibB()
	{
		printf("TestLibB\n");
	}
}
