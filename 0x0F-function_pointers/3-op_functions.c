#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
* op_add - func to calculate the addition
* @a: first int
* @b: socond int
*
* Return: result
*/
int op_add(int a, int b)
{
   return (a + b);
}


/**
* op_sub - func to calculte the sub
* @a: first int
* @b: second int
*
* Return: result
*/
int op_sub(int a, int b)
{
   return (a - b);
}


/**
* op_mul - func to calculate the mul
* @a: first int
* @b: second int
*
* Return: return the mul
*/
int op_mul(int a, int b)
{
   return (a * b);
}


/**
* op_div - func tp calculate the div
* @a: first int
* @b: second int
*
* Return: result of the div
*/
int op_div(int a, int b)
{
   if (b == 0)
   {
       printf("Error\n");
       exit(100);
   }


   return (a / b);
}


/**
* op_mod - func to calculete the mod
* @a: first int
* @b: second int
*
* Return: return the mod
*/
int op_mod(int a, int b)
{
   if (b == 0)
   {
       printf("Error\n");
       exit(100);
   }


   return (a % b);
}

