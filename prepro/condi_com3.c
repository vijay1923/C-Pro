// If multiple header files are in .c file then this how to avoid redeclaration problem in .i file

//******** Write this in header.h file ********///////
 
#include<stdio.h>
 
#pragma once 		// to avoid redeclaration in .i file 
typedef int INT;
INT sum(INT ,INT );

///// or you can write /////

#ifndef op
#define op
typedef int INT;
INT sum(INT ,INT );
#endif
 
