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
printf("%d\n", z);
}

int addFunction(int x, int y)
{
  return (x + y);
}

int subtractFunction(int x, int y)
{
  return (x - y);
}
