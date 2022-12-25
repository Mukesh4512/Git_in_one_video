// file1.c

#include <stdio.h>
//#include "file1.h"

static int global_var = 0; // static global variable

void func1(void)
{
    global_var = 1;
}

