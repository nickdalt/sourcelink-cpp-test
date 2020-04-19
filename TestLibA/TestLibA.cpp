// TestLibA.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include <stdio.h>

// TODO: This is an example of a library function
extern "C"
{
	void fnTestLibA()
	{
		printf("TestLibA\n");
	}
}