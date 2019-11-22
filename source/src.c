/*
first source file
*/
#include "..\include\header.h"

void main()
{
int x = 10;
int y = 15;
int z;  
z = addFunction(x, y);
printf("%d", z);
}

int addFunction(int x, int y)
{
  return (x + y);
}
